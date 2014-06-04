/*
  ReadWithReference
  Read temperature sensor with different reference in the ground pin and 
  print the value over the serial in Celsius degrees.
 
  Connections:
    sensor output to pin A0 of Arduino
    senor ground to pin A1 of Arduino

  This example code is in the public domain.
*/

#include <TMP36.h>

#define INPUT_PIN      A0
#define REFERENCE_PIN  A1

TMP36 tempSensor(INPUT_PIN, REFERENCE_PIN);

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
