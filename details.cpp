#include"details.h"
#include<QFont>
#include"game_control.h"
extern game_control *Game;
details::details(QGraphicsItem *parent)
{
    Dpl="Game Start!!";
    setPlainText(QString(Dpl));
    setDefaultTextColor(Qt::red);
    setFont(QFont("timies",13));

}

void details::Display()
{
    if(Game->ContVar->Half==1){
        Dpl="1st Half\n"+Dpl;
    }
    else
        Dpl="2nd Half\n"+Dpl;
    setPlainText(QString(Dpl));

}
