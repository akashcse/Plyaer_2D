#ifndef BANNER
#define BANNER

#include<QGraphicsRectItem>
#include<QGraphicsPixmapItem>
#include<QObject>
class banner:public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    banner(QGraphicsItem * parent=0);
};

#endif // BANNER

