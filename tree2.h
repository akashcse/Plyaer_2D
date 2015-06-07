#ifndef TREE2
#define TREE2

#include<QGraphicsRectItem>
#include<QGraphicsPixmapItem>
#include<QObject>
class tree2:public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
   tree2(QGraphicsItem * parent=0);
};


#endif // TREE2

