#include"REGX52.H"
#include"LCD1602.h"
#include"Delay.c"
#include"MatrixKey.h"
void main(){
    unsigned int i = 0;

    LCD_Init();
    LCD_ShowString(1,1,"Password:");
    LCD_ShowBinNum(2,1,0x0,4);

    while (1)
    {   

        if(MatrixKey()<10)
            LCD_ShowNum(2,i++,MatrixKey(),1);
        if (MatrixKey()>9)
        {
            LCD_ShowChar(2,i++,'e');
        }
        
    }
    
}