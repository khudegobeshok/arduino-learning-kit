/* Analog Input
* Demonstrates analog input by reading an analog sensor on analog
* pin 0 and turning on and off a light emitting diode(LED) connected todigital pin 13.
* The amount of time the LED will be on and off depends on the value obtained by
* analogRead().
* http://arduino.cc/en/Tutorial/AnalogInput
*/

int sensorPin = 0;
int ledPin = 13;
int sensorValue = 0;

// select the input pin for the potentiometer
// select the pin for the LED
// variable to store the value coming from the sensor
void setup()
{
    pinMode(ledPin, OUTPUT);
}

//declare the ledPin as an OUTPUT
void loop()
{
    sensorValue = analogRead(sensorPin); // Read the value from the sensor
    digitalWrite(ledPin, HIGH);          // turn ledPin on
    delay(sensorValue);                  // stop program for <sensorValue> milliseconds
    digitalWrite(ledPin, LOW);           // turn ledPin off
    delay(sensorValue);                  // stop the program for <sensorValue> milliseconds
}