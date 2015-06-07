#include"football.h"
#include<QTimer>
#include<QDebug>
#include<QGraphicsscene>
#include<QList>
#include<stdlib.h>
#include<QDebug>
#include<stdio.h>
#include"game_control.h"
#include <QThread>
#include<QTime>
extern game_control *Game;

football::football(QGraphicsItem *parent):QObject(),QGraphicsPixmapItem(parent)
{
        //set player as circle
        setPixmap(QPixmap(":/images/ball.png"));
       // setPos(390,290);
       // scene()->addItem(this);
        Counter=0;
         Sp=0,Lp=0;
         i=390,k=290;
         //i=10,k=299;
         Dx=390,Dy=290;
         PreX=0,PreY=0;Count_ball=0;Air=0;
        //connect
         //qDebug()<<"counter "<<this->pos().x();
     //   if(Counter--){
           QTimer * timer=new QTimer();
            connect(timer,SIGNAL(timeout()),this,SLOT(move()));
            timer->start(15);
      //  }

}

void football::Enable_counter(int A, int Xdir,int Ydir)
{
     //qDebug()<<"Xdir= "<<Xdir<<"Ydir= "<<Ydir<<endl;
    Counter=A;Xline=Xdir;Yline=Ydir;
}

void football::Long_Shot(int X, int Y)
{
    Game->Dtl->Dpl="Long Shot.";
    Game->Dtl->Display();

    Game->ContVar->Ball_on_pass=1;
    //Game->ContVar->Freze_Player=0;
     i=pos().x(),k=pos().y();
     Dx=X;Dy=Y;

    MinX=float((Dx-i)/100);MinY=float((Dy-k)/100);


    if(i<Dx) FlagX=true;
    else FlagX=false;
    if(k<Dy) FlagY=true;
    else FlagY=false;

}

void football::Long_Shot_Air(int X, int Y)
{
    Game->Dtl->Dpl="Shot on Air!.";
    Game->Dtl->Display();

    i=pos().x(),k=pos().y();
    Dx=X;Dy=Y;

   MinX=float((Dx-i)/100);MinY=float((Dy-k)/100);


   if(i<Dx){
       Game->ContVar->FalX=X-10;
       FlagX=true;
   }
   else{
       Game->ContVar->FalX=X+10;
       FlagX=false;
   }
   if(k<Dy){
       Game->ContVar->FalY=Y-10;
       FlagY=true;
   }
   else{
       Game->ContVar->FalY=Y+10;
       FlagY=false;
   }

   Game->ContVar->Ball_On_Air=1;


}

void football::Short_pass(int X, int Y)
{
    Game->Dtl->Dpl="Short Pass!.";
    Game->Dtl->Display();

    i=pos().x(),k=pos().y();
    Dx=X;Dy=Y;

   MinX=float((Dx-i)/30);MinY=float((Dy-k)/30);


   if(i<Dx) FlagX=true;
   else FlagX=false;
   if(k<Dy) FlagY=true;
   else FlagY=false;

}

void football::Own_Handle()
{
    Game->Dtl->Dpl="Ball handling!.";
    Game->Dtl->Display();

    if(Game->ContVar->Half==1){
        if(Game->ContVar->Ball_Control==1){
           Short_pass(pos().x()+25,pos().y());
           // setPos(pos().x()+40,pos().y());
        }
        else{
          Short_pass(pos().x()-25,pos().y());
        }
    }


}

void football::Goal_Shot()
{
    Game->Dtl->Dpl="Shot on Gaol.";
    Game->Dtl->Display();

    if(Game->ContVar->Half==1){
        if(Game->ContVar->Ball_Control==1){
            int X=rand()%30+740,Y=rand()%265+150;
            Short_pass(X,Y);
        }
        else{
            int X=10+rand()%15,Y=rand()%265+150;
            Short_pass(X,Y);
        }

    }

}

