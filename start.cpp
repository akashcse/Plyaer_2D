#include"start.h"
#include"game_control.h"
#include<QTimer>
#include<QTime>
extern game_control *Game;


start::start()
{

}

void start::start_again(int side)
{
    //Game->ContVar->Freze_Player=1;

    if(Game->ContVar->Half==1){

        Game->playera1->setPos(50,280);
        Game->playera2->setPos(180,140);
        Game->playera3->setPos(180,280);
        Game->playera4->setPos(180,420);
        Game->playera5->setPos(270,70);
        Game->playera6->setPos(270,210);
        Game->playera7->setPos(270,340);
        Game->playera8->setPos(270,480);
        Game->playera9->setPos(300,280);
        Game->playera10->setPos(365,200);
        Game->playera11->setPos(365,360);

        Game->playerb1->setPos(720,280);
        Game->playerb2->setPos(580,140);
        Game->playerb3->setPos(580,280);
        Game->playerb4->setPos(580,420);
        Game->playerb5->setPos(500,70);
        Game->playerb6->setPos(500,210);
        Game->playerb7->setPos(500,350);
        Game->playerb8->setPos(500,490);
        Game->playerb9->setPos(465,280);
        Game->playerb10->setPos(400,200);
        Game->playerb11->setPos(400,360);

        Game->ball->setPos(390,290);

        QTime dieTime= QTime::currentTime().addMSecs(100);
                    while( QTime::currentTime() < dieTime )
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 100);

        Game->ContVar->Freze_Player=0;

        if(side==1){
            Game->ContVar->Ball_Control=2;
            Game->playera10->Behave=120;
        }

        else{
            Game->ContVar->Ball_Control=1;
            Game->playerb10->Behave=120;
        }


    }
    else{
        //Game->ContVar->Freze_Player=1;

        if(Game->ContVar->Half==2){
             Game->ball->setPos(390,290);
            Game->playerb1->setPos(50,280);
            Game->playerb2->setPos(180,140);
            Game->playerb3->setPos(180,280);
            Game->playerb4->setPos(180,420);
            Game->playerb5->setPos(270,70);
            Game->playerb6->setPos(270,210);
            Game->playerb7->setPos(270,340);
            Game->playerb8->setPos(270,480);
            Game->playerb9->setPos(300,280);
            Game->playerb10->setPos(365,200);
            Game->playerb11->setPos(365,360);

            Game->playera1->setPos(720,280);
            Game->playera2->setPos(580,140);
            Game->playera3->setPos(580,280);
            Game->playera4->setPos(580,420);
            Game->playera5->setPos(500,70);
            Game->playera6->setPos(500,210);
            Game->playera7->setPos(500,350);
            Game->playera8->setPos(500,490);
            Game->playera9->setPos(465,280);
            Game->playera10->setPos(400,200);
            Game->playera11->setPos(400,360);

            Game->ball->setPos(390,290);

            QTime dieTime= QTime::currentTime().addMSecs(100);
                        while( QTime::currentTime() < dieTime )
                        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);

            Game->ContVar->Freze_Player=0;

            if(side==1){
                Game->ContVar->Ball_Control=1;
                Game->playerb10->Behave=120;
            }

            else{
                Game->ContVar->Ball_Control=2;
                Game->playera10->Behave=120;
            }
    }

    }
}

