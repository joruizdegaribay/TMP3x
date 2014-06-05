/*
  Arduino Library to TMP35 temperature sensor
  More info in http://www.analog.com/static/imported-files/data_sheets/TMP35_36_37.pdf
*/

#ifndef TMP35_H
#define TMP35_H

#include "Arduino.h"

#define NO_REF	0xFF

class TMP35
{
	public:
		TMP35(uint8_t inPin);
		TMP35(uint8_t inPin, uint8_t refPin);
		float read();

	private:
		uint8_t _inPin;
		uint8_t _refPin;
};

#endif