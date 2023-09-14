#include"REGX52.H"
#include"LCD1602.h"
void main(){
    LCD_Init();
    LCD_ShowString(1,1,"Password:");
    LCD_ShowBinNum(2,1,0x0,4);
    unsigned int i=4;
    while (1)
    {
        if (i==7)
        {
            i=4;
        }
        
    }
    
    
}