#include"all_star_b1.h"
#include<QTimer>
#include<QDebug>
#include<QGraphicsscene>
#include<QList>
#include"football.h"
#include"game_control.h"
#include<QTime>
#include<QTime>
#include<QTimer>

extern game_control *Game;

all_star_b1::all_star_b1(QGraphicsItem *parent):QObject(),QGraphicsPixmapItem(parent)
{
        //set player as circle
       // setPixmap(QPixmap(":/images/b.png"));
       setPixmap(QPixmap(":/images/players/B(1).png"));
       Heading=qrand()%7;
       Vision=qrand()%7;
       Pace=qrand()%5;
       Accelarlation=qrand()%5;
       Stamina=qrand()%100;
       Controler=0;
       Marking=0;
       Decisions=0;

       QTimer * timer=new QTimer();

       //connect timre
       connect(timer,SIGNAL(timeout()),this,SLOT(move()));
       timer->start(50);

}




         void all_star_b1::move()
         {
             if(Game->ContVar->Freze_Player==1) return;
             int Total=0, Ballx=0,Bally=0,X=0,Y=0,NearX,NearY;
             Ballx=Game->ball->pos().x();
             Bally=Game->ball->pos().y();

             X=pos().x();
             Y=pos().y();

             Total=abs(X-Ballx)+abs(Y-Bally);

             QList<QGraphicsItem *> colliding_items=collidingItems();
                  for(int i=0,n=colliding_items.size();i<n;i++){
                      if(typeid(*(colliding_items[i]))==typeid(football)){
                         if(Game->ContVar->Ball_On_Air==1&&Heading<4) break;
                         else{
                             Game->Dtl->Dpl="Head..!.";
                             Game->Dtl->Display();
                         }
                          Game->ContVar->Ball_Control=2;
                          Game->ContVar->Ball_Owner=1;
                          Game->NearB->Search_Nearest(X,Y);
                          NearX=Game->NearB->Get_NearX();
                          NearY=Game->NearB->Get_NearY();


                          if(Game->ContVar->Half==1){
                              if(Game->ContVar->Through==2){
                                  QTime dieTime= QTime::currentTime().addMSecs(100);
                                              while( QTime::currentTime() < dieTime )
                                              QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
                                  Game->ContVar->Through=0;
                                  //Shot=3;
                              }
                              Game->ball->Long_Shot_Air(Game->ball->pos().x()-(rand()%150+340),rand()%200+15);

                          }
                          else{
                              if(Game->ContVar->Through==2){
                                  QTime dieTime= QTime::currentTime().addMSecs(100);
                                              while( QTime::currentTime() < dieTime )
                                              QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
                                  Game->ContVar->Through=0;
                                  //Shot=3;
                              }
                              Game->ball->Long_Shot_Air(rand()%150+340,rand()%200+15);
                          }

                          if(Game->ContVar->Through!=0) Game->ContVar->Through=0;
                          return;

                      }
              /*        else if(Game->CC->Check_For_B(colliding_items[i])){
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
             if(Game->ContVar->StopB==1) return;
             if(Game->ContVar->Half==1){
                 if(Game->ContVar->Ball_Control==2){
                         int Dir=rand()%8;

                         if(Game->ContVar->TeamBside==2){
                             //qDebug()<<Pace<<"  "<<Accelarlation<<"  keeper"<<endl;
                             //qDebug()<<pos().x()<<" "<<pos().y()<<endl;17,220,340
                             if(Dir==0){
                                 if(X>660)
                                 setPos(pos().x()-(Pace+Accelarlation)/2,pos().y());
                             }
                             else if(Dir==1){
                                 if(X<750)
                                 setPos(pos().x()+(Pace+Accelarlation)/2,pos().y());
                             }
                             else if(Dir==2){
                                 if(X<750&&Y<340)
                                 setPos(pos().x()+(Pace+Accelarlation)/4,pos().y()+(Pace+Accelarlation)/4);
                             }
                             else if(Dir==3&&Y>220){
                                 if(X<750)
                                 setPos(pos().x()+(Pace+Accelarlation)/4,pos().y()-(Pace+Accelarlation)/4);
                             }
                             else if(Dir==4){
                                  if(X>660&&Y>220)
                                 setPos(pos().x()-(Pace+Accelarlation)/4,pos().y()-(Pace+Accelarlation)/4);
                             }
                             else if(Dir==5){
                                 if(Y>220)
                                 setPos(pos().x(),pos().y()-(Pace+Accelarlation)/2);
                             }
                             else if(Dir==6){
                                 if(Y<340)
                                 setPos(pos().x(),pos().y()+(Pace+Accelarlation)/2);
                             }
                             else if(Dir==7){
                                 if(X>660&&Y<340)
                                 setPos(pos().x()-(Pace+Accelarlation)/4,pos().y()+(Pace+Accelarlation)/4);
                             }
                         }

                     }


                 else if(Total<120){
                     if(Game->ball->pos().x()>=pos().x()){
                         if(Game->ball->pos().y()>pos().y()){
                             if(X<750&&Y<340)
                             setPos(x()+(Pace+Accelarlation)/2,y()+(Pace+Accelarlation)/2+1);

                         }
                         else{
                             if(X<750&&Y>220)
                             setPos(x()+(Pace+Accelarlation)/2,y()-(Pace+Accelarlation)/2-1);

                         }
                     }
                     else if(Game->ball->pos().x()<pos().x()){
                         if(Game->ball->pos().y()>=pos().y()){
                             if(X>660&&Y<340)
                             setPos(x()-(Pace+Accelarlation)/2,y()+(Pace+Accelarlation)/2+1);

                         }
                         else{
                             if(X>660&&Y>220)
                             setPos(x()-(Pace+Accelarlation)/2,y()-(Pace+Accelarlation)/2-1);

                         }
                     }

                 }

             }
             else{
                 if(Game->ContVar->Ball_Control==2){
                         int Dir=rand()%8;

                         if(Game->ContVar->TeamAside==1){
                             //qDebug()<<pos().x()<<" "<<pos().y()<<endl;17,220,340
                             if(Dir==0){
                                 if(X>18)
                                 setPos(pos().x()-(Pace+Accelarlation)/2,pos().y());
                             }
                             else if(Dir==1){
                                 if(X<110)
                                 setPos(pos().x()+(Pace+Accelarlation)/2,pos().y());
                             }
                             else if(Dir==2){
                                 if(X<110&&Y<340)
                                 setPos(pos().x()+(Pace+Accelarlation)/4,pos().y()+(Pace+Accelarlation)/4);
                             }
                             else if(Dir==3&&Y>220){
                                 if(X<110)
                                 setPos(pos().x()+(Pace+Accelarlation)/4,pos().y()-(Pace+Accelarlation)/4);
                             }
                             else if(Dir==4){
                                  if(X>18&&Y>220)
                                 setPos(pos().x()-(Pace+Accelarlation)/4,pos().y()-(Pace+Accelarlation)/4);
                             }
                             else if(Dir==5){
                                 if(Y>220)
                                 setPos(pos().x(),pos().y()-(Pace+Accelarlation)/2);
                             }
                             else if(Dir==6){
                                 if(Y<340)
                                 setPos(pos().x(),pos().y()+(Pace+Accelarlation)/2);
                             }
                             else if(Dir==7){
                                 if(X>18&&Y<340)
                                 setPos(pos().x()-(Pace+Accelarlation)/4,pos().y()+(Pace+Accelarlation)/4);
                             }
                         }

                     }


                 else if(Total<120){
                     if(Game->ball->pos().x()>=pos().x()){
                         if(Game->ball->pos().y()>pos().y()){
                             if(X<110&&Y<340)
                             setPos(x()+(Pace+Accelarlation)/2,y()+(Pace+Accelarlation)/2+1);

                         }
                         else{
                             if(X<110&&Y>220)
                             setPos(x()+(Pace+Accelarlation)/2,y()-(Pace+Accelarlation)/2-1);

                         }
                     }
                     else if(Game->ball->pos().x()<pos().x()){
                         if(Game->ball->pos().y()>=pos().y()){
                             if(X>18&&Y<340)
                             setPos(x()-(Pace+Accelarlation)/2,y()+(Pace+Accelarlation)/2+1);

                         }
                         else{
                             if(X>18&&Y>220)
                             setPos(x()-(Pace+Accelarlation)/2,y()-(Pace+Accelarlation)/2-1);

                         }
                     }

                 }


             }



         }



