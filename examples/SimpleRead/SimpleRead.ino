/*
  SimpleRead
  Read temperature sensor and print over the serial port in Celsius degrees.
 
  Connections:
    sensor output to pin A0 of Arduino

  This example code is in the public domain.
*/

#include <TMP36.h>

#define INPUT_PIN  A0

TMP36 tempSensor(INPUT_PIN);

void setup() {

  Serial.begin(9600);
  Serial.println("Temperature Read example"); 
}

void loop() {

  float temp = tempSensor.read();
  Serial.print("Temperature: ");
  Serial.println(temp);
  delay(1000);
}