void football::move()
{
   if(Game->ContVar->Freze_Player==1) return;
   //i=10,k=299;

    setPos(i,k);

    if(Game->ContVar->Ball_On_Air==1){
        ++Air;
        if(Air==80){
            Game->ContVar->Ball_On_Air=0;
            Air=0;
        }
    }

    if(i==PreX&&k==PreY){
        if(++Count_ball==5){
            Game->ContVar->Ball_Stop=0;
            Game->Strt->Nearest_Chase();
            Count_ball=0;
        }

    }
    else{
        PreX=i;
        PreY=k;
        Game->ContVar->Ball_Stop=1;
    }

    if(i<20&&(k>=240&&k<=330)){
        Game->Dtl->Dpl="Goal Goal!.";
        Game->Dtl->Display();

        Game->Strt->start_again(1);
        i=Dx=390,k=Dy=290;

        if(Game->ContVar->Half==1){
            Game->Scr->IncreaseB();
        }
        else
            Game->Scr->IncreaseA();

    }
    else if(i>750&&(k>=240&&k<=330)){
        Game->Dtl->Dpl="Goal Goal!.";
        Game->Dtl->Display();

        Game->Strt->start_again(2);
        i=Dx=390,k=Dy=290;
        if(Game->ContVar->Half==2){
            Game->Scr->IncreaseB();
        }
        else
            Game->Scr->IncreaseA();
     }
//Corner
    if(i<20){
        if(Game->ContVar->Half==1){
            if(Game->ContVar->Ball_Control==1){

                Game->Dtl->Dpl="Corner kick.";
                Game->Dtl->Display();


                if(k>=290) Game->ContVar->Corner=3;
                else Game->ContVar->Corner=2;
                Game->Cr->Controler=10;
                Game->Cr->Team=2;
            }
            else{
                //goal kick
                Game->Dtl->Dpl="Goal kick.";
                Game->Dtl->Display();

                Game->ContVar->Through=1;
                i=Dx=70,k=Dy=280;//50,280
            }
        }
        else{
            if(Game->ContVar->Ball_Control==2){
                Game->Dtl->Dpl="Corner Kick.";
                Game->Dtl->Display();

                if(k>=290) Game->ContVar->Corner=3;
                else Game->ContVar->Corner=2;
                Game->Cr->Controler=10;
                Game->Cr->Team=1;
            }
            else{
                //goal kick
                Game->Dtl->Dpl="Goal Kick.";
                Game->Dtl->Display();

                Game->ContVar->Through=2;
                i=Dx=70,k=Dy=280;
            }
        }
        if(Game->ContVar->Corner==2){
            i=Dx=25,k=Dy=55;
            Game->ball->setPos(25,55);
        }
        else if(Game->ContVar->Corner==3){
            i=Dx=25,k=Dy=55;
            Game->ball->setPos(25,510);
        }

    }
    else if(i>750){
        if(Game->ContVar->Half==1){
            if(Game->ContVar->Ball_Control==2){
                if(k>=290) Game->ContVar->Corner=4;
                else Game->ContVar->Corner=1;
                Game->Cr->Controler=10;
                Game->Cr->Team=1;
            }
            else{
                //goal kick
                Game->Dtl->Dpl="Goal Kick.";
                Game->Dtl->Display();
                Game->ContVar->Through=2;
                i=Dx=700,k=Dy=280;//50,280

            }
        }
        else{
            if(Game->ContVar->Ball_Control==1){
                if(k>=290) Game->ContVar->Corner=4;
                else Game->ContVar->Corner=1;
                Game->Cr->Controler=10;
                Game->Cr->Team=2;
            }
            else{
                //goal kick
                Game->Dtl->Dpl="Goal Kick.";
                Game->Dtl->Display();

                Game->ContVar->Through=1;
                i=Dx=700,k=Dy=280;//720,280

            }
        }
        if(Game->ContVar->Corner==1){
             i=Dx=750,k=Dy=55;
            Game->ball->setPos(750,55);
        }
        else if(Game->ContVar->Corner==4){
             i=Dx=750,k=Dy=510;
            Game->ball->setPos(750,510);
        }
    }
//Through
    if(k<50){

        Game->Dtl->Dpl="Through in.";
        Game->Dtl->Display();

        if(Game->ContVar->Ball_Control==1){
            Game->ContVar->Through=2;
        }
        else
             Game->ContVar->Through=1;
    }
    else if(k>510){
        if(Game->ContVar->Ball_Control==1){
            Game->ContVar->Through=2;
        }
        else
             Game->ContVar->Through=1;
    }

    if(i==Dx&&k==Dy) return;

    if(FlagX&&i>=Dx) i=Dx;
    else if(!FlagX&&i<=Dx) i=Dx;
    else if(FlagX) i+=MinX;
    else i+=MinX;

    if(FlagY&&k>=Dy) k=Dy;
    else if(!FlagY&&k<=Dy) k=Dy;
    else if(FlagY) k+=MinY;
    else k+=MinY;

}