void start::Nearest_Chase()
{
    Game->NearA->Search_Nearest(Game->ball->pos().x(),Game->ball->pos().y());
    Game->NearB->Search_Nearest(Game->ball->pos().x(),Game->ball->pos().y());

    int Num=Game->NearA->Nearest_player;
    Game->ContVar->StopA=Num;

    if(Game->ContVar->Through!=2){
        if(Num==1){
            if(Game->ball->pos().x()>=Game->playera1->pos().x()){
                if(Game->ball->pos().y()>Game->playera1->pos().y()){
                    if(Game->playera1->pos().x()<110&&Game->playera1->pos().y()<340)
                    Game->playera1->setPos(Game->playera1->pos().x()+(4)/2,Game->playera1->pos().y()+(4)/2+1);

                }
                else{
                    if(Game->playera1->pos().x()<110&&Game->playera1->pos().y()>220)
                    Game->playera1->setPos(Game->playera1->pos().x()+(4)/2,Game->playera1->pos().y()-(4)/2-1);

                }
            }
            else if(Game->ball->pos().x()<Game->playera1->pos().x()){
                if(Game->ball->pos().y()>=Game->playera1->pos().y()){
                    if(Game->playera1->pos().x()>18&&Game->playera1->pos().y()<340)
                    Game->playera1->setPos(Game->playera1->pos().x()-(4)/2,Game->playera1->pos().y()+(4)/2+1);

                }
                else{
                    if(Game->playera1->pos().x()>18&&Game->playera1->pos().y()>220)
                    Game->playera1->setPos(Game->playera1->pos().x()-(4)/2,Game->playera1->pos().y()-(4)/2-1);

                }
            }
        }
        else if(Num==2){
            if(Game->ball->pos().x()>=Game->playera2->pos().x()){
                if(Game->ball->pos().y()>Game->playera2->pos().y()){
                    Game->playera2->setPos(Game->playera2->pos().x()+(4)/2,Game->playera2->pos().y()+(4)/2+1);

                }
                else{
                    Game->playera2->setPos(Game->playera2->pos().x()+(4)/2,Game->playera2->pos().y()-(4)/2-1);

                }
            }
            else if(Game->ball->pos().x()<Game->playera2->pos().x()){
                if(Game->ball->pos().y()>=Game->playera2->pos().y()){
                    Game->playera2->setPos(Game->playera2->pos().x()-(4)/2,Game->playera2->pos().y()+(4)/2+1);

                }
                else{
                    Game->playera2->setPos(Game->playera2->pos().x()-(4)/2,Game->playera2->pos().y()-(4)/2-1);

                }
            }
        }
        else if(Num==3){
            if(Game->ball->pos().x()>=Game->playera3->pos().x()){
                if(Game->ball->pos().y()>Game->playera3->pos().y()){
                    Game->playera3->setPos(Game->playera3->pos().x()+(4)/2,Game->playera3->pos().y()+(4)/2+1);

                }
                else{
                    Game->playera3->setPos(Game->playera3->pos().x()+(4)/2,Game->playera3->pos().y()-(4)/2-1);

                }
            }
            else if(Game->ball->pos().x()<Game->playera3->pos().x()){
                if(Game->ball->pos().y()>=Game->playera3->pos().y()){
                    Game->playera3->setPos(Game->playera3->pos().x()-(4)/2,Game->playera3->pos().y()+(4)/2+1);

                }
                else{
                    Game->playera3->setPos(Game->playera3->pos().x()-(4)/2,Game->playera3->pos().y()-(4)/2-1);

                }
            }
        }
        else if(Num==4){
            if(Game->ball->pos().x()>=Game->playera4->pos().x()){
                if(Game->ball->pos().y()>Game->playera4->pos().y()){
                    Game->playera4->setPos(Game->playera4->pos().x()+(4)/2,Game->playera4->pos().y()+(4)/2+1);

                }
                else{
                    Game->playera4->setPos(Game->playera4->pos().x()+(4)/2,Game->playera4->pos().y()-(4)/2-1);

                }
            }
            else if(Game->ball->pos().x()<Game->playera4->pos().x()){
                if(Game->ball->pos().y()>=Game->playera4->pos().y()){
                    Game->playera4->setPos(Game->playera4->pos().x()-(4)/2,Game->playera4->pos().y()+(4)/2+1);

                }
                else{
                    Game->playera4->setPos(Game->playera4->pos().x()-(4)/2,Game->playera4->pos().y()-(4)/2-1);

                }
            }
        }
        else if(Num==5){
            if(Game->ball->pos().x()>=Game->playera5->pos().x()){
                if(Game->ball->pos().y()>Game->playera5->pos().y()){
                    Game->playera5->setPos(Game->playera5->pos().x()+(4)/2,Game->playera5->pos().y()+(4)/2+1);

                }
                else{
                    Game->playera5->setPos(Game->playera5->pos().x()+(4)/2,Game->playera5->pos().y()-(4)/2-1);

                }
            }
            else if(Game->ball->pos().x()<Game->playera5->pos().x()){
                if(Game->ball->pos().y()>=Game->playera5->pos().y()){
                    Game->playera5->setPos(Game->playera5->pos().x()-(4)/2,Game->playera5->pos().y()+(4)/2+1);

                }
                else{
                    Game->playera5->setPos(Game->playera5->pos().x()-(4)/2,Game->playera5->pos().y()-(4)/2-1);

                }
            }
        }
        else if(Num==6){
            if(Game->ball->pos().x()>=Game->playera6->pos().x()){
                if(Game->ball->pos().y()>Game->playera6->pos().y()){
                    Game->playera6->setPos(Game->playera6->pos().x()+(4)/2,Game->playera6->pos().y()+(4)/2+1);

                }
                else{
                    Game->playera6->setPos(Game->playera6->pos().x()+(4)/2,Game->playera6->pos().y()-(4)/2-1);

                }
            }
            else if(Game->ball->pos().x()<Game->playera6->pos().x()){
                if(Game->ball->pos().y()>=Game->playera6->pos().y()){
                    Game->playera6->setPos(Game->playera6->pos().x()-(4)/2,Game->playera6->pos().y()+(4)/2+1);

                }
                else{
                    Game->playera6->setPos(Game->playera6->pos().x()-(4)/2,Game->playera6->pos().y()-(4)/2-1);

                }
            }
        }
        else if(Num==7){
            if(Game->ball->pos().x()>=Game->playera7->pos().x()){
                if(Game->ball->pos().y()>Game->playera7->pos().y()){
                    Game->playera7->setPos(Game->playera7->pos().x()+(4)/2,Game->playera7->pos().y()+(4)/2+1);

                }
                else{
                    Game->playera7->setPos(Game->playera7->pos().x()+(4)/2,Game->playera7->pos().y()-(4)/2-1);

                }
            }
            else if(Game->ball->pos().x()<Game->playera7->pos().x()){
                if(Game->ball->pos().y()>=Game->playera7->pos().y()){
                    Game->playera7->setPos(Game->playera7->pos().x()-(4)/2,Game->playera7->pos().y()+(4)/2+1);

                }
                else{
                    Game->playera7->setPos(Game->playera7->pos().x()-(4)/2,Game->playera7->pos().y()-(4)/2-1);

                }
            }
        }
        else if(Num==8){
            if(Game->ball->pos().x()>=Game->playera8->pos().x()){
                if(Game->ball->pos().y()>Game->playera8->pos().y()){
                    Game->playera8->setPos(Game->playera8->pos().x()+(4)/2,Game->playera8->pos().y()+(4)/2+1);

                }
                else{
                    Game->playera8->setPos(Game->playera8->pos().x()+(4)/2,Game->playera8->pos().y()-(4)/2-1);

                }
            }
            else if(Game->ball->pos().x()<Game->playera8->pos().x()){
                if(Game->ball->pos().y()>=Game->playera8->pos().y()){
                    Game->playera8->setPos(Game->playera8->pos().x()-(4)/2,Game->playera8->pos().y()+(4)/2+1);

                }
                else{
                    Game->playera8->setPos(Game->playera8->pos().x()-(4)/2,Game->playera8->pos().y()-(4)/2-1);

                }
            }
        }
        else if(Num==9){
            if(Game->ball->pos().x()>=Game->playera9->pos().x()){
                if(Game->ball->pos().y()>Game->playera9->pos().y()){
                    Game->playera9->setPos(Game->playera9->pos().x()+(4)/2,Game->playera9->pos().y()+(4)/2+1);

                }
                else{
                    Game->playera9->setPos(Game->playera9->pos().x()+(4)/2,Game->playera9->pos().y()-(4)/2-1);

                }
            }
            else if(Game->ball->pos().x()<Game->playera9->pos().x()){
                if(Game->ball->pos().y()>=Game->playera9->pos().y()){
                    Game->playera9->setPos(Game->playera9->pos().x()-(4)/2,Game->playera9->pos().y()+(4)/2+1);

                }
                else{
                    Game->playera9->setPos(Game->playera9->pos().x()-(4)/2,Game->playera9->pos().y()-(4)/2-1);

                }
            }
        }
        else if(Num==10){
            if(Game->ball->pos().x()>=Game->playera10->pos().x()){
                if(Game->ball->pos().y()>Game->playera10->pos().y()){
                    Game->playera10->setPos(Game->playera10->pos().x()+(4)/2,Game->playera10->pos().y()+(4)/2+1);

                }
                else{
                    Game->playera10->setPos(Game->playera10->pos().x()+(4)/2,Game->playera10->pos().y()-(4)/2-1);

                }
            }
            else if(Game->ball->pos().x()<Game->playera10->pos().x()){
                if(Game->ball->pos().y()>=Game->playera10->pos().y()){
                    Game->playera10->setPos(Game->playera10->pos().x()-(4)/2,Game->playera10->pos().y()+(4)/2+1);

                }
                else{
                    Game->playera10->setPos(Game->playera10->pos().x()-(4)/2,Game->playera10->pos().y()-(4)/2-1);

                }
            }
        }
        else if(Num==11){
            if(Game->ball->pos().x()>=Game->playera11->pos().x()){
                if(Game->ball->pos().y()>Game->playera11->pos().y()){
                    Game->playera11->setPos(Game->playera11->pos().x()+(4)/2,Game->playera11->pos().y()+(4)/2+1);

                }
                else{
                    Game->playera11->setPos(Game->playera11->pos().x()+(4)/2,Game->playera11->pos().y()-(4)/2-1);

                }
            }
            else if(Game->ball->pos().x()<Game->playera11->pos().x()){
                if(Game->ball->pos().y()>=Game->playera11->pos().y()){
                    Game->playera11->setPos(Game->playera11->pos().x()-(4)/2,Game->playera11->pos().y()+(4)/2+1);

                }
                else{
                    Game->playera11->setPos(Game->playera11->pos().x()-(4)/2,Game->playera11->pos().y()-(4)/2-1);

                }
            }
        }

    }

    Game->ContVar->StopA=0;

    Num=Game->NearB->Nearest_player;
Game->ContVar->StopB=Num;

if(Game->ContVar->Through!=1){
    if(Num==1){
        if(Game->ball->pos().x()>=Game->playerb1->pos().x()){
            if(Game->ball->pos().y()>Game->playerb1->pos().y()){
                if(Game->playerb1->pos().x()<750&&Game->playerb1->pos().y()<340)
                Game->playerb1->setPos(Game->playerb1->pos().x()+(4)/2,Game->playerb1->pos().y()+(4)/2+1);

            }
            else{
                if(Game->playerb1->pos().x()<750&&Game->playerb1->pos().y()>220)
                Game->playerb1->setPos(Game->playerb1->pos().x()+(4)/2,Game->playerb1->pos().y()-(4)/2-1);

            }
        }
        else if(Game->ball->pos().x()<Game->playerb1->pos().x()){
            if(Game->ball->pos().y()>=Game->playerb1->pos().y()){
                if(Game->playerb1->pos().x()>660&&Game->playerb1->pos().y()<340)
                Game->playerb1->setPos(Game->playerb1->pos().x()-(4)/2,Game->playerb1->pos().y()+(4)/2+1);

            }
            else{
                if(Game->playerb1->pos().x()>660&&Game->playerb1->pos().y()>220)
                Game->playerb1->setPos(Game->playerb1->pos().x()-(4)/2,Game->playerb1->pos().y()-(4)/2-1);

            }
        }
    }
    else if(Num==2){
        if(Game->ball->pos().x()>=Game->playerb2->pos().x()){
            if(Game->ball->pos().y()>Game->playerb2->pos().y()){
                Game->playerb2->setPos(Game->playerb2->pos().x()+(4)/2,Game->playerb2->pos().y()+(4)/2+1);

            }
            else{
                Game->playerb2->setPos(Game->playerb2->pos().x()+(4)/2,Game->playerb2->pos().y()-(4)/2-1);

            }
        }
        else if(Game->ball->pos().x()<Game->playerb2->pos().x()){
            if(Game->ball->pos().y()>=Game->playerb2->pos().y()){
                Game->playerb2->setPos(Game->playerb2->pos().x()-(4)/2,Game->playerb2->pos().y()+(4)/2+1);

            }
            else{
                Game->playerb2->setPos(Game->playerb2->pos().x()-(4)/2,Game->playerb2->pos().y()-(4)/2-1);

            }
        }
    }
    else if(Num==3){
        if(Game->ball->pos().x()>=Game->playerb3->pos().x()){
            if(Game->ball->pos().y()>Game->playerb3->pos().y()){
                Game->playerb3->setPos(Game->playerb3->pos().x()+(4)/2,Game->playerb3->pos().y()+(4)/2+1);

            }
            else{
                Game->playerb3->setPos(Game->playerb3->pos().x()+(4)/2,Game->playerb3->pos().y()-(4)/2-1);

            }
        }
        else if(Game->ball->pos().x()<Game->playerb3->pos().x()){
            if(Game->ball->pos().y()>=Game->playerb3->pos().y()){
                Game->playerb3->setPos(Game->playerb3->pos().x()-(4)/2,Game->playerb3->pos().y()+(4)/2+1);

            }
            else{
                Game->playerb3->setPos(Game->playerb3->pos().x()-(4)/2,Game->playerb3->pos().y()-(4)/2-1);

            }
        }
    }
    else if(Num==4){
        if(Game->ball->pos().x()>=Game->playerb4->pos().x()){
            if(Game->ball->pos().y()>Game->playerb4->pos().y()){
                Game->playerb4->setPos(Game->playerb4->pos().x()+(4)/2,Game->playerb4->pos().y()+(4)/2+1);

            }
            else{
                Game->playerb4->setPos(Game->playerb4->pos().x()+(4)/2,Game->playerb4->pos().y()-(4)/2-1);

            }
        }
        else if(Game->ball->pos().x()<Game->playerb4->pos().x()){
            if(Game->ball->pos().y()>=Game->playerb4->pos().y()){
                Game->playerb4->setPos(Game->playerb4->pos().x()-(4)/2,Game->playerb4->pos().y()+(4)/2+1);

            }
            else{
                Game->playerb4->setPos(Game->playerb4->pos().x()-(4)/2,Game->playerb4->pos().y()-(4)/2-1);

            }
        }
    }
    else if(Num==5){
        if(Game->ball->pos().x()>=Game->playerb5->pos().x()){
            if(Game->ball->pos().y()>Game->playerb5->pos().y()){
                Game->playerb5->setPos(Game->playerb5->pos().x()+(4)/2,Game->playerb5->pos().y()+(4)/2+1);

            }
            else{
                Game->playerb5->setPos(Game->playerb5->pos().x()+(4)/2,Game->playerb5->pos().y()-(4)/2-1);

            }
        }
        else if(Game->ball->pos().x()<Game->playerb5->pos().x()){
            if(Game->ball->pos().y()>=Game->playerb5->pos().y()){
                Game->playerb5->setPos(Game->playerb5->pos().x()-(4)/2,Game->playerb5->pos().y()+(4)/2+1);

            }
            else{
                Game->playerb5->setPos(Game->playerb5->pos().x()-(4)/2,Game->playerb5->pos().y()-(4)/2-1);

            }
        }
    }
    else if(Num==6){
        if(Game->ball->pos().x()>=Game->playerb6->pos().x()){
            if(Game->ball->pos().y()>Game->playerb6->pos().y()){
                Game->playerb6->setPos(Game->playerb6->pos().x()+(4)/2,Game->playerb6->pos().y()+(4)/2+1);

            }
            else{
                Game->playerb6->setPos(Game->playerb6->pos().x()+(4)/2,Game->playerb6->pos().y()-(4)/2-1);

            }
        }
        else if(Game->ball->pos().x()<Game->playerb6->pos().x()){
            if(Game->ball->pos().y()>=Game->playerb6->pos().y()){
                Game->playerb6->setPos(Game->playerb6->pos().x()-(4)/2,Game->playerb6->pos().y()+(4)/2+1);

            }
            else{
                Game->playerb6->setPos(Game->playerb6->pos().x()-(4)/2,Game->playerb6->pos().y()-(4)/2-1);

            }
        }
    }
    else if(Num==7){
        if(Game->ball->pos().x()>=Game->playerb7->pos().x()){
            if(Game->ball->pos().y()>Game->playerb7->pos().y()){
                Game->playerb7->setPos(Game->playerb7->pos().x()+(4)/2,Game->playerb7->pos().y()+(4)/2+1);

            }
            else{
                Game->playerb7->setPos(Game->playerb7->pos().x()+(4)/2,Game->playerb7->pos().y()-(4)/2-1);

            }
        }
        else if(Game->ball->pos().x()<Game->playerb7->pos().x()){
            if(Game->ball->pos().y()>=Game->playerb7->pos().y()){
                Game->playerb7->setPos(Game->playerb7->pos().x()-(4)/2,Game->playerb7->pos().y()+(4)/2+1);

            }
            else{
                Game->playerb7->setPos(Game->playerb7->pos().x()-(4)/2,Game->playerb7->pos().y()-(4)/2-1);

            }
        }
    }
    else if(Num==8){
        if(Game->ball->pos().x()>=Game->playerb8->pos().x()){
            if(Game->ball->pos().y()>Game->playerb8->pos().y()){
                Game->playerb8->setPos(Game->playerb8->pos().x()+(4)/2,Game->playerb8->pos().y()+(4)/2+1);

            }
            else{
                Game->playerb8->setPos(Game->playerb8->pos().x()+(4)/2,Game->playerb8->pos().y()-(4)/2-1);

            }
        }
        else if(Game->ball->pos().x()<Game->playerb8->pos().x()){
            if(Game->ball->pos().y()>=Game->playerb8->pos().y()){
                Game->playerb8->setPos(Game->playerb8->pos().x()-(4)/2,Game->playerb8->pos().y()+(4)/2+1);

            }
            else{
                Game->playerb8->setPos(Game->playerb8->pos().x()-(4)/2,Game->playerb8->pos().y()-(4)/2-1);

            }
        }
    }
    else if(Num==9){
        if(Game->ball->pos().x()>=Game->playerb9->pos().x()){
            if(Game->ball->pos().y()>Game->playerb9->pos().y()){
                Game->playerb9->setPos(Game->playerb9->pos().x()+(4)/2,Game->playerb9->pos().y()+(4)/2+1);

            }
            else{
                Game->playerb9->setPos(Game->playerb9->pos().x()+(4)/2,Game->playerb9->pos().y()-(4)/2-1);

            }
        }
        else if(Game->ball->pos().x()<Game->playerb9->pos().x()){
            if(Game->ball->pos().y()>=Game->playerb9->pos().y()){
                Game->playerb9->setPos(Game->playerb9->pos().x()-(4)/2,Game->playerb9->pos().y()+(4)/2+1);

            }
            else{
                Game->playerb9->setPos(Game->playerb9->pos().x()-(4)/2,Game->playerb9->pos().y()-(4)/2-1);

            }
        }
    }
    else if(Num==10){
        if(Game->ball->pos().x()>=Game->playerb10->pos().x()){
            if(Game->ball->pos().y()>Game->playerb10->pos().y()){
                Game->playerb10->setPos(Game->playerb10->pos().x()+(4)/2,Game->playerb10->pos().y()+(4)/2+1);

            }
            else{
                Game->playerb10->setPos(Game->playerb10->pos().x()+(4)/2,Game->playerb10->pos().y()-(4)/2-1);

            }
        }
        else if(Game->ball->pos().x()<Game->playerb10->pos().x()){
            if(Game->ball->pos().y()>=Game->playerb10->pos().y()){
                Game->playerb10->setPos(Game->playerb10->pos().x()-(4)/2,Game->playerb10->pos().y()+(4)/2+1);

            }
            else{
                Game->playerb10->setPos(Game->playerb10->pos().x()-(4)/2,Game->playerb10->pos().y()-(4)/2-1);

            }
        }
    }
    else if(Num==11){
        if(Game->ball->pos().x()>=Game->playerb11->pos().x()){
            if(Game->ball->pos().y()>Game->playerb11->pos().y()){
                Game->playerb11->setPos(Game->playerb11->pos().x()+(4)/2,Game->playerb11->pos().y()+(4)/2+1);

            }
            else{
                Game->playerb11->setPos(Game->playerb11->pos().x()+(4)/2,Game->playerb11->pos().y()-(4)/2-1);

            }
        }
        else if(Game->ball->pos().x()<Game->playerb11->pos().x()){
            if(Game->ball->pos().y()>=Game->playerb11->pos().y()){
                Game->playerb11->setPos(Game->playerb11->pos().x()-(4)/2,Game->playerb11->pos().y()+(4)/2+1);

            }
            else{
                Game->playerb11->setPos(Game->playerb11->pos().x()-(4)/2,Game->playerb11->pos().y()-(4)/2-1);

            }
        }
    }

}


       Game->ContVar->StopB=0;
}
