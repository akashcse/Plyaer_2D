#ifndef ALL_STAR_B11
#define ALL_STAR_B11
#include<QGraphicsRectItem>
#include<QGraphicsPixmapItem>
#include<QObject>
class all_star_b11:public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    all_star_b11(QGraphicsItem * parent=0);
public slots:
    void move();
private:
     int Pace,Accelarlation,Stamina,Controler,Heading,Vision,Marking, Decisions;
};
#endif // ALL_STAR_B11

