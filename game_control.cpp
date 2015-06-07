#include <QApplication>
#include<QGraphicsScene>
#include<QGraphicsView>
#include<QTimer>
#include<QObject>
#include<QGraphicsPixmapItem>
#include <QMediaPlayer>
#include<QImage>
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
#include "corner.h"
#include"football.h"
#include"odience.h"
#include"banner.h"
#include"tree.h"
#include"tree2.h"
#include"control_variables.h"
#include"nearest_a.h"
#include"nearest_b.h"
#include"start.h"
#include"details.h"
#define Ax 390
#define Ay 290

game_control::game_control(QWidget *parent)
{
    //create a sense


        scene=new QGraphicsScene();
        scene->setSceneRect(0,0,800,600);

        setBackgroundBrush(QBrush(QImage(":/images/new.jpg").scaled(800,600)));

        setScene(scene);
        setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        setFixedSize(800,600);




       //set odeence

        odience *Od=new odience();
        Od->setPos(0,0);
        scene->addItem(Od);
        //set banner

        banner *Bn=new banner();
        Bn->setPos(410,0);
        scene->addItem(Bn);

       // settree
        tree *Tr=new tree();
        Tr->setPos(50,520);
        scene->addItem(Tr);

        tree *Trr=new tree();
        Trr->setPos(350,520);
        scene->addItem(Trr);

        tree *Trrr=new tree();
        Trrr->setPos(650,520);
        scene->addItem(Trrr);

       tree2 *Tr2=new tree2();
        Tr2->setPos(80,540);
       // scene->addItem(Tr2);







     //   QDesktopWidget* desktopWidget = QApplication::desktop();
       // QRect rect = desktopWidget->availableGeometry();
      //  QSize size(rect.width() , rect.height());
       // setBackgroundBrush(QBrush(QImage(":/images/Football_Pitch.jpg").scaled(800,600)));

        //put allstar a
        //rush * A=new rush(10,10);
       // scene->addItem(A);



        playera1 =new all_star_a1();//17,220,340,280
        playera1->setPos(50,280);
        scene->addItem(playera1);


        playera2 =new all_star_a2();
        playera2->setPos(180,140);
        scene->addItem(playera2);

        playera3 =new all_star_a3();
        playera3->setPos(180,280);
        scene->addItem(playera3);

        playera4 =new all_star_a4();
        playera4->setPos(180,420);
        scene->addItem(playera4);

        playera5 =new all_star_a5();
        playera5->setPos(270,70);
        scene->addItem(playera5);

        playera6 =new all_star_a6();
        playera6->setPos(270,210);
        scene->addItem(playera6);

        playera7 =new all_star_a7();
        playera7->setPos(270,340);
        scene->addItem(playera7);
        
        playera8 =new all_star_a8();
        playera8->setPos(270,480);
        scene->addItem(playera8);

        playera9 =new all_star_a9();
        playera9->setPos(300,280);
        scene->addItem(playera9);

        playera10 =new all_star_a10();
        playera10->setPos(365,200);
        scene->addItem(playera10);

        playera11 =new all_star_a11();
        playera11->setPos(365,360);
        scene->addItem(playera11);

        //put allstar b
        playerb1 =new all_star_b1();//635,150,415,745
        playerb1->setPos(720,280);
        scene->addItem(playerb1);

        playerb2 =new all_star_b2();
        playerb2->setPos(580,140);
        scene->addItem(playerb2);

        playerb3 =new all_star_b3();
        playerb3->setPos(580,280);
        scene->addItem(playerb3);

        playerb4 =new all_star_b4();
        playerb4->setPos(580,420);
        scene->addItem(playerb4);

        playerb5 =new all_star_b5();
        playerb5->setPos(500,70);
        scene->addItem(playerb5);

        playerb6 =new all_star_b6();
        playerb6->setPos(500,210);
        scene->addItem(playerb6);

        playerb7 =new all_star_b7();
        playerb7->setPos(500,350);
        scene->addItem(playerb7);

        playerb8 =new all_star_b8();
        playerb8->setPos(500,490);
        scene->addItem(playerb8);

        playerb9 =new all_star_b9();
        playerb9->setPos(465,280);
        scene->addItem(playerb9);

        playerb10 =new all_star_b10();
        playerb10->setPos(400,200);
        scene->addItem(playerb10);

        playerb11 =new all_star_b11();
        playerb11->setPos(400,360);
        scene->addItem(playerb11);


        //put allstar c
        ball =new football();

        //ball->setPos(10, 299);
        ball->setPos(390.0,290.0);
        // qDebug()<<"countggeerr "<<ball->pos().x();
       // ball->show();
        scene->addItem(ball);

        //all supporting stuff
        //enable corner
        Cr=new corner();
        //Cr.Controler=10;
        //Cr.move('b');
        ContVar=new control_variables();
        NearA=new nearest_a();
        NearB=new nearest_b();

        Strt=new start();

        Scr=new score();
        Scr->setPos(140,550);
        scene->addItem(Scr);

        Dtl=new details();
        Dtl->setPos(490,550);
        scene->addItem(Dtl);

        CC=new check_collition();



        show();

}
