#include "project.h"

int main(void)
{
    CyGlobalIntEnable;

    SW_Tx_UART_Start();

    SW_Tx_UART_PutCRLF();
    SW_Tx_UART_PutString("Software Transmit UART");
    SW_Tx_UART_PutCRLF();

    SW_Tx_UART_PutString("Student: Nikolai Anissimov");
    SW_Tx_UART_PutCRLF();

    uint8_t last_state = 0;

    for(;;)
    {
        if(Button_Read() == 1 && last_state == 0)
        {
            last_state = 1;

            SW_Tx_UART_PutString("Button released");
            SW_Tx_UART_PutCRLF();

            LED_R_Write(0);
            LED_G_Write(0);
            LED_B_Write(0);
        }
        else if(Button_Read() == 0 && last_state == 1)
        {
            last_state = 0;

            SW_Tx_UART_PutString("Button pressed");
            SW_Tx_UART_PutCRLF();

            LED_R_Write(1);
            LED_G_Write(1);
            LED_B_Write(1);
        }
    }
}
