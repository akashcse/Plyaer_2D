#ifndef GAME_CONTROL
#define GAME_CONTROL

#include <QApplication>
#include<QGraphicsScene>
#include<QGraphicsView>
#include<QWidget>
#include"football.h"
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
#include"control_variables.h"
#include"nearest_a.h"
#include"nearest_b.h"
#include"corner.h"
#include"start.h"
#include"score.h"
#include"details.h"
#include"check_collition.h"


class game_control:public QGraphicsView{
public:
    game_control(QWidget * parent=0);
    QGraphicsScene * scene;
    football * ball;
    all_star_a1 * playera1;
    all_star_a2 * playera2;
    all_star_a3 * playera3;
    all_star_a4 * playera4;
    all_star_a5 * playera5;
    all_star_a6 * playera6;
    all_star_a7 * playera7;
    all_star_a8 * playera8;
    all_star_a9 * playera9;
    all_star_a10 * playera10;
    all_star_a11 * playera11;

    all_star_b1 * playerb1;
    all_star_b2 * playerb2;
    all_star_b3 * playerb3;
    all_star_b4 * playerb4;
    all_star_b5 * playerb5;
    all_star_b6 * playerb6;
    all_star_b7 * playerb7;
    all_star_b8 * playerb8;
    all_star_b9 * playerb9;
    all_star_b10 * playerb10;
    all_star_b11 * playerb11;

    control_variables * ContVar;
    nearest_a * NearA;
    nearest_b * NearB;
    corner * Cr;
    start *Strt;

    score * Scr;
    details * Dtl;

    check_collition * CC;

};


#endif // GAME_CONTROL

