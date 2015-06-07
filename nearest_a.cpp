#include"nearest_a.h"
#include"game_control.h"
#include<math.h>

extern game_control *Game;

nearest_a::nearest_a()
{
    Nearest_X=0,Nearest_Y=0;
    Farest_X=0,Farest_Y=0;
}

void nearest_a::Search_Nearest(int X, int Y)
{
    int D, Dist=(1<<31)-1,Fh=0;

    D=sqrt(((Game->playera1->pos().x()-X)*(Game->playera1->pos().x()-X))+((Game->playera1->pos().y()-Y)*(Game->playera1->pos().y()-Y)));
    if(D>0&&Dist>D){
       Dist=D;
       //Fh=D;
       Nearest_X=Game->playera1->pos().x(),Nearest_Y=Game->playera1->pos().y();
       Nearest_player=1;
    }

    D=sqrt(((Game->playera2->pos().x()-X)*(Game->playera2->pos().x()-X))+((Game->playera2->pos().y()-Y)*(Game->playera2->pos().y()-Y)));
    if(D>0&&Dist>D){
       Dist=D;
       Nearest_player=2;
       Nearest_X=Game->playera2->pos().x(),Nearest_Y=Game->playera2->pos().y();
    }
    if(Fh<D){
        Fh=D;
        Farest_X=Game->playera2->pos().x(),Farest_Y=Game->playera2->pos().y();
    }


    D=sqrt(((Game->playera3->pos().x()-X)*(Game->playera3->pos().x()-X))+((Game->playera3->pos().y()-Y)*(Game->playera3->pos().y()-Y)));
    if(D>0&&Dist>D){
       Dist=D;
       Nearest_player=3;
       Nearest_X=Game->playera3->pos().x(),Nearest_Y=Game->playera3->pos().y();
    }
    if(Fh<D){
        Fh=D;
        Farest_X=Game->playera3->pos().x(),Farest_Y=Game->playera3->pos().y();
    }

    D=sqrt(((Game->playera4->pos().x()-X)*(Game->playera4->pos().x()-X))+((Game->playera4->pos().y()-Y)*(Game->playera4->pos().y()-Y)));
    if(D>0&&Dist>D){
       Dist=D;
       Nearest_player=4;
       Nearest_X=Game->playera4->pos().x(),Nearest_Y=Game->playera4->pos().y();
    }
    if(Fh<D){
        Fh=D;
        Farest_X=Game->playera4->pos().x(),Farest_Y=Game->playera4->pos().y();
    }

    D=sqrt(((Game->playera5->pos().x()-X)*(Game->playera5->pos().x()-X))+((Game->playera5->pos().y()-Y)*(Game->playera5->pos().y()-Y)));
    if(D>0&&Dist>D){
       Dist=D;
       Nearest_X=Game->playera5->pos().x(),Nearest_Y=Game->playera5->pos().y();
       Nearest_player=5;
    }
    if(Fh<D){
        Fh=D;
        Farest_X=Game->playera5->pos().x(),Farest_Y=Game->playera5->pos().y();
    }

    D=sqrt(((Game->playera6->pos().x()-X)*(Game->playera6->pos().x()-X))+((Game->playera6->pos().y()-Y)*(Game->playera6->pos().y()-Y)));
    if(D>0&&Dist>D){
       Dist=D;
       Nearest_X=Game->playera6->pos().x(),Nearest_Y=Game->playera6->pos().y();
       Nearest_player=6;
    }
    if(Fh<D){
        Fh=D;
        Farest_X=Game->playera6->pos().x(),Farest_Y=Game->playera6->pos().y();
    }

    D=sqrt(((Game->playera7->pos().x()-X)*(Game->playera7->pos().x()-X))+((Game->playera7->pos().y()-Y)*(Game->playera7->pos().y()-Y)));
    if(D>0&&Dist>D){
       Dist=D;
       Nearest_X=Game->playera7->pos().x(),Nearest_Y=Game->playera7->pos().y();
       Nearest_player=7;
    }
    if(Fh<D){
        Fh=D;
        Farest_X=Game->playera7->pos().x(),Farest_Y=Game->playera7->pos().y();
    }

    D=sqrt(((Game->playera8->pos().x()-X)*(Game->playera8->pos().x()-X))+((Game->playera8->pos().y()-Y)*(Game->playera8->pos().y()-Y)));
    if(D>0&&Dist>D){
       Dist=D;
       Nearest_X=Game->playera8->pos().x(),Nearest_Y=Game->playera8->pos().y();
       Nearest_player=8;
    }
    if(Fh<D){
        Fh=D;
        Farest_X=Game->playera8->pos().x(),Farest_Y=Game->playera8->pos().y();
    }

    D=sqrt(((Game->playera9->pos().x()-X)*(Game->playera9->pos().x()-X))+((Game->playera9->pos().y()-Y)*(Game->playera9->pos().y()-Y)));
    if(D>0&&Dist>D){
       Dist=D;
       Nearest_X=Game->playera9->pos().x(),Nearest_Y=Game->playera9->pos().y();
       Nearest_player=9;
    }
    if(Fh<D){
        Fh=D;
        Farest_X=Game->playera9->pos().x(),Farest_Y=Game->playera9->pos().y();
    }
    D=sqrt(((Game->playera10->pos().x()-X)*(Game->playera10->pos().x()-X))+((Game->playera10->pos().y()-Y)*(Game->playera10->pos().y()-Y)));
    if(D>0&&Dist>D){
       Dist=D;
       Nearest_X=Game->playera10->pos().x(),Nearest_Y=Game->playera10->pos().y();
       Nearest_player=10;
    }
    if(Fh<D){
        Fh=D;
        Farest_X=Game->playera10->pos().x(),Farest_Y=Game->playera10->pos().y();
    }
    D=sqrt(((Game->playera11->pos().x()-X)*(Game->playera11->pos().x()-X))+((Game->playera11->pos().y()-Y)*(Game->playera11->pos().y()-Y)));
    if(D>0&&Dist>D){
       Dist=D;
       Nearest_X=Game->playera11->pos().x(),Nearest_Y=Game->playera11->pos().y();
       Nearest_player=11;
    }
    if(Fh<D){
        Fh=D;
        Farest_X=Game->playera11->pos().x(),Farest_Y=Game->playera11->pos().y();
    }

}

