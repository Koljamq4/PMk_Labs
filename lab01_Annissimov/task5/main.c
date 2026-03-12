#include "project.h"

int main(void)
{
    CyGlobalIntEnable;

    for(;;)
    {
        if(Button_Read() == 0)   // button pressed
        {
            // WHITE
            LED_R_Write(0);
            LED_G_Write(0);
            LED_B_Write(0);
            CyDelay(500);

            LED_R_Write(1);
            LED_G_Write(1);
            LED_B_Write(1);
            CyDelay(500);
        }
        else   // button released
        {
            // YELLOW
            LED_R_Write(0);
            LED_G_Write(0);
            LED_B_Write(1);
            CyDelay(500);

            LED_R_Write(1);
            LED_G_Write(1);
            LED_B_Write(1);
            CyDelay(500);
        }
    }
}
