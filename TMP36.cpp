/*
  Arduino Library to TMP36 temperature sensor
  More info in https://learn.adafruit.com/tmp36-temperature-sensor
*/

#include "Arduino.h"
#include "TMP36.h"

//
// Constructor
//
// initialize connections
TMP36::TMP36(uint8_t inPin){

	_inPin = inPin;
	_refPin = NO_REF;
}

//
// Constructor
//
// initialize connections
TMP36::TMP36(uint8_t inPin, uint8_t refPin){

	_inPin = inPin;
	_refPin = refPin;
}

//
// readLux
//
// read sensor and return the value in Celsius degrees
float TMP36::read(){

	int inValue = analogRead(_inPin);
	if (_refPin != NO_REF)
		inValue = inValue - analogRead(_refPin);
	//correct sensor output offset (0,5V)
	float voltage = inValue * (5.0 / 1023.0);
	voltage -= 0.5;
	return voltage * 100;	// sensor precision 10mV/ºC	
}