#ifndef ALL_STAR_B10
#define ALL_STAR_B10
#include<QGraphicsRectItem>
#include<QGraphicsPixmapItem>
#include<QObject>
class all_star_b10:public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    all_star_b10(QGraphicsItem * parent=0);
    int Behave;
public slots:
    void move();
private:
     int Pace,Accelarlation,Stamina,Controler,Heading,Vision,Marking, Decisions;
};
#endif // ALL_STAR_B10

