#include <SPI.h>
#include <Controllino.h>
const int buttonPin = CONTROLLINO_A7;     // the number of the pushbutton pin
int buttonState = 0;         // variable for reading the pushbutton status
bool buttonState2 = false;
void setup() {
  pinMode(CONTROLLINO_D19, OUTPUT);    // Set the pin CONTROLLINO_R0 as output.
  pinMode(CONTROLLINO_D20, OUTPUT);    // Set the pin CONTROLLINO_R0 as output.
  pinMode(CONTROLLINO_D21, OUTPUT);    // Set the pin CONTROLLINO_R0 as output.
  pinMode(CONTROLLINO_D22, OUTPUT);    // Set the pin CONTROLLINO_R0 as output.
  pinMode(CONTROLLINO_D15, OUTPUT);    // Set the pin CONTROLLINO_R0 as output.
  pinMode(CONTROLLINO_D16, OUTPUT);    // Set the pin CONTROLLINO_R0 as output.
  pinMode(CONTROLLINO_A7, INPUT);    // Set the pin CONTROLLINO_R0 as output.
  pinMode(CONTROLLINO_D17, OUTPUT);    // Set the pin CONTROLLINO_R0 as output.
  pinMode(CONTROLLINO_D18, OUTPUT);    // Set the pin CONTROLLINO_R0 as output.
  pinMode(CONTROLLINO_D10, OUTPUT);    // Set the pin CONTROLLINO_R0 as output.
}

void loop() {
  /* buttonState == digitalRead(buttonPin);

  if (buttonState == HIGH) {
      digitalWrite(CONTROLLINO_D18, LOW);

    buttonState2 == true;
  }
  
  if (buttonState2 == false) {
     digitalWrite(CONTROLLINO_D17, LOW);
    digitalWrite(CONTROLLINO_D18, HIGH);
  }
  
  else if (buttonState2 == true) {
  digitalWrite(CONTROLLINO_D17, HIGH);
    delay(1000);
    buttonState2 == false;
} /*

*/ digitalWrite(CONTROLLINO_D22, HIGH);
buttonState == digitalRead(buttonPin);
/*
 if (buttonState == HIGH) {
  // turn LED on:
  digitalWrite(CONTROLLINO_D17, LOW);
  }
  /*
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) {
  // turn LED on:
  digitalWrite(CONTROLLINO_D17, HIGH);
  } else {
  // turn LED off:
  digitalWrite(CONTROLLINO_D17, LOW);
  }
*/
}
