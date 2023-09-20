#include"REGX52.H"
#include"LCD1602.h"
#include"Delay.h"
#include"MatrixKey.h"
void main(){
    unsigned int password;
    LCD_Init();
    LCD_ShowString(1,1,"What'sTheAnswer");
    LCD_ShowBinNum(2,1,0x0,4);

    while (1)
    {  unsigned char KeyNum = MatrixKey();

        if(KeyNum)
            {
            if(KeyNum<11)
                {
                password *= 10;
                password += KeyNum % 10 ; 

                }              
            //clear
            if (KeyNum == 12)               
               {password = 0;
               LCD_ShowString(2,6,"\0\0\0\0\0\0\0\0\0\0\0");}
            //delete
            if (KeyNum == 11)
                password /= 10;
            //submit
            if(KeyNum == 13){
                if(password == 42){
                    LCD_ShowString(2,6,"Correct");
                }
                else
                    LCD_ShowString(2,6,"WRONG");
            }
            }
            
            LCD_ShowNum(2,1,password,4);
            Delay(1);            
    }
    
}