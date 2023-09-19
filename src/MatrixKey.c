#include "REGX52.H"
#include"Delay.h"
unsigned char MatrixKey(){
    unsigned char KeyNumber = 0;
    //scan 1st line
    P1 = 0xff;
    P1_3 = 0;
    if(P1_7 == 0){
        Delay(3);
        while (P1_7==0);
        Delay(3);
        KeyNumber = 1;
    }
    if(P1_6 == 0){
        Delay(3);
        while (P1_6==0);
        Delay(3);
        KeyNumber = 5;
    }
    if(P1_5 == 0){
        Delay(3);
        while (P1_5==0);
        Delay(3);
        KeyNumber = 9;
    }
    if(P1_4 == 0){
        Delay(3);
        while (P1_4==0);
        Delay(3);
        KeyNumber = 13;
    }

    //2nd
    P1 = 0xff;
    P1_2 = 0;
    if(P1_7 == 0){
        Delay(3);
        while (P1_7==0);
        Delay(3);
        KeyNumber = 2;
    }
    if(P1_6 == 0){
        Delay(3);
        while (P1_6==0);
        Delay(3);
        KeyNumber = 6;
    }
    if(P1_5 == 0){
        Delay(3);
        while (P1_5==0);
        Delay(3);
        KeyNumber = 10;
    }
    if(P1_4 == 0){
        Delay(3);
        while (P1_4==0);
        Delay(3);
        KeyNumber = 14;
    }    

    //3
    P1 = 0xff;
    P1_1 = 0;
    if(P1_7 == 0){
        Delay(3);
        while (P1_7==0);
        Delay(3);
        KeyNumber = 3;
    }
    if(P1_6 == 0){
        Delay(3);
        while (P1_6==0);
        Delay(3);
        KeyNumber = 7;
    }
    if(P1_5 == 0){
        Delay(3);
        while (P1_5==0);
        Delay(3);
        KeyNumber = 11;
    }
    if(P1_4 == 0){
        Delay(3);
        while (P1_4==0);
        Delay(3);
        KeyNumber = 15;
    }
    //4
P1 = 0xff;
    P1_0 = 0;
    if(P1_7 == 0){
        Delay(3);
        while (P1_7==0);
        Delay(3);
        KeyNumber = 4;
    }
    if(P1_6 == 0){
        Delay(3);
        while (P1_6==0);
        Delay(3);
        KeyNumber = 8;
    }
    if(P1_5 == 0){
        Delay(3);
        while (P1_5==0);
        Delay(3);
        KeyNumber = 12;
    }
    if(P1_4 == 0){
        Delay(3);
        while (P1_4==0);
        Delay(3);
        KeyNumber = 16;
    }


    return KeyNumber;
}