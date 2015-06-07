#include"score.h"
#include<QFont>

score::score(QGraphicsItem *parent):QGraphicsTextItem(parent)
{
    A=0;B=0;
    setPlainText(QString("All star A ")+QString::number(A)+QString("-")+QString::number(B)+QString(" All star B"));
    setDefaultTextColor(Qt::blue);
    setFont(QFont("timies",16));
}


void score::IncreaseA()
{
    A++;
    setPlainText(QString("All star A ")+QString::number(A)+QString("-")+QString::number(B)+QString(" All star B"));


}


void score::IncreaseB()
{
    B++;
    setPlainText(QString("All star A ")+QString::number(A)+QString("-")+QString::number(B)+QString(" All star B"));


}
