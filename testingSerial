String a;
#include <SPI.h>
#include <Controllino.h>
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(115200); // opens serial port, sets data rate to 9600 bps
  pinMode(CONTROLLINO_D20, OUTPUT);    // move up
  pinMode(CONTROLLINO_D19, OUTPUT);    // move down
  pinMode(CONTROLLINO_D16, OUTPUT);    // move down
  pinMode(CONTROLLINO_D15, OUTPUT);    // move down

}

void loop() {

  while (Serial.available()) {

    a = Serial.readString();// read the incoming data as string
  }
  if (a == "hello\r\n") {
    moveMotor();
    a = "";
  }
  if (a == "trout\r\n") {
    moveMotorDown();
    a = "";
  }
  if (a == "hold\r\n") {
    holdMotorDown();
    a = "";
  }


}
void moveMotor() {
  Serial.println("GOES UP");
  digitalWrite(CONTROLLINO_D20, HIGH);
}

void moveMotorDown() {
  Serial.println("GOES DOWN");
  digitalWrite(CONTROLLINO_D19, HIGH);
}

void holdMotorDown() {
  Serial.println("HOLDED");
  digitalWrite(CONTROLLINO_D19, LOW);
    digitalWrite(CONTROLLINO_D20, LOW);
}
