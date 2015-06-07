#ifndef ODIENCE
#define ODIENCE

#include<QGraphicsRectItem>
#include<QGraphicsPixmapItem>
#include<QObject>
class odience:public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    odience(QGraphicsItem * parent=0);
};


#endif // ODIENCE

