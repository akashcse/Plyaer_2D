#include<QGraphicsscene>
#include"banner.h"

banner::banner(QGraphicsItem *parent):QObject(),QGraphicsPixmapItem(parent)
{
     setPixmap(QPixmap(":/images/dustRacing2DBanner.png").scaled(350,60));
     setRotation(1);

}

