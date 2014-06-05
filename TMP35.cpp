/*
  Arduino Library to TMP35 temperature sensor
  More info in http://www.analog.com/static/imported-files/data_sheets/TMP35_36_37.pdf
*/

#include "Arduino.h"
#include "TMP35.h"

//
// Constructor
//
// initialize connections
TMP35::TMP35(uint8_t inPin){

	_inPin = inPin;
	_refPin = NO_REF;
}

//
// Constructor
//
// initialize connections
TMP35::TMP35(uint8_t inPin, uint8_t refPin){

	_inPin = inPin;
	_refPin = refPin;
}

//
// read
//
// read sensor and return the value in Celsius degrees
float TMP36::read(){

	int inValue = analogRead(_inPin);
	if (_refPin != NO_REF)
		inValue = inValue - analogRead(_refPin);
	float voltage = inValue * (5.0 / 1023.0);
	return voltage * 100;	// sensor precision 10mV/ºC	
}