#include"nearest_b.h"
#include"game_control.h"
#include<math.h>

extern game_control *Game;

nearest_b::nearest_b()
{
    Nearest_X=0,Nearest_Y=0;

}

void nearest_b::Search_Nearest(int X, int Y)
{
    int D, Dist=(1<<31)-1,Fh=0;

    D=sqrt(((Game->playerb1->pos().x()-X)*(Game->playerb1->pos().x()-X))+((Game->playerb1->pos().y()-Y)*(Game->playerb1->pos().y()-Y)));
    if(D>0&&Dist>D){
       Dist=D;
       Nearest_X=Game->playerb1->pos().x(),Nearest_Y=Game->playerb1->pos().y();
       Nearest_player=1;
    }

    D=sqrt(((Game->playerb2->pos().x()-X)*(Game->playerb2->pos().x()-X))+((Game->playerb2->pos().y()-Y)*(Game->playerb2->pos().y()-Y)));
    if(D>0&&Dist>D){
       Dist=D;
       Nearest_X=Game->playerb2->pos().x(),Nearest_Y=Game->playerb2->pos().y();
       Nearest_player=2;
    }
    if(Fh<D){
        Fh=D;
        Farest_X=Game->playerb2->pos().x(),Farest_Y=Game->playerb2->pos().y();
    }

    D=sqrt(((Game->playerb3->pos().x()-X)*(Game->playerb3->pos().x()-X))+((Game->playerb3->pos().y()-Y)*(Game->playerb3->pos().y()-Y)));
    if(D>0&&Dist>D){
       Dist=D;
       Nearest_X=Game->playerb3->pos().x(),Nearest_Y=Game->playerb3->pos().y();
       Nearest_player=3;
    }
    if(Fh<D){
        Fh=D;
        Farest_X=Game->playerb2->pos().x(),Farest_Y=Game->playerb2->pos().y();
    }

    D=sqrt(((Game->playerb4->pos().x()-X)*(Game->playerb4->pos().x()-X))+((Game->playerb4->pos().y()-Y)*(Game->playerb4->pos().y()-Y)));
    if(D>0&&Dist>D){
       Dist=D;
       Nearest_X=Game->playerb4->pos().x(),Nearest_Y=Game->playerb4->pos().y();
       Nearest_player=4;
    }
    if(Fh<D){
        Fh=D;
        Farest_X=Game->playerb2->pos().x(),Farest_Y=Game->playerb2->pos().y();
    }

    D=sqrt(((Game->playerb5->pos().x()-X)*(Game->playerb5->pos().x()-X))+((Game->playerb5->pos().y()-Y)*(Game->playerb5->pos().y()-Y)));
    if(D>0&&Dist>D){
       Dist=D;
       Nearest_X=Game->playerb5->pos().x(),Nearest_Y=Game->playerb5->pos().y();
       Nearest_player=5;
    }
    if(Fh<D){
        Fh=D;
        Farest_X=Game->playerb2->pos().x(),Farest_Y=Game->playerb2->pos().y();
    }
    D=sqrt(((Game->playerb6->pos().x()-X)*(Game->playerb6->pos().x()-X))+((Game->playerb6->pos().y()-Y)*(Game->playerb6->pos().y()-Y)));
    if(D>0&&Dist>D){
       Dist=D;
       Nearest_X=Game->playerb6->pos().x(),Nearest_Y=Game->playerb6->pos().y();
       Nearest_player=6;
    }
    if(Fh<D){
        Fh=D;
        Farest_X=Game->playerb2->pos().x(),Farest_Y=Game->playerb2->pos().y();
    }
    D=sqrt(((Game->playerb7->pos().x()-X)*(Game->playerb7->pos().x()-X))+((Game->playerb7->pos().y()-Y)*(Game->playerb7->pos().y()-Y)));
    if(D>0&&Dist>D){
       Dist=D;
       Nearest_X=Game->playerb7->pos().x(),Nearest_Y=Game->playerb7->pos().y();
       Nearest_player=7;
    }
    if(Fh<D){
        Fh=D;
        Farest_X=Game->playerb2->pos().x(),Farest_Y=Game->playerb2->pos().y();
    }
    D=sqrt(((Game->playerb8->pos().x()-X)*(Game->playerb8->pos().x()-X))+((Game->playerb8->pos().y()-Y)*(Game->playerb8->pos().y()-Y)));
    if(D>0&&Dist>D){
       Dist=D;
       Nearest_X=Game->playerb8->pos().x(),Nearest_Y=Game->playerb8->pos().y();
       Nearest_player=8;
    }
    if(Fh<D){
        Fh=D;
        Farest_X=Game->playerb2->pos().x(),Farest_Y=Game->playerb2->pos().y();
    }
    D=sqrt(((Game->playerb9->pos().x()-X)*(Game->playerb9->pos().x()-X))+((Game->playerb9->pos().y()-Y)*(Game->playerb9->pos().y()-Y)));
    if(D>0&&Dist>D){
       Dist=D;
       Nearest_X=Game->playerb9->pos().x(),Nearest_Y=Game->playerb9->pos().y();
       Nearest_player=9;
    }
    if(Fh<D){
        Fh=D;
        Farest_X=Game->playerb2->pos().x(),Farest_Y=Game->playerb2->pos().y();
    }
    D=sqrt(((Game->playerb10->pos().x()-X)*(Game->playerb10->pos().x()-X))+((Game->playerb10->pos().y()-Y)*(Game->playerb10->pos().y()-Y)));
    if(D>0&&Dist>D){
       Dist=D;
       Nearest_X=Game->playerb10->pos().x(),Nearest_Y=Game->playerb10->pos().y();
       Nearest_player=10;
    }
    if(Fh<D){
        Fh=D;
        Farest_X=Game->playerb2->pos().x(),Farest_Y=Game->playerb2->pos().y();
    }
    D=sqrt(((Game->playerb11->pos().x()-X)*(Game->playerb11->pos().x()-X))+((Game->playerb11->pos().y()-Y)*(Game->playerb11->pos().y()-Y)));
    if(D>0&&Dist>D){
       Dist=D;
       Nearest_X=Game->playerb11->pos().x(),Nearest_Y=Game->playerb11->pos().y();
       Nearest_player=11;
    }
    if(Fh<D){
        Fh=D;
        Farest_X=Game->playerb2->pos().x(),Farest_Y=Game->playerb2->pos().y();
    }

}

