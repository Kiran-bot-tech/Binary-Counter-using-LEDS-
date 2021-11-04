/**
 * Binary Counter for Arduino
 
 * Written by Kiran 
 */

// Define our LED pins.
int ledPin[] = {10, 11, 12};

// The number of LEDS configured.
int numLeds = (sizeof(ledPin) / sizeof(int));

// Define our input button pin.
int buttonPin = 9;

// Always start the counter at 0.
byte counter = 0;

// Calculate the maximum value to be displayed.
int maxValue = ((int) pow(2, numLeds));

/**
 * Perform the initial setup of our device.
 */
void setup()
{
  // Tell the arduino to listen for input from the button.
  pinMode(buttonPin, INPUT);

  // Tell the arduino to expect output
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPin[i], OUTPUT);
  }

  // Blink each of the LEDs to confirm the circuit is correct.
  fastBlink();
}

/**
 * What to do continuously until stopped.
 */
void loop()
{
  // Check if our button is being pressed
  if (digitalRead(buttonPin) == HIGH) {
    // Increment the counter.
    counter++;
    // Wait half a second so we don't double count presses.
    delay(1000);
    // Update our display.
    displayBinary(counter);
  }

  // Make sure we don't go past our maximum allowed value.
  if (counter >= maxValue) {
    // Make sure the user sees all the LEDs lit up.
    delay(1000);
    // Clear the LEDs, ready to start again.
    fastBlink();
    // Reset our counter.
    counter = 0;
  }
}


void displayBinary(byte numToShow)
{
  // Check each of the bits in our number.
  for (int i = 0; i < numLeds; i++)
  {
    // Is the bit "on"?
    if (bitRead(numToShow, i) == 1)
    {
      // Turn the LED on.
      digitalWrite(ledPin[i], HIGH);
    }
    else
    {
      // Turn the LED off.
      digitalWrite(ledPin[i], LOW);
    }
  }
}

/**
 * Quickly blink each of the LEDs in order.
 */
void fastBlink() {
  // Loop through our LEDs in reverse order.
  for (int i = (numLeds - 1); i >= 0; i--) {
    // Turn the LED on.
    digitalWrite(ledPin[i], HIGH);
    // Wait 50ms.
    delay(1000);
    // Turn the LED off.
    digitalWrite(ledPin[i], LOW);
  }
}
