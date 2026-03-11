#include "project.h"

int main(void)
{
    CyGlobalIntEnable;

    for(;;)
    {
        LED_R_Write(0);   // red on
        LED_G_Write(1);
        LED_B_Write(1);

        CyDelay(1000);

        LED_R_Write(1);
        LED_G_Write(0);   // green on
        LED_B_Write(1);

        CyDelay(1000);

        LED_R_Write(1);
        LED_G_Write(1);
        LED_B_Write(0);   // blue on

        CyDelay(1000);
    }
}