int nearest_b::Get_NearX()
{
    return Nearest_X;

}

int nearest_b::Get_NearY()
{
    return Nearest_Y;

}
int nearest_b::Get_FarX()
{
    int Pl=rand()%11+1;
    if(Pl==1){
        Farest_X=Game->playerb1->pos().x(),Farest_Y=Game->playerb1->pos().y();
    }
    else if(Pl==2){
        Farest_X=Game->playerb2->pos().x(),Farest_Y=Game->playerb2->pos().y();
    }
    else if(Pl==3){
        Farest_X=Game->playerb3->pos().x(),Farest_Y=Game->playerb3->pos().y();
    }
    else if(Pl==4){
        Farest_X=Game->playerb4->pos().x(),Farest_Y=Game->playerb4->pos().y();
    }
    else if(Pl==5){
        Farest_X=Game->playerb5->pos().x(),Farest_Y=Game->playerb5->pos().y();
    }
    else if(Pl==6){
        Farest_X=Game->playerb6->pos().x(),Farest_Y=Game->playerb6->pos().y();
    }
    else if(Pl==7){
        Farest_X=Game->playerb7->pos().x(),Farest_Y=Game->playerb7->pos().y();
    }
    else if(Pl==8){
        Farest_X=Game->playerb8->pos().x(),Farest_Y=Game->playerb8->pos().y();
    }
    else if(Pl==9){
        Farest_X=Game->playerb9->pos().x(),Farest_Y=Game->playerb9->pos().y();
    }
    else if(Pl==10){
        Farest_X=Game->playerb10->pos().x(),Farest_Y=Game->playerb10->pos().y();
    }
    else if(Pl==11){
        Farest_X=Game->playerb11->pos().x(),Farest_Y=Game->playerb11->pos().y();
    }
    return Farest_X;

}

int nearest_b::Get_FarY()
{
    return Farest_Y;

}
