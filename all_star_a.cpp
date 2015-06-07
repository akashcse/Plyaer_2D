#include"all_star_a.h"
#include<QTimer>
#include<QDebug>
#include<QGraphicsscene>
#include<QList>
#include"football.h"
#include"rush.h"
#include"game_control.h"
//extern game_control *Game;

extern game_control *Game;

all_star_a::all_star_a(QGraphicsItem *parent):QObject(),QGraphicsPixmapItem(parent)
{
        //set player as circle
        setPixmap(QPixmap(":/images/a.png"));
        Pace=2,Accelarlation=2,Controler=0;
     //   Game->ball->setPos(390,290);
        //connect
        QTimer * timer=new QTimer();
        connect(timer,SIGNAL(timeout()),this,SLOT(move()));
        timer->start(50);
}

void all_star_a::move()
{
    //QPen pen;
  //  pen.setColor(QColor("#EDC9AF"));
  //  scene()->addEllipse(x(), y(), 20, 20, pen, QBrush(QColor("#EDC9AF")));

   // qDebug()<<Game->ball->pos().x()<<"  "<<Game->ball->pos().y();

    QList<QGraphicsItem *> colliding_items=collidingItems();
        for(int i=0,n=colliding_items.size();i<n;i++){
            if(typeid(*(colliding_items[i]))==typeid(football)){
               //increase score
                //Game->Sc->increase();
                Game->ball->Enable_counter(30);

               /* scene()->removeItem(colliding_items[i]);
                scene()->removeItem(this);
                delete colliding_items[i];
                delete this;*/
                return;

            }
        }

        if(Game->ball->pos().x()>=pos().x()){
            if(Game->ball->pos().y()>pos().y()){
                setPos(x()+(Pace+Accelarlation)/2,y()+(Pace+Accelarlation)/2+1);

            }
            else{
                setPos(x()+(Pace+Accelarlation)/2,y()-(Pace+Accelarlation)/2-1);

            }
        }
        else if(Game->ball->pos().x()<pos().x()){
            if(Game->ball->pos().y()>=pos().y()){
                setPos(x()-(Pace+Accelarlation)/2,y()+(Pace+Accelarlation)/2+1);

            }
            else{
                setPos(x()-(Pace+Accelarlation)/2,y()-(Pace+Accelarlation)/2-1);

            }
        }
        //rush *R=new rush(x(),y());


}
