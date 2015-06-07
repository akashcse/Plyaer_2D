#ifndef CORNER
#define CORNER

#include<QGraphicsRectItem>
#include<QGraphicsPixmapItem>
#include<QObject>
class corner:public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    corner(QGraphicsItem * parent=0);
public slots:
    void move();
public:
     int Controler,Team;
};

#endif // CORNER

