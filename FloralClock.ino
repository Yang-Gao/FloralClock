/* Sweep
  by BARRAGAN <http://barraganstudio.com>
  This example code is in the public domain.

  modified 8 Nov 2013
  by Scott Fitzgerald
  http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

// create servo object to control a servo
// twelve servo objects can be created on most boards
Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;
Servo myservo5;
Servo myservo6;

int pos = 30;    // variable to store the servo position

void setup() {
  // attaches the servo on pin 9 to the servo object
  myservo1.attach(8);
  myservo2.attach(9);
  myservo3.attach(10);
  myservo4.attach(11);
  myservo5.attach(12);
  myservo6.attach(13);
}

void loop() {
  for (pos = 30; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    // tell servo to go to position in variable 'pos'
    myservo1.write(pos);
    myservo2.write(pos);
    myservo3.write(pos);
    myservo4.write(pos);
    myservo5.write(pos);
    myservo6.write(pos);
    delay(100);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 180; pos >= 30; pos -= 1) { // goes from 180 degrees to 0 degrees
    // tell servo to go to position in variable 'pos'
    myservo1.write(pos);
    myservo2.write(pos);
    myservo3.write(pos);
    myservo4.write(pos);
    myservo5.write(pos);
    myservo6.write(pos);
    delay(100);                       // waits 15ms for the servo to reach the position
  }
}
