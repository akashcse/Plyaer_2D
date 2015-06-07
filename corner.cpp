#include"corner.h"
#include<QTimer>
#include<QDebug>
#include<QGraphicsscene>
#include<QList>
#include"football.h"
#include"rush.h"
#include"game_control.h"
#include"all_star_a1.h"
#include"all_star_a2.h"
#include"all_star_a3.h"
#include"all_star_a4.h"
#include"all_star_a5.h"
#include"all_star_a6.h"
#include"all_star_a7.h"
#include"all_star_a8.h"
#include"all_star_a9.h"
#include"all_star_a10.h"
#include"all_star_a11.h"
#include"all_star_b1.h"
#include"all_star_b2.h"
#include"all_star_b3.h"
#include"all_star_b4.h"
#include"all_star_b5.h"
#include"all_star_b6.h"
#include"all_star_b7.h"
#include"all_star_b8.h"
#include"all_star_b9.h"
#include"all_star_b10.h"
#include"all_star_b11.h"
//extern game_control *Game;

extern game_control *Game;

corner::corner(QGraphicsItem *parent):QObject(),QGraphicsPixmapItem(parent)
{
        Controler=0,Team=1;
        QTimer * timer=new QTimer();
      // conect timer
        connect(timer,SIGNAL(timeout()),this,SLOT(move()));
        timer->start(15);
}

