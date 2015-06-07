#ifndef CHECK_COLLITION
#define CHECK_COLLITION
#include<QGraphicsRectItem>
#include<QGraphicsPixmapItem>
#include<QObject>

class check_collition:public QObject,public QGraphicsPixmapItem{
public:
    check_collition(QGraphicsItem * parent=0);
    bool Check_For_A(QGraphicsItem * A);
    bool Check_For_B(QGraphicsItem * A);
};



#endif // CHECK_COLLITION

