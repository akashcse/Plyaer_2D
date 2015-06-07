 #include"all_star_b9.h"
#include<QTimer>
#include<QDebug>
#include<QGraphicsscene>
#include<QList>
#include"football.h"
#include"game_control.h"
#include<QTimer>
#include<QTime>
extern game_control *Game;

all_star_b9::all_star_b9(QGraphicsItem *parent):QObject(),QGraphicsPixmapItem(parent)
{
       setPixmap(QPixmap(":/images/players/B(9).png"));
       Heading=qrand()%7;
       Vision=qrand()%7;
       Pace=qrand()%7;
       Accelarlation=qrand()%7;
       Stamina=qrand()%100;
       Controler=0;

       Marking=0;
       Decisions=0;

       QTimer * timer=new QTimer();
       connect(timer,SIGNAL(timeout()),this,SLOT(move()));
       timer->start(70);

}

void all_star_b9::move()
{
    if(Game->ContVar->Freze_Player==1) return;
    int Total=0, Ballx=0,Bally=0,X=0,Y=0,NearX=0,NearY=0,Shot,Shot_Count;
    Ballx=Game->ball->pos().x();
    Bally=Game->ball->pos().y();

    X=pos().x();
    Y=pos().y();

    Total=abs(X-Ballx)+abs(Y-Bally);
    Game->NearB->Search_Nearest(X,Y);
    NearX=Game->NearB->Get_NearX();
    NearY=Game->NearB->Get_NearY();
    QList<QGraphicsItem *> colliding_items=collidingItems();
         for(int i=0,n=colliding_items.size();i<n;i++){
             if(typeid(*(colliding_items[i]))==typeid(football)){
                 if(Game->ContVar->Ball_On_Air==1&&Heading<4) break;
                 else{
                     Game->Dtl->Dpl="Head..!.";
                     Game->Dtl->Display();
                 }
                 Game->ContVar->Ball_Control=2;
                 Game->ContVar->Ball_Owner=9;
                 if(Game->ContVar->Half==1){
                     if(X<=110&&(Y>=150&&Y<=415)){
                         Game->ball->Goal_Shot();
                         return;
                     }
                     Shot=rand()%4;

                     if(Game->ContVar->Through==2){
                         QTime dieTime= QTime::currentTime().addMSecs(100);
                                     while( QTime::currentTime() < dieTime )
                                     QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
                         Game->ContVar->Through=0;
                         Shot=3;
                     }

                     if(Shot==0){
                         Game->ball->Short_pass(NearX,NearY);
                     }
                     else if(Shot==1){
                          Game->ball->Own_Handle();
                          if(Game->ContVar->Half==1){
                              setPos(pos().x()+(Pace+Accelarlation),pos().y());
                          }
                     }
                     else if(Shot==2){
                         if(Vision<4) Game->ball->Long_Shot(Game->NearB->Get_FarX()-5,Game->NearB->Get_FarY()-5);
                         else Game->ball->Long_Shot(Game->NearB->Get_FarX(),Game->NearB->Get_FarY());
                     }

                     else{
                         if(Vision<4) Game->ball->Long_Shot(Game->NearB->Get_FarX()-5,Game->NearB->Get_FarY()-5);
                         else Game->ball->Long_Shot(Game->NearB->Get_FarX(),Game->NearB->Get_FarY());
                     }
                 }
                 else{
                     if(X>635&&(Y>=150&&Y<=415)){
                         Game->ball->Goal_Shot();
                         return;
                     }

                     Shot=rand()%4;

                     if(Game->ContVar->Through==2){
                         QTime dieTime= QTime::currentTime().addMSecs(100);
                                     while( QTime::currentTime() < dieTime )
                                     QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
                         Game->ContVar->Through=0;
                         Shot=3;
                     }

                     if(Shot==0){
                         Game->ball->Short_pass(NearX,NearY);
                     }
                     else if(Shot==1){
                          Game->ball->Own_Handle();
                          if(Game->ContVar->Half==1){
                              setPos(pos().x()+(Pace+Accelarlation),pos().y());
                          }
                     }
                     else if(Shot==2){
                         if(Vision<4) Game->ball->Long_Shot(Game->NearA->Get_FarX()-5,Game->NearA->Get_FarY()-5);
                         else Game->ball->Long_Shot(Game->NearA->Get_FarX(),Game->NearA->Get_FarY());
                     }

                     else{
                         if(Vision<4) Game->ball->Long_Shot(Game->NearA->Get_FarX()-5,Game->NearA->Get_FarY()-5);
                         else Game->ball->Long_Shot(Game->NearA->Get_FarX(),Game->NearA->Get_FarY());
                     }
                 }
                // qDebug()<<"X= "<<NearX<<"Y= "<<NearY<<endl;
                 //Game->ball->Enable_counter(30);


                  //if(Game->ContVar->Through!=0) Game->ContVar->Through=0;
                 return;

             }
             /*else if(Game->CC->Check_For_B(colliding_items[i])){
                ++Marking;
                 if(Marking=1000){
                     Decisions++;
                     Marking=0;
                     Game->ContVar->Through=1;

                     Game->Dtl->Dpl="Foul Foul !!!";
                     Game->Dtl->Display();
                     if(Game->ball->pos().x()>635&&(Game->ball->pos().y()>=150&&Game->ball->pos().y()<=415)){

                         Game->ball->i=690;
                         Game->ball->k=280;
                         Game->ball->Dx=690;
                         Game->ball->Dy=280;
                         Game->ball->setPos(690,280);
                     }
                     else if(Game->ball->pos().x()<=110&&(Game->ball->pos().y()>=150&&Game->ball->pos().y()<=415)){

                         Game->ball->i=80;
                         Game->ball->k=280;
                         Game->ball->Dx=80;
                         Game->ball->Dy=280;
                         Game->ball->setPos(80,280);
                     }
                 }


             }*/

         }

         //qDebug()<<Pace<<"  "<<Accelarlation<<"  10"<<endl;
if(Game->ContVar->StopB==9) return;
if(Game->ContVar->Half==1){
    if(Game->ContVar->Ball_Control==2){
             int Dir=rand()%8;

             if(Game->ContVar->TeamBside==2){
                 //qDebug()<<pos().x()<<" "<<pos().y()<<endl;
                 if(Dir==0){
                     if(X>15)
                     setPos(pos().x()-(Pace+Accelarlation)/2,pos().y());
                 }
                 else if(Dir==1){
                     if(X<15)
                     setPos(pos().x()+(Pace+Accelarlation)/2,pos().y());
                 }
                 else if(Dir==2){
                     if(X<15&&Y<515)
                     setPos(pos().x()+(Pace+Accelarlation)/4,pos().y()+(Pace+Accelarlation)/4);
                 }
                 else if(Dir==3&&Y>50){
                     if(X<15)
                     setPos(pos().x()+(Pace+Accelarlation)/4,pos().y()-(Pace+Accelarlation)/4);
                 }
                 else if(Dir==4){
                      if(X>15&&Y>50)
                     setPos(pos().x()-(Pace+Accelarlation)/4,pos().y()-(Pace+Accelarlation)/4);
                 }
                 else if(Dir==5){
                     if(Y>50)
                     setPos(pos().x(),pos().y()-(Pace+Accelarlation)/2);
                 }
                 else if(Dir==6){
                     if(Y<515)
                     setPos(pos().x(),pos().y()+(Pace+Accelarlation)/2);
                 }
                 else if(Dir==7){
                     if(X>15&&Y<515)
                     setPos(pos().x()-(Pace+Accelarlation)/4,pos().y()+(Pace+Accelarlation)/4);
                 }
             }

         }

    else if(Total<60){
   if(Game->ball->pos().x()>=pos().x()){
       if(Game->ball->pos().y()>pos().y()){
           setPos(x()+(Pace+Accelarlation)/2,y()+(Pace+Accelarlation)/2+1);

       }
       else{
           setPos(x()+(Pace+Accelarlation)/2,y()-(Pace+Accelarlation)/2-1);

       }
   }
   else if(Game->ball->pos().x()<pos().x()){
       if(Game->ball->pos().y()>=pos().y()){
           setPos(x()-(Pace+Accelarlation)/2,y()+(Pace+Accelarlation)/2+1);

       }
       else{
           setPos(x()-(Pace+Accelarlation)/2,y()-(Pace+Accelarlation)/2-1);

       }
   }

}
    else if(Game->ContVar->Ball_Control==1){
                       int Dir=rand()%8;

                       if(Game->ContVar->TeamBside==2){
                           //qDebug()<<pos().x()<<" "<<pos().y()<<endl;
                           if(Dir==0){
                               if(X>45)
                               setPos(pos().x()-(Pace+Accelarlation)/2,pos().y());
                           }
                           else if(Dir==1){
                               if(X<745)
                               setPos(pos().x()+(Pace+Accelarlation)/2,pos().y());
                           }
                           else if(Dir==2){
                               if(X<745&&Y<515)
                               setPos(pos().x()+(Pace+Accelarlation)/4,pos().y()+(Pace+Accelarlation)/4);
                           }
                           else if(Dir==3&&Y>50){
                               if(X<745)
                               setPos(pos().x()+(Pace+Accelarlation)/4,pos().y()-(Pace+Accelarlation)/4);
                           }
                           else if(Dir==4){
                                if(X>45&&Y>50)
                               setPos(pos().x()-(Pace+Accelarlation)/4,pos().y()-(Pace+Accelarlation)/4);
                           }
                           else if(Dir==5){
                               if(Y>50)
                               setPos(pos().x(),pos().y()-(Pace+Accelarlation)/2);
                           }
                           else if(Dir==6){
                               if(Y<515)
                               setPos(pos().x(),pos().y()+(Pace+Accelarlation)/2);
                           }
                           else if(Dir==7){
                               if(X>45&&Y<515)
                               setPos(pos().x()-(Pace+Accelarlation)/4,pos().y()+(Pace+Accelarlation)/4);
                           }
                       }

                   }


}
else{
    if(Game->ContVar->Ball_Control==2){
                  int Dir=rand()%8;

                  if(Game->ContVar->TeamAside==1){
                      //qDebug()<<pos().x()<<" "<<pos().y()<<endl;
                      if(Dir==0){
                          if(X>45)
                          setPos(pos().x()-(Pace+Accelarlation)/4,pos().y());
                      }
                      else if(Dir==1){
                          if(X<750)
                          setPos(pos().x()+(Pace+Accelarlation)/2,pos().y());
                      }
                      else if(Dir==2){
                          if(X<750&&Y<515)
                          setPos(pos().x()+(Pace+Accelarlation)/4,pos().y()+(Pace+Accelarlation)/4);
                      }
                      else if(Dir==3&&Y>50){
                          if(X<750)
                          setPos(pos().x()+(Pace+Accelarlation)/4,pos().y()-(Pace+Accelarlation)/4);
                      }
                      else if(Dir==4){
                           if(X>45&&Y>50)
                          setPos(pos().x()-(Pace+Accelarlation)/5,pos().y()-(Pace+Accelarlation)/4);
                      }
                      else if(Dir==5){
                          if(Y>50)
                          setPos(pos().x(),pos().y()-(Pace+Accelarlation)/2);
                      }
                      else if(Dir==6){
                          if(Y<515)
                          setPos(pos().x(),pos().y()+(Pace+Accelarlation)/2);
                      }
                      else if(Dir==7){
                          if(X>45&&Y<515)
                          setPos(pos().x()-(Pace+Accelarlation)/5,pos().y()+(Pace+Accelarlation)/4);
                      }
                  }

              }


    else if(Total<60){
        if(Game->ball->pos().x()>=pos().x()){
            if(Game->ball->pos().y()>pos().y()){
                setPos(x()+(Pace+Accelarlation)/2,y()+(Pace+Accelarlation)/2+1);

            }
            else{
                setPos(x()+(Pace+Accelarlation)/2,y()-(Pace+Accelarlation)/2-1);

            }
        }
        else if(Game->ball->pos().x()<pos().x()){
            if(Game->ball->pos().y()>=pos().y()){
                setPos(x()-(Pace+Accelarlation)/2,y()+(Pace+Accelarlation)/2+1);

            }
            else{
                setPos(x()-(Pace+Accelarlation)/2,y()-(Pace+Accelarlation)/2-1);

            }
        }

    }

    else if(Game->ContVar->Ball_Control==1){
                  int Dir=rand()%8;

                  if(Game->ContVar->TeamAside==1){
                      //qDebug()<<pos().x()<<" "<<pos().y()<<endl;
                      if(Dir==0){
                          if(X>45)
                          setPos(pos().x()-(Pace+Accelarlation)/2,pos().y());
                      }
                      else if(Dir==1){
                          if(X<45)
                          setPos(pos().x()+(Pace+Accelarlation)/4,pos().y());
                      }
                      else if(Dir==2){
                          if(X<45&&Y<515)
                          setPos(pos().x()+(Pace+Accelarlation)/5,pos().y()+(Pace+Accelarlation)/4);
                      }
                      else if(Dir==3&&Y>50){
                          if(X<45)
                          setPos(pos().x()+(Pace+Accelarlation)/5,pos().y()-(Pace+Accelarlation)/4);
                      }
                      else if(Dir==4){
                           if(X>45&&Y>50)
                          setPos(pos().x()-(Pace+Accelarlation)/4,pos().y()-(Pace+Accelarlation)/4);
                      }
                      else if(Dir==5){
                          if(Y>50)
                          setPos(pos().x(),pos().y()-(Pace+Accelarlation)/2);
                      }
                      else if(Dir==6){
                          if(Y<515)
                          setPos(pos().x(),pos().y()+(Pace+Accelarlation)/2);
                      }
                      else if(Dir==7){
                          if(X>45&&Y<515)
                          setPos(pos().x()-(Pace+Accelarlation)/4,pos().y()+(Pace+Accelarlation)/4);
                      }
                  }

              }

}


}






