/*
  Blink
 Turns on an LED on for one second, then off for one second, repeatedly.
 
 This example code is in the public domain.
 */

// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 13;
int led2 = 12;

int controls[] = {
  led, led2};
int objs = sizeof(controls) / sizeof(int);

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  for (int x = 0; x < objs; x++){
    pinMode(controls[x], OUTPUT);
  }
}

// the loop routine runs over and over again forever:
void loop() {
  for (int x =0; x< objs;x++){
    digitalWrite(controls[x], HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(500);               // wait for a second
    digitalWrite(controls[x], LOW);    // turn the LED off by making the voltage LOW
    delay(500);               // wait for a second
  }
}

