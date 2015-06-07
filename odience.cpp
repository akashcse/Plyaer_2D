#include<QGraphicsscene>
#include"odience.h"

odience::odience(QGraphicsItem *parent):QObject(),QGraphicsPixmapItem(parent)
{
     setPixmap(QPixmap(":/images/grandstandEditor.png").scaled(400,60));
     setRotation(-1);

}
