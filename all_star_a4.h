#ifndef ALL_STAR_A4
#define ALL_STAR_A4
#include<QGraphicsRectItem>
#include<QGraphicsPixmapItem>
#include<QObject>
class all_star_a4:public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    all_star_a4(QGraphicsItem * parent=0);
public slots:
    void move();
private:
    int Pace,Accelarlation,Stamina,Controler,Heading,Vision,Marking, Decisions;
};


#endif // ALL_STAR_A4

