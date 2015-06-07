#ifndef SCORE
#define SCORE
#include<QGraphicsTextItem>

class score: public QGraphicsTextItem{
    public:
    score(QGraphicsItem * parent=0);
    int A,B;
    void IncreaseA();
    void IncreaseB();


};

#endif // SCORE

