#include <Servo.h>
Servo myservo;
Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;



void setup() {
  Serial.begin(9600);  // Begin serial communication
  myservo.attach(9);
  myservo1.attach(2);
  myservo2.attach(13);
  myservo3.attach(6);
  myservo4.attach(8);
}
void loop() {
  int reading1 = analogRead(0);
  int reading2 = analogRead(1);
  int reading3 = analogRead(2);
  int reading4 = analogRead(3);
  int reading5 = analogRead(4);
  // Serial.print("Reading 1: ");
  // Serial.println(reading1);

  // Serial.print("Reading 2: ");
  // Serial.println(reading2);

  // Serial.print("Reading 3: ");
  // Serial.println(reading3);

  Serial.print("Reading 4: ");
  Serial.println(reading4);
  // myservo3.write(180);

  // // // Write the value
  // Serial.print("Reading 5: ");
  // Serial.println(reading5);
  // Write the value

  // myservo2.write(180);

  if (reading1 < 200) {
    myservo.write(0);
  }
  if (reading1 > 200) {
    myservo.write(180);
  }
  if (reading2 < 200) {
    myservo1.write(0);
  }
  if (reading2 > 200) {
    myservo1.write(180);
  }

  if (reading3 < 200) {
    myservo2.write(0);
  }
  if (reading3 > 200) {
    myservo2.write(180);
  }
  if (reading4 < 200) {
    myservo3.write(0);
  }
  if (reading4 > 300) {
    myservo3.write(180);
  }
  if (reading5 < 300) {
    myservo4.write(0);
  }
  if (reading5 > 200) {
    myservo4.write(180);
  }
}