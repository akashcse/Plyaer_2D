#ifndef FOOTBALL
#define FOOTBALL

#include<QGraphicsRectItem>
#include<QGraphicsPixmapItem>
#include<QObject>
class football:public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    football(QGraphicsItem * parent=0);
    void Enable_counter(int a,int Xdir,int Ydir );
    void Long_Shot(int X,int Y);
    void Long_Shot_Air(int X,int Y);
    void Short_pass(int X,int Y);
    void Own_Handle();
    void Goal_Shot();
    int PreX,PreY,Count_ball,Air;

public:
    int Counter,Xline,Yline,Lp,Sp,Dx,Dy;
    float MinX,MinY,i,k;
    bool FlagX,FlagY;
public slots:
    void move();
};



#endif // FOOTBALL

