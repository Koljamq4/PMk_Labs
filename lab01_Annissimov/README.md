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
Screenshot with configurated pins and screenshot with code writen in the file main.c

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
![Lab Execution](path/to/your/screenshot.png)
*(Note: Upload your screenshots to the same folder and link them here cite: Source 111.JPG)*

## 2.4 Task 4
Working with code examples

### Implementation
- **Schematic:** Using instructions to work with code examples provided in the task document Laboratory Work №1.

### Demonstration
XXXXX

### Screenshots
![Lab Execution](path/to/your/screenshot.png)
*(Note: Upload your screenshots to the same folder and link them here cite: Source 111.JPG)*

## 2.5 Task 5
Independend tasks.

### Implementation
- **Schematic:** 

### Demonstration


### Screenshots
![Lab Execution](path/to/your/screenshot.png)
*(Note: Upload your screenshots to the same folder and link them here cite: Source 111.JPG)*

## 3. Appendices (Code Listing)
Only the code written by the student:

```c
// Paste your C code here
