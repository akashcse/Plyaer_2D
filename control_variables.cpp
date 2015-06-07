#include"control_variables.h"
#include"game_control.h"
#include<QTime>
#include<QTimer>
extern game_control *Game;
control_variables::control_variables(QGraphicsItem *parent):QObject(),QGraphicsPixmapItem(parent)
{
    Ball_Control=1;Ball_Owner=0;
    TeamAside=1;
    TeamBside=2;
    Half=1;
    Pass_Interuppt=0;Ball_on_pass=0;Ball_Stop=1;
    Freze_Player=0;
    Ball_On_Air=0;
    StopA=0;StopB=0;
    Corner=0;
    Through=0;

    QTimer * timer=new QTimer();
  // conect timer
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(1000*60*2);

}


void control_variables::move()
{
    ++Half;
    Freze_Player=1;

    if(Half==2){

        Game->playerb1->setPos(50,280);
        Game->playerb2->setPos(180,140);
        Game->playerb3->setPos(180,280);
        Game->playerb4->setPos(180,420);
        Game->playerb5->setPos(270,70);
        Game->playerb6->setPos(270,210);
        Game->playerb7->setPos(270,340);
        Game->playerb8->setPos(270,480);
        Game->playerb9->setPos(300,280);
        Game->playerb10->setPos(365,200);
        Game->playerb11->setPos(365,360);

        Game->playera1->setPos(720,280);
        Game->playera2->setPos(580,140);
        Game->playera3->setPos(580,280);
        Game->playera4->setPos(580,420);
        Game->playera5->setPos(500,70);
        Game->playera6->setPos(500,210);
        Game->playera7->setPos(500,350);
        Game->playera8->setPos(500,490);
        Game->playera9->setPos(465,280);
        Game->playera10->setPos(400,200);
        Game->playera11->setPos(400,360);

        Game->ball->i=390;
        Game->ball->k=290;
        Game->ball->Dx=390;
        Game->ball->Dy=290;

        Game->ball->setPos(390,290);

        Freze_Player=0;

    }

}
