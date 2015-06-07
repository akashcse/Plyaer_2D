#ifndef DETAILS
#define DETAILS
#include<QGraphicsTextItem>
#include<string>
class details: public QGraphicsTextItem{
    public:
    details(QGraphicsItem * parent=0);
    QString Dpl;
    void Display();
};


#endif // DETAILS

