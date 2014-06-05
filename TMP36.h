/*
  Arduino Library to TMP36 temperature sensor
  More info in http://www.analog.com/static/imported-files/data_sheets/TMP35_36_37.pdf
*/

#ifndef TMP36_H
#define TMP36_H

#include "Arduino.h"

class TMP36
{
	public:
		TMP36(uint8_t inPin);
		float read();

	private:
		uint8_t _inPin;
};

#endif