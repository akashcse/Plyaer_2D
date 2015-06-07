#include"check_collition.h"
#include"game_control.h"
#include"all_star_a1.h"
#include"all_star_a2.h"
#include"all_star_a3.h"
#include"all_star_a4.h"
#include"all_star_a5.h"
#include"all_star_a6.h"
#include"all_star_a7.h"
#include"all_star_a8.h"
#include"all_star_a9.h"
#include"all_star_a10.h"
#include"all_star_a11.h"
#include"all_star_b1.h"
#include"all_star_b2.h"
#include"all_star_b3.h"
#include"all_star_b4.h"
#include"all_star_b5.h"
#include"all_star_b6.h"
#include"all_star_b7.h"
#include"all_star_b8.h"
#include"all_star_b9.h"
#include"all_star_b10.h"
#include"all_star_b11.h"

extern game_control *Game;
check_collition::check_collition(QGraphicsItem *parent)
{

}

bool check_collition::Check_For_A(QGraphicsItem *A)
{
    if(typeid(*(A))==typeid(all_star_b1)){
        return true;
    }
    else if(typeid(*(A))==typeid(all_star_b2)){
        return true;
    }
    else if(typeid(*(A))==typeid(all_star_b3)){
        return true;
    }
    else if(typeid(*(A))==typeid(all_star_b4)){
        return true;
    }
    else if(typeid(*(A))==typeid(all_star_b5)){
        return true;
    }
    else if(typeid(*(A))==typeid(all_star_b6)){
        return true;
    }
    else if(typeid(*(A))==typeid(all_star_b7)){
        return true;
    }
    else if(typeid(*(A))==typeid(all_star_b8)){
        return true;
    }
    else if(typeid(*(A))==typeid(all_star_b9)){
        return true;
    }
    else if(typeid(*(A))==typeid(all_star_b10)){
        return true;
    }
    else if(typeid(*(A))==typeid(all_star_b11)){
        return true;
    }
    else return false;


}

bool check_collition::Check_For_B(QGraphicsItem *A)
{
    if(typeid(*(A))==typeid(all_star_a1)){
        return true;
    }
    else if(typeid(*(A))==typeid(all_star_a2)){
        return true;
    }
    else if(typeid(*(A))==typeid(all_star_a3)){
        return true;
    }
    else if(typeid(*(A))==typeid(all_star_a4)){
        return true;
    }
    else if(typeid(*(A))==typeid(all_star_a5)){
        return true;
    }
    else if(typeid(*(A))==typeid(all_star_a6)){
        return true;
    }
    else if(typeid(*(A))==typeid(all_star_a7)){
        return true;
    }
    else if(typeid(*(A))==typeid(all_star_a8)){
        return true;
    }
    else if(typeid(*(A))==typeid(all_star_a9)){
        return true;
    }
    else if(typeid(*(A))==typeid(all_star_a10)){
        return true;
    }
    else if(typeid(*(A))==typeid(all_star_a11)){
        return true;
    }
    else return false;

}
