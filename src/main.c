#include"REGX52.H"
#include"LCD1602.h"
#include"delay.c"
void main(){
    LCD_Init();
    LCD_ShowString(1,1,"Password:");
    LCD_ShowBinNum(2,1,0x0,4);

    }
    
    
}