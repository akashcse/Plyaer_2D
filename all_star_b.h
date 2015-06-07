#ifndef ALL_STAR_B
#define ALL_STAR_B

#include<QGraphicsRectItem>
#include<QGraphicsPixmapItem>
#include<QObject>
class all_star_b:public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    all_star_b(QGraphicsItem * parent=0);
public slots:
    void move();
private:
     int Pace,Accelarlation,Controler;
};





#endif // ALL_STAR_B

