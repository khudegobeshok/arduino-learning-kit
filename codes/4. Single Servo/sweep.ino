// Sweep
#include <Servo.h>

Servo myservo; // create servo object to control a servo
int pos = 0;

// variable to store the servo position
void setup()
{
    myservo.attach(9);
}
// attaches the servo on pin 9 to the servo object
void loop()
{
    // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    for (pos = 0; pos < 180; pos += 1)
    {
        // tell servo to go to position in variable 'pos'
        myservo.write(pos);
        // waits 15ms for the servo to reach the position
        delay(15);
    }
    // goes from 180 degrees to 0 degrees
    for (pos = 180; pos >= 1; pos -= 1)
    {
        // tell servo to go to position in variable 'pos'
        myservo.write(pos);
        // waits 15ms for the servo to reach the position
        delay(15);
    }
}