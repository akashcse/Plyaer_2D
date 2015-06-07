#ifndef ALL_STAR_A1
#define ALL_STAR_A1

#include<QGraphicsRectItem>
#include<QGraphicsPixmapItem>
#include<QObject>
class all_star_a1:public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    all_star_a1(QGraphicsItem * parent=0);
    void Position(int x,int y);
public slots:
    void move();
private:
    int Accelarlation, Pace, Stamina,Controler,Heading,Vision,Marking, Decisions;
};


#endif // ALL_STAR_A

