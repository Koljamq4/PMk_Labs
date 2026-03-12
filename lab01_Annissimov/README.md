# Microcontroller Programming
## Laboratory Work №1

* **Student:** Nikolai Anissimov 
* **Topic:** Installing tools and creating, debugging, and running projects in the integrated PSoC® CreatorTM environment.
Using UART to output information
* **Date:** March 2026
  
## 1. Purpose
To familiarize yourself with the functional capabilities of the PSoC® CreatorTM 4.4
integrated environment, the PuTTY or TeraTerm terminal program, and the logic
analyzer and its Logic software interface; to learn how to create, debug, and execute
projects using the PSoC® CreatorTM integrated environment tools; to familiarize
yourself with the principles of the UART interface, learn how to configure it using
the PSoC system-on-chip for outputting information, and verify data transfer
between PSoC and a computer.

## 2. Results of the Tasks
## 2.1 Task 1
Install Software: PSoC Creator IDE, Terminal Program PuTTY and Saleae Logic Software.

### Implementation
Using instructions for software installation provided in the task document Laboratory Work №1.

### Demonstration
Desktop screenshot with installed software.

### Screenshots
### All three programs installed.
![Project Screenshot](images/Screenshot%201.jpg)

## 2.2 Task 2
Creating the first project with microchip CY8C4245AXI-483.

### Implementation
The project was successfully compiled in the PSoC Creator environment.

The firmware reads the state of the button connected to pin P0[7].
If the button is pressed, the LED connected to pin P1[6] turns on.
If the button is released, the LED turns off.

### Demonstration
Screenshot with configurated pins and screenshot with code written in the file main.c

### Screenshots
### Pin Configuration
![Pin Configuration](images/Screenshot%202.jpg)

### Program Code
![Program Code](images/Screenshot%203.jpg)

## 2.3 Task 3
Project modification.

### Implementation
I modified project adding LED_R and LED_G also renamed LED to LED_B. Than I changed code in main.c because now I had 3 leds. After that I copied project and remamed it. In new project I added software transmit UART, configurated pins, written new code to file main.c and compiled program. 

PuTTY terminal software was configured to receive UART data from the PSoC microcontroller.

### Demonstration
Screenshot with configurated pins, screenshot with code writen in the file main.c and screenshot from PuTTY terminal.

### Screenshots
### Pin Configuration
![Pin Configuration](images/Screenshot%204.jpg)

### Program Code
![Program Code](images/Screenshot%205.jpg)

### PuTTY terminal
![PuTTY terminal](images/Screenshot%206.jpg)

## 2.4 Task 4
Working with code examples.

### Implementation
The example project was successfully opened and compiled in PSoC Creator.

### Demonstration
Screenshot with opened and successfully builded project from PSoC Creator.

### Screenshots
![PSoC Creator](images/Screenshot%207.jpg)

## 2.5 Task 5
Independent tasks.
## 2.5.1 
Unify console output by adding First Name and Last Name to the code.

### Implementation
Adding first and last name to the code.

### Demonstration
Screenshot with opened and successfully builded code from PSoC Creator.

### Screenshots
![PSoC Creator](images/Screenshot%208.jpg)

## 2.5.2
Fill in the table taking into account the features of the PSoC® 4 Pioneer Kit. 

### Implementation
Filling table with rule: 0= LED On, 1= LED Off.

### Demonstration
Filled table:

| Color | R | G | B |
|------|---|---|---|
| White | 0 | 0 | 0 |
| Yellow | 0 | 0 | 1 |
| Purple | 0 | 1 | 0 |
| Red | 0 | 1 | 1 |
| Cyan | 1 | 0 | 0 |
| Green | 1 | 0 | 1 |
| Blue | 1 | 1 | 0 |
| Black | 1 | 1 | 1 |

## 2.5.3
Modify code. 

### Implementation
Modifying code that the LED flashes differently depending on which button is 
pressed). For variant 1 color white and yellow.

### Demonstration
Screenshot with opened and successfully builded code from PSoC Creator.

### Screenshots
![PSoC Creator](images/Screenshot%208.jpg)

## 3. Appendices (Code Listing)
Code from taks 5 part 3 (modified code that the LED flashes differently depending on which button is 
pressed). For variant 1 color white and yellow.

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