void corner::move()
{
    if(Controler>0&&Game->ContVar->Half==1){
        int check=0;
        Game->ContVar->Freze_Player=1;
       if(Team==1){
           if(Game->playerb1->pos().x()<700 ) Game->playerb1->setPos(Game->playerb1->pos().x()+1,Game->playerb1->y()),check++;
           else if(Game->playerb1->pos().x()>700 ) Game->playerb1->setPos(Game->playerb1->pos().x()-1,Game->playerb1->y()),check++;
           if(Game->playerb1->pos().y()<280 ) Game->playerb1->setPos(Game->playerb1->pos().x(),Game->playerb1->y()+1),check++;
           else if(Game->playerb1->pos().y()>280 ) Game->playerb1->setPos(Game->playerb1->pos().x(),Game->playerb1->y()-1),check++;


           if(Game->playerb2->pos().x()<700 ) Game->playerb2->setPos(Game->playerb2->pos().x()+1,Game->playerb2->y()),check++;
           else if(Game->playerb2->pos().x()>700 ) Game->playerb2->setPos(Game->playerb2->pos().x()-1,Game->playerb2->y()),check++;
           if(Game->playerb2->pos().y()<220 ) Game->playerb2->setPos(Game->playerb2->pos().x(),Game->playerb2->y()+1),check++;
           else if(Game->playerb2->pos().y()>220 ) Game->playerb2->setPos(Game->playerb2->pos().x(),Game->playerb2->y()-1),check++;

           if(Game->playerb3->pos().x()<700 ) Game->playerb3->setPos(Game->playerb3->pos().x()+1,Game->playerb3->y()),check++;
           else if(Game->playerb3->pos().x()>700 ) Game->playerb3->setPos(Game->playerb3->pos().x()-1,Game->playerb3->y()),check++;
           if(Game->playerb3->pos().y()<340 ) Game->playerb3->setPos(Game->playerb3->pos().x(),Game->playerb3->y()+1),check++;
           else if(Game->playerb3->pos().y()>340 ) Game->playerb3->setPos(Game->playerb3->pos().x(),Game->playerb3->y()-1),check++;

           if(Game->playerb4->pos().x()<730 ) Game->playerb4->setPos(Game->playerb4->pos().x()+1,Game->playerb4->y()),check++;
           else if(Game->playerb4->pos().x()>730) Game->playerb4->setPos(Game->playerb4->pos().x()-1,Game->playerb4->y()),check++;
           if(Game->playerb4->pos().y()<150 ) Game->playerb4->setPos(Game->playerb4->pos().x(),Game->playerb4->y()+1),check++;
           else if(Game->playerb4->pos().y()>150 ) Game->playerb4->setPos(Game->playerb4->pos().x(),Game->playerb4->y()-1),check++;

           if(Game->playerb5->pos().x()<630 ) Game->playerb5->setPos(Game->playerb5->pos().x()+1,Game->playerb5->y()),check++;
           else if(Game->playerb5->pos().x()>630 ) Game->playerb5->setPos(Game->playerb5->pos().x()-1,Game->playerb5->y()),check++;
           if(Game->playerb5->pos().y()<150 ) Game->playerb5->setPos(Game->playerb5->pos().x(),Game->playerb5->y()+1),check++;
           else if(Game->playerb5->pos().y()>150 ) Game->playerb5->setPos(Game->playerb5->pos().x(),Game->playerb5->y()-1),check++;

           if(Game->playerb6->pos().x()<630 ) Game->playerb6->setPos(Game->playerb6->pos().x()+1,Game->playerb6->y()),check++;
           else if(Game->playerb6->pos().x()>630 ) Game->playerb6->setPos(Game->playerb6->pos().x()-1,Game->playerb6->y()),check++;
           if(Game->playerb6->pos().y()<240 ) Game->playerb6->setPos(Game->playerb6->pos().x(),Game->playerb6->y()+1),check++;
           else if(Game->playerb6->pos().y()>240 ) Game->playerb6->setPos(Game->playerb6->pos().x(),Game->playerb6->y()-1),check++;

           if(Game->playerb7->pos().x()<630 ) Game->playerb7->setPos(Game->playerb7->pos().x()+1,Game->playerb7->y()),check++;
           else if(Game->playerb7->pos().x()>630 ) Game->playerb7->setPos(Game->playerb7->pos().x()-1,Game->playerb7->y()),check++;
           if(Game->playerb7->pos().y()<330 ) Game->playerb7->setPos(Game->playerb7->pos().x(),Game->playerb7->y()+1),check++;
           else if(Game->playerb7->pos().y()>330 ) Game->playerb7->setPos(Game->playerb7->pos().x(),Game->playerb7->y()-1),check++;

           if(Game->playerb8->pos().x()<630 ) Game->playerb8->setPos(Game->playerb8->pos().x()+1,Game->playerb8->y()),check++;
           else if(Game->playerb8->pos().x()>630 ) Game->playerb8->setPos(Game->playerb8->pos().x()-1,Game->playerb8->y()),check++;
           if(Game->playerb8->pos().y()<420 ) Game->playerb8->setPos(Game->playerb8->pos().x(),Game->playerb8->y()+1),check++;
           else if(Game->playerb8->pos().y()>420 ) Game->playerb8->setPos(Game->playerb8->pos().x(),Game->playerb8->y()-1),check++;

           if(Game->playerb9->pos().x()<730 ) Game->playerb9->setPos(Game->playerb9->pos().x()+1,Game->playerb9->y()),check++;
           else if(Game->playerb9->pos().x()>730 ) Game->playerb9->setPos(Game->playerb9->pos().x()-1,Game->playerb9->y()),check++;
           if(Game->playerb9->pos().y()<420 ) Game->playerb9->setPos(Game->playerb9->pos().x(),Game->playerb9->y()+1),check++;
           else if(Game->playerb9->pos().y()>420 ) Game->playerb9->setPos(Game->playerb9->pos().x(),Game->playerb9->y()-1),check++;

           if(Game->playerb10->pos().x()<450 ) Game->playerb10->setPos(Game->playerb10->pos().x()+1,Game->playerb10->y()),check++;
           else if(Game->playerb10->pos().x()>450 ) Game->playerb10->setPos(Game->playerb10->pos().x()-1,Game->playerb10->y()),check++;
           if(Game->playerb10->pos().y()<150 ) Game->playerb10->setPos(Game->playerb10->pos().x(),Game->playerb10->y()+1),check++;
           else if(Game->playerb10->pos().y()>150 ) Game->playerb10->setPos(Game->playerb10->pos().x(),Game->playerb10->y()-1),check++;

           if(Game->playerb11->pos().x()<450 ) Game->playerb11->setPos(Game->playerb11->pos().x()+1,Game->playerb11->y()),check++;
           else if(Game->playerb11->pos().x()>450 ) Game->playerb11->setPos(Game->playerb11->pos().x()-1,Game->playerb11->y()),check++;
           if(Game->playerb11->pos().y()<420 ) Game->playerb11->setPos(Game->playerb11->pos().x(),Game->playerb11->y()+1),check++;
           else if(Game->playerb11->pos().y()>420 ) Game->playerb11->setPos(Game->playerb11->pos().x(),Game->playerb11->y()-1),check++;


           if(Game->playera1->pos().x()<155 ) Game->playera1->setPos(Game->playera1->pos().x()+1,Game->playera1->y()),check++;
           else if(Game->playera1->pos().x()>155 ) Game->playera1->setPos(Game->playera1->pos().x()-1,Game->playera1->y()),check++;
           if(Game->playera1->pos().y()<280 ) Game->playera1->setPos(Game->playera1->pos().x(),Game->playera1->y()+1),check++;
           else if(Game->playera1->pos().y()>280 ) Game->playera1->setPos(Game->playera1->pos().x(),Game->playera1->y()-1),check++;


           if(Game->playera2->pos().x()<350 ) Game->playera2->setPos(Game->playera2->pos().x()+1,Game->playera2->y()),check++;
           else if(Game->playera2->pos().x()>350 ) Game->playera2->setPos(Game->playera2->pos().x()-1,Game->playera2->y()),check++;
           if(Game->playera2->pos().y()<150 ) Game->playera2->setPos(Game->playera2->pos().x(),Game->playera2->y()+1),check++;
           else if(Game->playera2->pos().y()>150 ) Game->playera2->setPos(Game->playera2->pos().x(),Game->playera2->y()-1),check++;

           if(Game->playera3->pos().x()<350 ) Game->playera3->setPos(Game->playera3->pos().x()+1,Game->playera3->y()),check++;
           else if(Game->playera3->pos().x()>350 ) Game->playera3->setPos(Game->playera3->pos().x()-1,Game->playera3->y()),check++;
           if(Game->playera3->pos().y()<420 ) Game->playera3->setPos(Game->playera3->pos().x(),Game->playera3->y()+1),check++;
           else if(Game->playera3->pos().y()>420 ) Game->playera3->setPos(Game->playera3->pos().x(),Game->playera3->y()-1),check++;


           if(Game->playera4->pos().x()<250 ) Game->playera4->setPos(Game->playera4->pos().x()+1,Game->playera4->y()),check++;
           else if(Game->playera4->pos().x()>250 ) Game->playera4->setPos(Game->playera4->pos().x()-1,Game->playera4->y()),check++;
           if(Game->playera4->pos().y()<280 ) Game->playera4->setPos(Game->playera4->pos().x(),Game->playera4->y()+1),check++;
           else if(Game->playera4->pos().y()>280 ) Game->playera4->setPos(Game->playera4->pos().x(),Game->playera4->y()-1),check++;

           if(Game->playera5->pos().x()<630 ) Game->playera5->setPos(Game->playera5->pos().x()+1,Game->playera5->y()),check++;
           else if(Game->playera5->pos().x()>630 ) Game->playera5->setPos(Game->playera5->pos().x()-1,Game->playera5->y()),check++;
           if(Game->playera5->pos().y()<375 ) Game->playera5->setPos(Game->playera5->pos().x(),Game->playera5->y()+1),check++;
           else if(Game->playera5->pos().y()>375 ) Game->playera5->setPos(Game->playera5->pos().x(),Game->playera5->y()-1),check++;


           if(Game->playera6->pos().x()<630 ) Game->playera6->setPos(Game->playera6->pos().x()+1,Game->playera6->y()),check++;
           else if(Game->playera6->pos().x()>630 ) Game->playera6->setPos(Game->playera6->pos().x()-1,Game->playera6->y()),check++;
           if(Game->playera6->pos().y()<285 ) Game->playera6->setPos(Game->playera6->pos().x(),Game->playera6->y()+1),check++;
           else if(Game->playera6->pos().y()>285 ) Game->playera6->setPos(Game->playera6->pos().x(),Game->playera6->y()-1),check++;


           if(Game->playera7->pos().x()<630 ) Game->playera7->setPos(Game->playera7->pos().x()+1,Game->playera7->y()),check++;
           else if(Game->playera7->pos().x()>630 ) Game->playera7->setPos(Game->playera7->pos().x()-1,Game->playera7->y()),check++;
           if(Game->playera7->pos().y()<190 ) Game->playera7->setPos(Game->playera7->pos().x(),Game->playera7->y()+1),check++;
           else if(Game->playera7->pos().y()>190 ) Game->playera7->setPos(Game->playera7->pos().x(),Game->playera7->y()-1),check++;


           if(Game->playera8->pos().x()<670 ) Game->playera8->setPos(Game->playera8->pos().x()+1,Game->playera8->y()),check++;
           else if(Game->playera8->pos().x()>670 ) Game->playera8->setPos(Game->playera8->pos().x()-1,Game->playera8->y()),check++;
           if(Game->playera8->pos().y()<400 ) Game->playera8->setPos(Game->playera8->pos().x(),Game->playera8->y()+1),check++;
           else if(Game->playera8->pos().y()>400 ) Game->playera8->setPos(Game->playera8->pos().x(),Game->playera8->y()-1),check++;

           if(Game->playera9->pos().x()<670 ) Game->playera9->setPos(Game->playera9->pos().x()+1,Game->playera9->y()),check++;
           else if(Game->playera9->pos().x()>670 ) Game->playera9->setPos(Game->playera9->pos().x()-1,Game->playera9->y()),check++;
           if(Game->playera9->pos().y()<250 ) Game->playera9->setPos(Game->playera9->pos().x(),Game->playera9->y()+1),check++;
           else if(Game->playera9->pos().y()>250 ) Game->playera9->setPos(Game->playera9->pos().x(),Game->playera9->y()-1),check++;


           if(Game->playera11->pos().x()<750 ) Game->playera11->setPos(Game->playera11->pos().x()+1,Game->playera11->y()),check++;
           else if(Game->playera11->pos().x()>750 ) Game->playera11->setPos(Game->playera11->pos().x()-1,Game->playera11->y()),check++;
           if(Game->playera11->pos().y()<10 ) Game->playera11->setPos(Game->playera11->pos().x(),Game->playera11->y()+1),check++;
           else if(Game->playera11->pos().y()>10 ) Game->playera11->setPos(Game->playera11->pos().x(),Game->playera11->y()-1),check++;


           if(Game->ContVar->Corner==1){
               if(Game->playera10->pos().x()<670 ) Game->playera10->setPos(Game->playera10->pos().x()+1,Game->playera10->y()),check++;
               else if(Game->playera10->pos().x()>670 ) Game->playera10->setPos(Game->playera10->pos().x()-1,Game->playera10->y()),check++;
               if(Game->playera10->pos().y()<160 ) Game->playera10->setPos(Game->playera10->pos().x(),Game->playera10->y()+1),check++;
               else if(Game->playera10->pos().y()>160 ) Game->playera10->setPos(Game->playera10->pos().x(),Game->playera10->y()-1),check++;

           }
           else if(Game->ContVar->Corner==4){
               if(Game->playera10->pos().x()<670 ) Game->playera10->setPos(Game->playera10->pos().x()+1,Game->playera10->y()),check++;
               else if(Game->playera10->pos().x()>670 ) Game->playera10->setPos(Game->playera10->pos().x()-1,Game->playera10->y()),check++;
               if(Game->playera10->pos().y()<530 ) Game->playera10->setPos(Game->playera10->pos().x(),Game->playera10->y()+1),check++;
               else if(Game->playera10->pos().y()>530 ) Game->playera10->setPos(Game->playera10->pos().x(),Game->playera10->y()-1),check++;

           }


           if(check==0){
              Game->ContVar->Freze_Player=0;
              Controler=0;
              Game->ContVar->Through=1;

           }

            //Game->ball->setPos(750,55);

       }
       else if(Team==2){

           if(Game->playera1->pos().x()<70 ) Game->playera1->setPos(Game->playera1->pos().x()+1,Game->playera1->y()),check++;
           else if(Game->playera1->pos().x()>70 ) Game->playera1->setPos(Game->playera1->pos().x()-1,Game->playera1->y()),check++;
           if(Game->playera1->pos().y()<280 ) Game->playera1->setPos(Game->playera1->pos().x(),Game->playera1->y()+1),check++;
           else if(Game->playera1->pos().y()>280 ) Game->playera1->setPos(Game->playera1->pos().x(),Game->playera1->y()-1),check++;


           if(Game->playera2->pos().x()<70 ) Game->playera2->setPos(Game->playera2->pos().x()+1,Game->playera2->y()),check++;
           else if(Game->playera2->pos().x()>70 ) Game->playera2->setPos(Game->playera2->pos().x()-1,Game->playera2->y()),check++;
           if(Game->playera2->pos().y()<220 ) Game->playera2->setPos(Game->playera2->pos().x(),Game->playera2->y()+1),check++;
           else if(Game->playera2->pos().y()>220 ) Game->playera2->setPos(Game->playera2->pos().x(),Game->playera2->y()-1),check++;

           if(Game->playera3->pos().x()<70 ) Game->playera3->setPos(Game->playera3->pos().x()+1,Game->playera3->y()),check++;
           else if(Game->playera3->pos().x()>70 ) Game->playera3->setPos(Game->playera3->pos().x()-1,Game->playera3->y()),check++;
           if(Game->playera3->pos().y()<340 ) Game->playera3->setPos(Game->playera3->pos().x(),Game->playera3->y()+1),check++;
           else if(Game->playera3->pos().y()>340 ) Game->playera3->setPos(Game->playera3->pos().x(),Game->playera3->y()-1),check++;

           if(Game->playera4->pos().x()<40 ) Game->playera4->setPos(Game->playera4->pos().x()+1,Game->playera4->y()),check++;
           else if(Game->playera4->pos().x()>40 ) Game->playera4->setPos(Game->playera4->pos().x()-1,Game->playera4->y()),check++;
           if(Game->playera4->pos().y()<150 ) Game->playera4->setPos(Game->playera4->pos().x(),Game->playera4->y()+1),check++;
           else if(Game->playera4->pos().y()>150 ) Game->playera4->setPos(Game->playera4->pos().x(),Game->playera4->y()-1),check++;

           if(Game->playera5->pos().x()<130 ) Game->playera5->setPos(Game->playera5->pos().x()+1,Game->playera5->y()),check++;
           else if(Game->playera5->pos().x()>130 ) Game->playera5->setPos(Game->playera5->pos().x()-1,Game->playera5->y()),check++;
           if(Game->playera5->pos().y()<150 ) Game->playera5->setPos(Game->playera5->pos().x(),Game->playera5->y()+1),check++;
           else if(Game->playera5->pos().y()>150 ) Game->playera5->setPos(Game->playera5->pos().x(),Game->playera5->y()-1),check++;

           if(Game->playera6->pos().x()<130 ) Game->playera6->setPos(Game->playera6->pos().x()+1,Game->playera6->y()),check++;
           else if(Game->playera6->pos().x()>130 ) Game->playera6->setPos(Game->playera6->pos().x()-1,Game->playera6->y()),check++;
           if(Game->playera6->pos().y()<240 ) Game->playera6->setPos(Game->playera6->pos().x(),Game->playera6->y()+1),check++;
           else if(Game->playera6->pos().y()>240 ) Game->playera6->setPos(Game->playera6->pos().x(),Game->playera6->y()-1),check++;

           if(Game->playera7->pos().x()<130 ) Game->playera7->setPos(Game->playera7->pos().x()+1,Game->playera7->y()),check++;
           else if(Game->playera7->pos().x()>130 ) Game->playera7->setPos(Game->playera7->pos().x()-1,Game->playera7->y()),check++;
           if(Game->playera7->pos().y()<330 ) Game->playera7->setPos(Game->playera7->pos().x(),Game->playera7->y()+1),check++;
           else if(Game->playera7->pos().y()>330 ) Game->playera7->setPos(Game->playera7->pos().x(),Game->playera7->y()-1),check++;

           if(Game->playera8->pos().x()<130 ) Game->playera8->setPos(Game->playera8->pos().x()+1,Game->playera8->y()),check++;
           else if(Game->playera8->pos().x()>130 ) Game->playera8->setPos(Game->playera8->pos().x()-1,Game->playera8->y()),check++;
           if(Game->playera8->pos().y()<420 ) Game->playera8->setPos(Game->playera8->pos().x(),Game->playera8->y()+1),check++;
           else if(Game->playera8->pos().y()>420 ) Game->playera8->setPos(Game->playera8->pos().x(),Game->playera8->y()-1),check++;

           if(Game->playera9->pos().x()<40 ) Game->playera9->setPos(Game->playera9->pos().x()+1,Game->playera9->y()),check++;
           else if(Game->playera9->pos().x()>40 ) Game->playera9->setPos(Game->playera9->pos().x()-1,Game->playera9->y()),check++;
           if(Game->playera9->pos().y()<420 ) Game->playera9->setPos(Game->playera9->pos().x(),Game->playera9->y()+1),check++;
           else if(Game->playera9->pos().y()>420 ) Game->playera9->setPos(Game->playera9->pos().x(),Game->playera9->y()-1),check++;

           if(Game->playera10->pos().x()<250 ) Game->playera10->setPos(Game->playera10->pos().x()+1,Game->playera10->y()),check++;
           else if(Game->playera10->pos().x()>250 ) Game->playera10->setPos(Game->playera10->pos().x()-1,Game->playera10->y()),check++;
           if(Game->playera10->pos().y()<150 ) Game->playera10->setPos(Game->playera10->pos().x(),Game->playera10->y()+1),check++;
           else if(Game->playera10->pos().y()>150 ) Game->playera10->setPos(Game->playera10->pos().x(),Game->playera10->y()-1),check++;

           if(Game->playera11->pos().x()<250 ) Game->playera11->setPos(Game->playera11->pos().x()+1,Game->playera11->y()),check++;
           else if(Game->playera11->pos().x()>250 ) Game->playera11->setPos(Game->playera11->pos().x()-1,Game->playera11->y()),check++;
           if(Game->playera11->pos().y()<420 ) Game->playera11->setPos(Game->playera11->pos().x(),Game->playera11->y()+1),check++;
           else if(Game->playera11->pos().y()>420 ) Game->playera11->setPos(Game->playera11->pos().x(),Game->playera11->y()-1),check++;


           if(Game->playerb1->pos().x()<600 ) Game->playerb1->setPos(Game->playerb1->pos().x()+1,Game->playerb1->y()),check++;
           else if(Game->playerb1->pos().x()>600 ) Game->playerb1->setPos(Game->playerb1->pos().x()-1,Game->playerb1->y()),check++;
           if(Game->playerb1->pos().y()<280 ) Game->playerb1->setPos(Game->playerb1->pos().x(),Game->playerb1->y()+1),check++;
           else if(Game->playerb1->pos().y()>280 ) Game->playerb1->setPos(Game->playerb1->pos().x(),Game->playerb1->y()-1),check++;


           if(Game->playerb2->pos().x()<500 ) Game->playerb2->setPos(Game->playerb2->pos().x()+1,Game->playerb2->y()),check++;
           else if(Game->playerb2->pos().x()>500 ) Game->playerb2->setPos(Game->playerb2->pos().x()-1,Game->playerb2->y()),check++;
           if(Game->playerb2->pos().y()<150 ) Game->playerb2->setPos(Game->playerb2->pos().x(),Game->playerb2->y()+1),check++;
           else if(Game->playerb2->pos().y()>150 ) Game->playerb2->setPos(Game->playerb2->pos().x(),Game->playerb2->y()-1),check++;

           if(Game->playerb3->pos().x()<500 ) Game->playerb3->setPos(Game->playerb3->pos().x()+1,Game->playerb3->y()),check++;
           else if(Game->playerb3->pos().x()>500 ) Game->playerb3->setPos(Game->playerb3->pos().x()-1,Game->playerb3->y()),check++;
           if(Game->playerb3->pos().y()<420 ) Game->playerb3->setPos(Game->playerb3->pos().x(),Game->playerb3->y()+1),check++;
           else if(Game->playerb3->pos().y()>420 ) Game->playerb3->setPos(Game->playerb3->pos().x(),Game->playerb3->y()-1),check++;


           if(Game->playerb4->pos().x()<400 ) Game->playerb4->setPos(Game->playerb4->pos().x()+1,Game->playerb4->y()),check++;
           else if(Game->playerb4->pos().x()>400 ) Game->playerb4->setPos(Game->playerb4->pos().x()-1,Game->playerb4->y()),check++;
           if(Game->playerb4->pos().y()<280 ) Game->playerb4->setPos(Game->playerb4->pos().x(),Game->playerb4->y()+1),check++;
           else if(Game->playerb4->pos().y()>280 ) Game->playerb4->setPos(Game->playerb4->pos().x(),Game->playerb4->y()-1),check++;

           if(Game->playerb5->pos().x()<130 ) Game->playerb5->setPos(Game->playerb5->pos().x()+1,Game->playerb5->y()),check++;
           else if(Game->playerb5->pos().x()>130 ) Game->playerb5->setPos(Game->playerb5->pos().x()-1,Game->playerb5->y()),check++;
           if(Game->playerb5->pos().y()<375 ) Game->playerb5->setPos(Game->playerb5->pos().x(),Game->playerb5->y()+1),check++;
           else if(Game->playerb5->pos().y()>375 ) Game->playerb5->setPos(Game->playerb5->pos().x(),Game->playerb5->y()-1),check++;


           if(Game->playerb6->pos().x()<130 ) Game->playerb6->setPos(Game->playerb6->pos().x()+1,Game->playerb6->y()),check++;
           else if(Game->playerb6->pos().x()>130 ) Game->playerb6->setPos(Game->playerb6->pos().x()-1,Game->playerb6->y()),check++;
           if(Game->playerb6->pos().y()<285 ) Game->playerb6->setPos(Game->playerb6->pos().x(),Game->playerb6->y()+1),check++;
           else if(Game->playerb6->pos().y()>285 ) Game->playerb6->setPos(Game->playerb6->pos().x(),Game->playerb6->y()-1),check++;


           if(Game->playerb7->pos().x()<130 ) Game->playerb7->setPos(Game->playerb7->pos().x()+1,Game->playerb7->y()),check++;
           else if(Game->playerb7->pos().x()>130 ) Game->playerb7->setPos(Game->playerb7->pos().x()-1,Game->playerb7->y()),check++;
           if(Game->playerb7->pos().y()<190 ) Game->playerb7->setPos(Game->playerb7->pos().x(),Game->playerb7->y()+1),check++;
           else if(Game->playerb7->pos().y()>190 ) Game->playerb7->setPos(Game->playerb7->pos().x(),Game->playerb7->y()-1),check++;


           if(Game->playerb8->pos().x()<85 ) Game->playerb8->setPos(Game->playerb8->pos().x()+1,Game->playerb8->y()),check++;
           else if(Game->playerb8->pos().x()>85 ) Game->playerb8->setPos(Game->playerb8->pos().x()-1,Game->playerb8->y()),check++;
           if(Game->playerb8->pos().y()<400 ) Game->playerb8->setPos(Game->playerb8->pos().x(),Game->playerb8->y()+1),check++;
           else if(Game->playerb8->pos().y()>400 ) Game->playerb8->setPos(Game->playerb8->pos().x(),Game->playerb8->y()-1),check++;

           if(Game->playerb9->pos().x()<90 ) Game->playerb9->setPos(Game->playerb9->pos().x()+1,Game->playerb9->y()),check++;
           else if(Game->playerb9->pos().x()>90 ) Game->playerb9->setPos(Game->playerb9->pos().x()-1,Game->playerb9->y()),check++;
           if(Game->playerb9->pos().y()<250 ) Game->playerb9->setPos(Game->playerb9->pos().x(),Game->playerb9->y()+1),check++;
           else if(Game->playerb9->pos().y()>250 ) Game->playerb9->setPos(Game->playerb9->pos().x(),Game->playerb9->y()-1),check++;


           if(Game->playerb11->pos().x()<10 ) Game->playerb11->setPos(Game->playerb11->pos().x()+1,Game->playerb11->y()),check++;
           else if(Game->playerb11->pos().x()>10 ) Game->playerb11->setPos(Game->playerb11->pos().x()-1,Game->playerb11->y()),check++;
           if(Game->playerb11->pos().y()<10 ) Game->playerb11->setPos(Game->playerb11->pos().x(),Game->playerb11->y()+1),check++;
           else if(Game->playerb11->pos().y()>10 ) Game->playerb11->setPos(Game->playerb11->pos().x(),Game->playerb11->y()-1),check++;


           if(Game->ContVar->Corner==2){
               if(Game->playerb10->pos().x()<85 ) Game->playerb10->setPos(Game->playerb10->pos().x()+1,Game->playerb10->y()),check++;
               else if(Game->playerb10->pos().x()>85 ) Game->playerb10->setPos(Game->playerb10->pos().x()-1,Game->playerb10->y()),check++;
               if(Game->playerb10->pos().y()<160 ) Game->playerb10->setPos(Game->playerb10->pos().x(),Game->playerb10->y()+1),check++;
               else if(Game->playerb10->pos().y()>160 ) Game->playerb10->setPos(Game->playerb10->pos().x(),Game->playerb10->y()-1),check++;

           }
           else if(Game->ContVar->Corner==3){
               if(Game->playerb10->pos().x()<85 ) Game->playerb10->setPos(Game->playerb10->pos().x()+1,Game->playerb10->y()),check++;
               else if(Game->playerb10->pos().x()>85 ) Game->playerb10->setPos(Game->playerb10->pos().x()-1,Game->playerb10->y()),check++;
               if(Game->playerb10->pos().y()<530 ) Game->playerb10->setPos(Game->playerb10->pos().x(),Game->playerb10->y()+1),check++;
               else if(Game->playerb10->pos().y()>530 ) Game->playerb10->setPos(Game->playerb10->pos().x(),Game->playerb10->y()-1),check++;

           }

           //Game->playerb1->setPos(600,280);
           //Game->playerb2->setPos(500,150);
           //Game->playerb3->setPos(500,420);
           //Game->playerb4->setPos(400,280);
           //Game->playerb5->setPos(130,375);
           //Game->playerb6->setPos(130,285);
          // Game->playerb7->setPos(130,190);
          // Game->playerb8->setPos(85,400);
          // Game->playerb9->setPos(90,250);
           //Game->playerb10->setPos(85,160);
          // Game->playerb11->setPos(10,10);

           //Game->ball->setPos(25,55);
           if(check==0){
              Game->ContVar->Freze_Player=0;
              Controler=0;
              Game->ContVar->Through=2;
           }

       }
    }

    else if(Controler>0&&Game->ContVar->Half==2){
        int check=0;
        Game->ContVar->Freze_Player=1;
       if(Team==1){
           if(Game->playera1->pos().x()<700 ) Game->playera1->setPos(Game->playera1->pos().x()+1,Game->playera1->y()),check++;
           else if(Game->playera1->pos().x()>700 ) Game->playera1->setPos(Game->playera1->pos().x()-1,Game->playera1->y()),check++;
           if(Game->playera1->pos().y()<280 ) Game->playera1->setPos(Game->playera1->pos().x(),Game->playera1->y()+1),check++;
           else if(Game->playera1->pos().y()>280 ) Game->playera1->setPos(Game->playera1->pos().x(),Game->playera1->y()-1),check++;


           if(Game->playera2->pos().x()<700 ) Game->playera2->setPos(Game->playera2->pos().x()+1,Game->playera2->y()),check++;
           else if(Game->playera2->pos().x()>700 ) Game->playera2->setPos(Game->playera2->pos().x()-1,Game->playera2->y()),check++;
           if(Game->playera2->pos().y()<220 ) Game->playera2->setPos(Game->playera2->pos().x(),Game->playera2->y()+1),check++;
           else if(Game->playera2->pos().y()>220 ) Game->playera2->setPos(Game->playera2->pos().x(),Game->playera2->y()-1),check++;

           if(Game->playera3->pos().x()<700 ) Game->playera3->setPos(Game->playera3->pos().x()+1,Game->playera3->y()),check++;
           else if(Game->playera3->pos().x()>700 ) Game->playera3->setPos(Game->playera3->pos().x()-1,Game->playera3->y()),check++;
           if(Game->playera3->pos().y()<340 ) Game->playera3->setPos(Game->playera3->pos().x(),Game->playera3->y()+1),check++;
           else if(Game->playera3->pos().y()>340 ) Game->playera3->setPos(Game->playera3->pos().x(),Game->playera3->y()-1),check++;

           if(Game->playera4->pos().x()<730 ) Game->playera4->setPos(Game->playera4->pos().x()+1,Game->playera4->y()),check++;
           else if(Game->playera4->pos().x()>730) Game->playera4->setPos(Game->playera4->pos().x()-1,Game->playera4->y()),check++;
           if(Game->playera4->pos().y()<150 ) Game->playera4->setPos(Game->playera4->pos().x(),Game->playera4->y()+1),check++;
           else if(Game->playera4->pos().y()>150 ) Game->playera4->setPos(Game->playera4->pos().x(),Game->playera4->y()-1),check++;

           if(Game->playera5->pos().x()<630 ) Game->playera5->setPos(Game->playera5->pos().x()+1,Game->playera5->y()),check++;
           else if(Game->playera5->pos().x()>630 ) Game->playera5->setPos(Game->playera5->pos().x()-1,Game->playera5->y()),check++;
           if(Game->playera5->pos().y()<150 ) Game->playera5->setPos(Game->playera5->pos().x(),Game->playera5->y()+1),check++;
           else if(Game->playera5->pos().y()>150 ) Game->playera5->setPos(Game->playera5->pos().x(),Game->playera5->y()-1),check++;

           if(Game->playera6->pos().x()<630 ) Game->playera6->setPos(Game->playera6->pos().x()+1,Game->playera6->y()),check++;
           else if(Game->playera6->pos().x()>630 ) Game->playera6->setPos(Game->playera6->pos().x()-1,Game->playera6->y()),check++;
           if(Game->playera6->pos().y()<240 ) Game->playera6->setPos(Game->playera6->pos().x(),Game->playera6->y()+1),check++;
           else if(Game->playera6->pos().y()>240 ) Game->playera6->setPos(Game->playera6->pos().x(),Game->playera6->y()-1),check++;

           if(Game->playera7->pos().x()<630 ) Game->playera7->setPos(Game->playera7->pos().x()+1,Game->playera7->y()),check++;
           else if(Game->playera7->pos().x()>630 ) Game->playera7->setPos(Game->playera7->pos().x()-1,Game->playera7->y()),check++;
           if(Game->playera7->pos().y()<330 ) Game->playera7->setPos(Game->playera7->pos().x(),Game->playera7->y()+1),check++;
           else if(Game->playera7->pos().y()>330 ) Game->playera7->setPos(Game->playera7->pos().x(),Game->playera7->y()-1),check++;

           if(Game->playera8->pos().x()<630 ) Game->playera8->setPos(Game->playera8->pos().x()+1,Game->playera8->y()),check++;
           else if(Game->playera8->pos().x()>630 ) Game->playera8->setPos(Game->playera8->pos().x()-1,Game->playera8->y()),check++;
           if(Game->playera8->pos().y()<420 ) Game->playera8->setPos(Game->playera8->pos().x(),Game->playera8->y()+1),check++;
           else if(Game->playera8->pos().y()>420 ) Game->playera8->setPos(Game->playera8->pos().x(),Game->playera8->y()-1),check++;

           if(Game->playera9->pos().x()<730 ) Game->playera9->setPos(Game->playera9->pos().x()+1,Game->playera9->y()),check++;
           else if(Game->playera9->pos().x()>730 ) Game->playera9->setPos(Game->playera9->pos().x()-1,Game->playera9->y()),check++;
           if(Game->playera9->pos().y()<420 ) Game->playera9->setPos(Game->playera9->pos().x(),Game->playera9->y()+1),check++;
           else if(Game->playera9->pos().y()>420 ) Game->playera9->setPos(Game->playera9->pos().x(),Game->playera9->y()-1),check++;

           if(Game->playera10->pos().x()<450 ) Game->playera10->setPos(Game->playera10->pos().x()+1,Game->playera10->y()),check++;
           else if(Game->playera10->pos().x()>450 ) Game->playera10->setPos(Game->playera10->pos().x()-1,Game->playera10->y()),check++;
           if(Game->playera10->pos().y()<150 ) Game->playera10->setPos(Game->playera10->pos().x(),Game->playera10->y()+1),check++;
           else if(Game->playera10->pos().y()>150 ) Game->playera10->setPos(Game->playera10->pos().x(),Game->playera10->y()-1),check++;

           if(Game->playera11->pos().x()<450 ) Game->playera11->setPos(Game->playera11->pos().x()+1,Game->playera11->y()),check++;
           else if(Game->playera11->pos().x()>450 ) Game->playera11->setPos(Game->playera11->pos().x()-1,Game->playera11->y()),check++;
           if(Game->playera11->pos().y()<420 ) Game->playera11->setPos(Game->playera11->pos().x(),Game->playera11->y()+1),check++;
           else if(Game->playera11->pos().y()>420 ) Game->playera11->setPos(Game->playera11->pos().x(),Game->playera11->y()-1),check++;


           if(Game->playerb1->pos().x()<155 ) Game->playerb1->setPos(Game->playerb1->pos().x()+1,Game->playerb1->y()),check++;
           else if(Game->playerb1->pos().x()>155 ) Game->playerb1->setPos(Game->playerb1->pos().x()-1,Game->playerb1->y()),check++;
           if(Game->playerb1->pos().y()<280 ) Game->playerb1->setPos(Game->playerb1->pos().x(),Game->playerb1->y()+1),check++;
           else if(Game->playerb1->pos().y()>280 ) Game->playerb1->setPos(Game->playerb1->pos().x(),Game->playerb1->y()-1),check++;


           if(Game->playerb2->pos().x()<350 ) Game->playerb2->setPos(Game->playerb2->pos().x()+1,Game->playerb2->y()),check++;
           else if(Game->playerb2->pos().x()>350 ) Game->playerb2->setPos(Game->playerb2->pos().x()-1,Game->playerb2->y()),check++;
           if(Game->playerb2->pos().y()<150 ) Game->playerb2->setPos(Game->playerb2->pos().x(),Game->playerb2->y()+1),check++;
           else if(Game->playerb2->pos().y()>150 ) Game->playerb2->setPos(Game->playerb2->pos().x(),Game->playerb2->y()-1),check++;

           if(Game->playerb3->pos().x()<350 ) Game->playerb3->setPos(Game->playerb3->pos().x()+1,Game->playerb3->y()),check++;
           else if(Game->playerb3->pos().x()>350 ) Game->playerb3->setPos(Game->playerb3->pos().x()-1,Game->playerb3->y()),check++;
           if(Game->playerb3->pos().y()<420 ) Game->playerb3->setPos(Game->playerb3->pos().x(),Game->playerb3->y()+1),check++;
           else if(Game->playerb3->pos().y()>420 ) Game->playerb3->setPos(Game->playerb3->pos().x(),Game->playerb3->y()-1),check++;


           if(Game->playerb4->pos().x()<250 ) Game->playerb4->setPos(Game->playerb4->pos().x()+1,Game->playerb4->y()),check++;
           else if(Game->playerb4->pos().x()>250 ) Game->playerb4->setPos(Game->playerb4->pos().x()-1,Game->playerb4->y()),check++;
           if(Game->playerb4->pos().y()<280 ) Game->playerb4->setPos(Game->playerb4->pos().x(),Game->playerb4->y()+1),check++;
           else if(Game->playerb4->pos().y()>280 ) Game->playerb4->setPos(Game->playerb4->pos().x(),Game->playerb4->y()-1),check++;

           if(Game->playerb5->pos().x()<630 ) Game->playerb5->setPos(Game->playerb5->pos().x()+1,Game->playerb5->y()),check++;
           else if(Game->playerb5->pos().x()>630 ) Game->playerb5->setPos(Game->playerb5->pos().x()-1,Game->playerb5->y()),check++;
           if(Game->playerb5->pos().y()<375 ) Game->playerb5->setPos(Game->playerb5->pos().x(),Game->playerb5->y()+1),check++;
           else if(Game->playerb5->pos().y()>375 ) Game->playerb5->setPos(Game->playerb5->pos().x(),Game->playerb5->y()-1),check++;


           if(Game->playerb6->pos().x()<630 ) Game->playerb6->setPos(Game->playerb6->pos().x()+1,Game->playerb6->y()),check++;
           else if(Game->playerb6->pos().x()>630 ) Game->playerb6->setPos(Game->playerb6->pos().x()-1,Game->playerb6->y()),check++;
           if(Game->playerb6->pos().y()<285 ) Game->playerb6->setPos(Game->playerb6->pos().x(),Game->playerb6->y()+1),check++;
           else if(Game->playerb6->pos().y()>285 ) Game->playerb6->setPos(Game->playerb6->pos().x(),Game->playerb6->y()-1),check++;


           if(Game->playerb7->pos().x()<630 ) Game->playerb7->setPos(Game->playerb7->pos().x()+1,Game->playerb7->y()),check++;
           else if(Game->playerb7->pos().x()>630 ) Game->playerb7->setPos(Game->playerb7->pos().x()-1,Game->playerb7->y()),check++;
           if(Game->playerb7->pos().y()<190 ) Game->playerb7->setPos(Game->playerb7->pos().x(),Game->playerb7->y()+1),check++;
           else if(Game->playerb7->pos().y()>190 ) Game->playerb7->setPos(Game->playerb7->pos().x(),Game->playerb7->y()-1),check++;


           if(Game->playerb8->pos().x()<670 ) Game->playerb8->setPos(Game->playerb8->pos().x()+1,Game->playerb8->y()),check++;
           else if(Game->playerb8->pos().x()>670 ) Game->playerb8->setPos(Game->playerb8->pos().x()-1,Game->playerb8->y()),check++;
           if(Game->playerb8->pos().y()<400 ) Game->playerb8->setPos(Game->playerb8->pos().x(),Game->playerb8->y()+1),check++;
           else if(Game->playerb8->pos().y()>400 ) Game->playerb8->setPos(Game->playerb8->pos().x(),Game->playerb8->y()-1),check++;

           if(Game->playerb9->pos().x()<670 ) Game->playerb9->setPos(Game->playerb9->pos().x()+1,Game->playerb9->y()),check++;
           else if(Game->playerb9->pos().x()>670 ) Game->playerb9->setPos(Game->playerb9->pos().x()-1,Game->playerb9->y()),check++;
           if(Game->playerb9->pos().y()<250 ) Game->playerb9->setPos(Game->playerb9->pos().x(),Game->playerb9->y()+1),check++;
           else if(Game->playerb9->pos().y()>250 ) Game->playerb9->setPos(Game->playerb9->pos().x(),Game->playerb9->y()-1),check++;


           if(Game->playerb11->pos().x()<750 ) Game->playerb11->setPos(Game->playerb11->pos().x()+1,Game->playerb11->y()),check++;
           else if(Game->playerb11->pos().x()>750 ) Game->playerb11->setPos(Game->playerb11->pos().x()-1,Game->playerb11->y()),check++;
           if(Game->playerb11->pos().y()<10 ) Game->playerb11->setPos(Game->playerb11->pos().x(),Game->playerb11->y()+1),check++;
           else if(Game->playerb11->pos().y()>10 ) Game->playerb11->setPos(Game->playerb11->pos().x(),Game->playerb11->y()-1),check++;

           if(Game->ContVar->Corner==1){
               if(Game->playerb10->pos().x()<670 ) Game->playerb10->setPos(Game->playerb10->pos().x()+1,Game->playerb10->y()),check++;
               else if(Game->playerb10->pos().x()>670 ) Game->playerb10->setPos(Game->playerb10->pos().x()-1,Game->playerb10->y()),check++;
               if(Game->playerb10->pos().y()<160 ) Game->playerb10->setPos(Game->playerb10->pos().x(),Game->playerb10->y()+1),check++;
               else if(Game->playerb10->pos().y()>160 ) Game->playerb10->setPos(Game->playerb10->pos().x(),Game->playerb10->y()-1),check++;

           }
           else if(Game->ContVar->Corner==4){
               if(Game->playerb10->pos().x()<670 ) Game->playerb10->setPos(Game->playerb10->pos().x()+1,Game->playerb10->y()),check++;
               else if(Game->playerb10->pos().x()>670 ) Game->playerb10->setPos(Game->playerb10->pos().x()-1,Game->playerb10->y()),check++;
               if(Game->playerb10->pos().y()<530 ) Game->playerb10->setPos(Game->playerb10->pos().x(),Game->playerb10->y()+1),check++;
               else if(Game->playerb10->pos().y()>530 ) Game->playerb10->setPos(Game->playerb10->pos().x(),Game->playerb10->y()-1),check++;

           }
           if(check==0){
              Game->ContVar->Freze_Player=0;
              Controler=0;
              Game->ContVar->Through=2;
           }

            //Game->ball->setPos(750,55);

       }
       else if(Team==2){

           if(Game->playerb1->pos().x()<70 ) Game->playerb1->setPos(Game->playerb1->pos().x()+1,Game->playerb1->y()),check++;
           else if(Game->playerb1->pos().x()>70 ) Game->playerb1->setPos(Game->playerb1->pos().x()-1,Game->playerb1->y()),check++;
           if(Game->playerb1->pos().y()<280 ) Game->playerb1->setPos(Game->playerb1->pos().x(),Game->playerb1->y()+1),check++;
           else if(Game->playerb1->pos().y()>280 ) Game->playerb1->setPos(Game->playerb1->pos().x(),Game->playerb1->y()-1),check++;


           if(Game->playerb2->pos().x()<70 ) Game->playerb2->setPos(Game->playerb2->pos().x()+1,Game->playerb2->y()),check++;
           else if(Game->playerb2->pos().x()>70 ) Game->playerb2->setPos(Game->playerb2->pos().x()-1,Game->playerb2->y()),check++;
           if(Game->playerb2->pos().y()<220 ) Game->playerb2->setPos(Game->playerb2->pos().x(),Game->playerb2->y()+1),check++;
           else if(Game->playerb2->pos().y()>220 ) Game->playerb2->setPos(Game->playerb2->pos().x(),Game->playerb2->y()-1),check++;

           if(Game->playerb3->pos().x()<70 ) Game->playerb3->setPos(Game->playerb3->pos().x()+1,Game->playerb3->y()),check++;
           else if(Game->playerb3->pos().x()>70 ) Game->playerb3->setPos(Game->playerb3->pos().x()-1,Game->playerb3->y()),check++;
           if(Game->playerb3->pos().y()<340 ) Game->playerb3->setPos(Game->playerb3->pos().x(),Game->playerb3->y()+1),check++;
           else if(Game->playerb3->pos().y()>340 ) Game->playerb3->setPos(Game->playerb3->pos().x(),Game->playerb3->y()-1),check++;

           if(Game->playerb4->pos().x()<40 ) Game->playerb4->setPos(Game->playerb4->pos().x()+1,Game->playerb4->y()),check++;
           else if(Game->playerb4->pos().x()>40 ) Game->playerb4->setPos(Game->playerb4->pos().x()-1,Game->playerb4->y()),check++;
           if(Game->playerb4->pos().y()<150 ) Game->playerb4->setPos(Game->playerb4->pos().x(),Game->playerb4->y()+1),check++;
           else if(Game->playerb4->pos().y()>150 ) Game->playerb4->setPos(Game->playerb4->pos().x(),Game->playerb4->y()-1),check++;

           if(Game->playerb5->pos().x()<130 ) Game->playerb5->setPos(Game->playerb5->pos().x()+1,Game->playerb5->y()),check++;
           else if(Game->playerb5->pos().x()>130 ) Game->playerb5->setPos(Game->playerb5->pos().x()-1,Game->playerb5->y()),check++;
           if(Game->playerb5->pos().y()<150 ) Game->playerb5->setPos(Game->playerb5->pos().x(),Game->playerb5->y()+1),check++;
           else if(Game->playerb5->pos().y()>150 ) Game->playerb5->setPos(Game->playerb5->pos().x(),Game->playerb5->y()-1),check++;

           if(Game->playerb6->pos().x()<130 ) Game->playerb6->setPos(Game->playerb6->pos().x()+1,Game->playerb6->y()),check++;
           else if(Game->playerb6->pos().x()>130 ) Game->playerb6->setPos(Game->playerb6->pos().x()-1,Game->playerb6->y()),check++;
           if(Game->playerb6->pos().y()<240 ) Game->playerb6->setPos(Game->playerb6->pos().x(),Game->playerb6->y()+1),check++;
           else if(Game->playerb6->pos().y()>240 ) Game->playerb6->setPos(Game->playerb6->pos().x(),Game->playerb6->y()-1),check++;

           if(Game->playerb7->pos().x()<130 ) Game->playerb7->setPos(Game->playerb7->pos().x()+1,Game->playerb7->y()),check++;
           else if(Game->playerb7->pos().x()>130 ) Game->playerb7->setPos(Game->playerb7->pos().x()-1,Game->playerb7->y()),check++;
           if(Game->playerb7->pos().y()<330 ) Game->playerb7->setPos(Game->playerb7->pos().x(),Game->playerb7->y()+1),check++;
           else if(Game->playerb7->pos().y()>330 ) Game->playerb7->setPos(Game->playerb7->pos().x(),Game->playerb7->y()-1),check++;

           if(Game->playerb8->pos().x()<130 ) Game->playerb8->setPos(Game->playerb8->pos().x()+1,Game->playerb8->y()),check++;
           else if(Game->playerb8->pos().x()>130 ) Game->playerb8->setPos(Game->playerb8->pos().x()-1,Game->playerb8->y()),check++;
           if(Game->playerb8->pos().y()<420 ) Game->playerb8->setPos(Game->playerb8->pos().x(),Game->playerb8->y()+1),check++;
           else if(Game->playerb8->pos().y()>420 ) Game->playerb8->setPos(Game->playerb8->pos().x(),Game->playerb8->y()-1),check++;

           if(Game->playerb9->pos().x()<40 ) Game->playerb9->setPos(Game->playerb9->pos().x()+1,Game->playerb9->y()),check++;
           else if(Game->playerb9->pos().x()>40 ) Game->playerb9->setPos(Game->playerb9->pos().x()-1,Game->playerb9->y()),check++;
           if(Game->playerb9->pos().y()<420 ) Game->playerb9->setPos(Game->playerb9->pos().x(),Game->playerb9->y()+1),check++;
           else if(Game->playerb9->pos().y()>420 ) Game->playerb9->setPos(Game->playerb9->pos().x(),Game->playerb9->y()-1),check++;

           if(Game->playerb10->pos().x()<250 ) Game->playerb10->setPos(Game->playerb10->pos().x()+1,Game->playerb10->y()),check++;
           else if(Game->playerb10->pos().x()>250 ) Game->playerb10->setPos(Game->playerb10->pos().x()-1,Game->playerb10->y()),check++;
           if(Game->playerb10->pos().y()<150 ) Game->playerb10->setPos(Game->playerb10->pos().x(),Game->playerb10->y()+1),check++;
           else if(Game->playerb10->pos().y()>150 ) Game->playerb10->setPos(Game->playerb10->pos().x(),Game->playerb10->y()-1),check++;

           if(Game->playerb11->pos().x()<250 ) Game->playerb11->setPos(Game->playerb11->pos().x()+1,Game->playerb11->y()),check++;
           else if(Game->playerb11->pos().x()>250 ) Game->playerb11->setPos(Game->playerb11->pos().x()-1,Game->playerb11->y()),check++;
           if(Game->playerb11->pos().y()<420 ) Game->playerb11->setPos(Game->playerb11->pos().x(),Game->playerb11->y()+1),check++;
           else if(Game->playerb11->pos().y()>420 ) Game->playerb11->setPos(Game->playerb11->pos().x(),Game->playerb11->y()-1),check++;


           if(Game->playera1->pos().x()<600 ) Game->playera1->setPos(Game->playera1->pos().x()+1,Game->playera1->y()),check++;
           else if(Game->playera1->pos().x()>600 ) Game->playera1->setPos(Game->playera1->pos().x()-1,Game->playera1->y()),check++;
           if(Game->playera1->pos().y()<280 ) Game->playera1->setPos(Game->playera1->pos().x(),Game->playera1->y()+1),check++;
           else if(Game->playera1->pos().y()>280 ) Game->playera1->setPos(Game->playera1->pos().x(),Game->playera1->y()-1),check++;


           if(Game->playera2->pos().x()<500 ) Game->playera2->setPos(Game->playera2->pos().x()+1,Game->playera2->y()),check++;
           else if(Game->playera2->pos().x()>500 ) Game->playera2->setPos(Game->playera2->pos().x()-1,Game->playera2->y()),check++;
           if(Game->playera2->pos().y()<150 ) Game->playera2->setPos(Game->playera2->pos().x(),Game->playera2->y()+1),check++;
           else if(Game->playera2->pos().y()>150 ) Game->playera2->setPos(Game->playera2->pos().x(),Game->playera2->y()-1),check++;

           if(Game->playera3->pos().x()<500 ) Game->playera3->setPos(Game->playera3->pos().x()+1,Game->playera3->y()),check++;
           else if(Game->playera3->pos().x()>500 ) Game->playera3->setPos(Game->playera3->pos().x()-1,Game->playera3->y()),check++;
           if(Game->playera3->pos().y()<420 ) Game->playera3->setPos(Game->playera3->pos().x(),Game->playera3->y()+1),check++;
           else if(Game->playera3->pos().y()>420 ) Game->playera3->setPos(Game->playera3->pos().x(),Game->playera3->y()-1),check++;


           if(Game->playera4->pos().x()<400 ) Game->playera4->setPos(Game->playera4->pos().x()+1,Game->playera4->y()),check++;
           else if(Game->playera4->pos().x()>400 ) Game->playera4->setPos(Game->playera4->pos().x()-1,Game->playera4->y()),check++;
           if(Game->playera4->pos().y()<280 ) Game->playera4->setPos(Game->playera4->pos().x(),Game->playera4->y()+1),check++;
           else if(Game->playera4->pos().y()>280 ) Game->playera4->setPos(Game->playera4->pos().x(),Game->playera4->y()-1),check++;

           if(Game->playera5->pos().x()<130 ) Game->playera5->setPos(Game->playera5->pos().x()+1,Game->playera5->y()),check++;
           else if(Game->playera5->pos().x()>130 ) Game->playera5->setPos(Game->playera5->pos().x()-1,Game->playera5->y()),check++;
           if(Game->playera5->pos().y()<375 ) Game->playera5->setPos(Game->playera5->pos().x(),Game->playera5->y()+1),check++;
           else if(Game->playera5->pos().y()>375 ) Game->playera5->setPos(Game->playera5->pos().x(),Game->playera5->y()-1),check++;


           if(Game->playera6->pos().x()<130 ) Game->playera6->setPos(Game->playera6->pos().x()+1,Game->playera6->y()),check++;
           else if(Game->playera6->pos().x()>130 ) Game->playera6->setPos(Game->playera6->pos().x()-1,Game->playera6->y()),check++;
           if(Game->playera6->pos().y()<285 ) Game->playera6->setPos(Game->playera6->pos().x(),Game->playera6->y()+1),check++;
           else if(Game->playera6->pos().y()>285 ) Game->playera6->setPos(Game->playera6->pos().x(),Game->playera6->y()-1),check++;


           if(Game->playera7->pos().x()<130 ) Game->playera7->setPos(Game->playera7->pos().x()+1,Game->playera7->y()),check++;
           else if(Game->playera7->pos().x()>130 ) Game->playera7->setPos(Game->playera7->pos().x()-1,Game->playera7->y()),check++;
           if(Game->playera7->pos().y()<190 ) Game->playera7->setPos(Game->playera7->pos().x(),Game->playera7->y()+1),check++;
           else if(Game->playera7->pos().y()>190 ) Game->playera7->setPos(Game->playera7->pos().x(),Game->playera7->y()-1),check++;


           if(Game->playera8->pos().x()<85 ) Game->playera8->setPos(Game->playera8->pos().x()+1,Game->playera8->y()),check++;
           else if(Game->playera8->pos().x()>85 ) Game->playera8->setPos(Game->playera8->pos().x()-1,Game->playera8->y()),check++;
           if(Game->playera8->pos().y()<400 ) Game->playera8->setPos(Game->playera8->pos().x(),Game->playera8->y()+1),check++;
           else if(Game->playera8->pos().y()>400 ) Game->playera8->setPos(Game->playera8->pos().x(),Game->playera8->y()-1),check++;

           if(Game->playera9->pos().x()<90 ) Game->playera9->setPos(Game->playera9->pos().x()+1,Game->playera9->y()),check++;
           else if(Game->playera9->pos().x()>90 ) Game->playera9->setPos(Game->playera9->pos().x()-1,Game->playera9->y()),check++;
           if(Game->playera9->pos().y()<250 ) Game->playera9->setPos(Game->playera9->pos().x(),Game->playera9->y()+1),check++;
           else if(Game->playera9->pos().y()>250 ) Game->playera9->setPos(Game->playera9->pos().x(),Game->playera9->y()-1),check++;


           if(Game->playera11->pos().x()<10 ) Game->playera11->setPos(Game->playera11->pos().x()+1,Game->playera11->y()),check++;
           else if(Game->playera11->pos().x()>10 ) Game->playera11->setPos(Game->playera11->pos().x()-1,Game->playera11->y()),check++;
           if(Game->playera11->pos().y()<10 ) Game->playera11->setPos(Game->playera11->pos().x(),Game->playera11->y()+1),check++;
           else if(Game->playera11->pos().y()>10 ) Game->playera11->setPos(Game->playera11->pos().x(),Game->playera11->y()-1),check++;

           if(Game->ContVar->Corner==2){
               if(Game->playera10->pos().x()<85 ) Game->playera10->setPos(Game->playera10->pos().x()+1,Game->playera10->y()),check++;
               else if(Game->playera10->pos().x()>85 ) Game->playera10->setPos(Game->playera10->pos().x()-1,Game->playera10->y()),check++;
               if(Game->playera10->pos().y()<160 ) Game->playera10->setPos(Game->playera10->pos().x(),Game->playera10->y()+1),check++;
               else if(Game->playera10->pos().y()>160 ) Game->playera10->setPos(Game->playera10->pos().x(),Game->playera10->y()-1),check++;

           }
           else if(Game->ContVar->Corner==2){
               if(Game->playera10->pos().x()<85 ) Game->playera10->setPos(Game->playera10->pos().x()+1,Game->playera10->y()),check++;
               else if(Game->playera10->pos().x()>85 ) Game->playera10->setPos(Game->playera10->pos().x()-1,Game->playera10->y()),check++;
               if(Game->playera10->pos().y()<530 ) Game->playera10->setPos(Game->playera10->pos().x(),Game->playera10->y()+1),check++;
               else if(Game->playera10->pos().y()>530 ) Game->playera10->setPos(Game->playera10->pos().x(),Game->playera10->y()-1),check++;

           }


           //Game->playerb1->setPos(600,280);
           //Game->playerb2->setPos(500,150);
           //Game->playerb3->setPos(500,420);
           //Game->playerb4->setPos(400,280);
           //Game->playerb5->setPos(130,375);
           //Game->playerb6->setPos(130,285);
          // Game->playerb7->setPos(130,190);
          // Game->playerb8->setPos(85,400);
          // Game->playerb9->setPos(90,250);
           //Game->playerb10->setPos(85,160);
          // Game->playerb11->setPos(10,10);

           //Game->ball->setPos(25,55);
           if(check==0){
              Game->ContVar->Freze_Player=0;
              Controler=0;
              Game->ContVar->Through=1;
           }

       }
    }

}

