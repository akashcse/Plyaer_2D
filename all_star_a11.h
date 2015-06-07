#ifndef ALL_STAR_A11
#define ALL_STAR_A11

#include<QGraphicsRectItem>
#include<QGraphicsPixmapItem>
#include<QObject>
class all_star_a11:public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    all_star_a11(QGraphicsItem * parent=0);
public slots:
    void move();
private:
    int Pace,Accelarlation,Stamina,Controler,Heading,Vision,Marking, Decisions;
};

#endif // ALL_STAR_A11

