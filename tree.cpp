#include<QGraphicsscene>
#include<QTimer>
#include"tree.h"

tree::tree(QGraphicsItem *parent):QObject(),QGraphicsPixmapItem(parent)
{
     setPixmap(QPixmap(":/images/TP.png").scaled(100,100));
     // setPixmap(QPixmap(":/images/tree.png"));
     Rot=3;

     QTimer * timer=new QTimer();
     connect(timer,SIGNAL(timeout()),this,SLOT(move()));
     timer->start(1000);


}

void tree::move()
{
    if(Rot==3){
         setRotation(1);
         Rot=20;
    }
    else if(Rot==20){
        setRotation(0);
        Rot=1;
    }
    else if(Rot==1){
        setRotation(-1);
        Rot=10;
    }
    else if(Rot==10){
        setRotation(0);
        Rot=3;
    }




}

