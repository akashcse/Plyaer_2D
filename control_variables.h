#ifndef CONTROL_VARIABLES
#define CONTROL_VARIABLES
#include<QGraphicsRectItem>
#include<QGraphicsPixmapItem>
#include<QObject>
class control_variables:public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
   public:
    control_variables(QGraphicsItem * parent=0);
    int Ball_Control,Ball_Owner,TeamAside,TeamBside,Freze_Player;
    int Pass_Interuppt,Ball_on_pass,Half,Ball_Stop,Ball_On_Air,FalX,FalY;
    int StopA,StopB,Corner,Through;
public slots:
    void move();
};


#endif // CONTROL_VARIABLES

