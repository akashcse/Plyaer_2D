#include"all_star_b.h"
#include<QTimer>
#include<QDebug>
#include<QGraphicsscene>
#include<QList>
#include"football.h"
#include"game_control.h"


extern game_control *Game;

all_star_b::all_star_b(QGraphicsItem *parent):QObject(),QGraphicsPixmapItem(parent)
{
        //set player as circle
        setPixmap(QPixmap(":/images/b.png"));
        Pace=2;Accelarlation=2,Controler=0;

       //connect
        if(Controler==0){
            QTimer * timer=new QTimer();
            connect(timer,SIGNAL(timeout()),this,SLOT(move()));
            timer->start(50);

        }

}

void all_star_b::move()
{
    QList<QGraphicsItem *> colliding_items=collidingItems();
        for(int i=0,n=colliding_items.size();i<n;i++){
            if(typeid(*(colliding_items[i]))==typeid(football)){
               //increase score
                //Game->Sc->increase();
                 Game->ball->Enable_counter(25);

               /* scene()->removeItem(colliding_items[i]);
                scene()->removeItem(this);
                delete colliding_items[i];
                delete this;*/
                return;

            }
        }


        if(Game->ball->pos().x()>pos().x()){
            if(Game->ball->pos().y()>=pos().y()){
                setPos(x()+(Pace+Accelarlation)/2,y()+(Pace+Accelarlation)/2);

            }
            else{
                setPos(x()+(Pace+Accelarlation)/2,y()-(Pace+Accelarlation)/2);

            }
        }
        else if(Game->ball->pos().x()<=pos().x()){
            if(Game->ball->pos().y()>pos().y()){
                setPos(x()-(Pace+Accelarlation)/2,y()+(Pace+Accelarlation)/2);

            }
            else{
                setPos(x()-(Pace+Accelarlation)/2,y()-(Pace+Accelarlation)/2);

            }
        }

}
