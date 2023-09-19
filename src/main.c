#include"REGX52.H"
#include"LCD1602.h"
#include"Delay.h"
#include"MatrixKey.h"
void main(){


    LCD_Init();
    LCD_ShowString(1,1,"Password:");
    LCD_ShowBinNum(2,1,0x0,4);

    while (1)
    {  unsigned char KeyNum = MatrixKey();

        if(KeyNum)
            {
                LCD_ShowNum(2,1,KeyNum,2);
                Delay(2);
            }
        
    }
    
}