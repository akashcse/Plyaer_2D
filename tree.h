#ifndef TREE
#define TREE
#include<QGraphicsRectItem>
#include<QGraphicsPixmapItem>
#include<QObject>
class tree:public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
   tree(QGraphicsItem * parent=0);
public slots:
    void move();
private:
    int Rot;
};
#endif // TREE