int nearest_a::Get_NearX()
{
    return Nearest_X;

}

int nearest_a::Get_NearY()
{
    return Nearest_Y;

}
int nearest_a::Get_FarX()
{
    int Pl=rand()%11+1;
    if(Pl==1){
        Farest_X=Game->playera1->pos().x(),Farest_Y=Game->playera1->pos().y();
    }
    else if(Pl==2){
        Farest_X=Game->playera2->pos().x(),Farest_Y=Game->playera2->pos().y();
    }
    else if(Pl==3){
        Farest_X=Game->playera3->pos().x(),Farest_Y=Game->playera3->pos().y();
    }
    else if(Pl==4){
        Farest_X=Game->playera4->pos().x(),Farest_Y=Game->playera4->pos().y();
    }
    else if(Pl==5){
        Farest_X=Game->playera5->pos().x(),Farest_Y=Game->playera5->pos().y();
    }
    else if(Pl==6){
        Farest_X=Game->playera6->pos().x(),Farest_Y=Game->playera6->pos().y();
    }
    else if(Pl==7){
        Farest_X=Game->playera7->pos().x(),Farest_Y=Game->playera7->pos().y();
    }
    else if(Pl==8){
        Farest_X=Game->playera8->pos().x(),Farest_Y=Game->playera8->pos().y();
    }
    else if(Pl==9){
        Farest_X=Game->playera9->pos().x(),Farest_Y=Game->playera9->pos().y();
    }
    else if(Pl==10){
        Farest_X=Game->playera10->pos().x(),Farest_Y=Game->playera10->pos().y();
    }
    else if(Pl==11){
        Farest_X=Game->playera11->pos().x(),Farest_Y=Game->playera11->pos().y();
    }
    return Farest_X;

}

int nearest_a::Get_FarY()
{
    return Farest_Y;

}
