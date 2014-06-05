/*
  Arduino Library to TMP37 temperature sensor
  More info in http://www.analog.com/static/imported-files/data_sheets/TMP35_36_37.pdf
*/

#ifndef TMP37_H
#define TMP37_H

#include "Arduino.h"

#define NO_REF	0xFF

class TMP37
{
	public:
		TMP37(uint8_t inPin);
		TMP37(uint8_t inPin, uint8_t refPin);
		float read();

	private:
		uint8_t _inPin;
		uint8_t _refPin;
};

#endif