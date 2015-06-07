#include <QApplication>
#include"game_control.h"
game_control * Game;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Game=new  game_control();
    Game->show();

    return a.exec();
}
