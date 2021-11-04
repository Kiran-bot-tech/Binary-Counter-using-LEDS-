# Binary-Counter-using-LEDS-
In this project we use an Arduino UNO to build a 4 bit Binary counter. This project as the name suggests is a counter which merely counts from zero to fifteen while representing them in 8-4-2-1 code or BINARY code. Each LED Glows up to show the place value &amp; by adding all the individual digits of the glowing LEDS one can find out the equivalent number in decimal. 
So, the leftmost LED (green) is the one which represents the number 1, the RED LED represents the number 2, Yellow represents 4 & BLUE represents 8. Hence, for representing a number 5 we must switch on the Green & Yellow LED( 1 + 4 = 5 ).
HARDWARE:
Firstly we need to set the four LEDs on the breadboard (Green, Red, Yellow, Blue) with their respective current limiting resistors on the breadboard. 
Now we need to connect the Arduino to power the board & control the LEDs. We will use the pins 11, 10, 9 & 8 as the output pins as described in the source code. Pin 11 is connected to the Green LED, Pin 10 to Red LED and so on. Here the 8-4-2-1 code will stand as follows,

Value 1 - Green LED

Value 2 - Red LED

Value 4 - Yellow LED

Value 8 - Blue LED

The GND pin of the Arduino is connected to the Breadboard to create a common ground which can be used to complete the circuit using small jumper wires.
