/*
  Arduino Library to TMP36 temperature sensor
  More info in https://learn.adafruit.com/tmp36-temperature-sensor
*/

#ifndef TMP36_H
#define TMP36_H

#include "Arduino.h"

#define NO_REF	0xFF

class TMP36
{
	public:
		TMP36(uint8_t inPin);
		TMP36(uint8_t inPin, uint8_t refPin);
		float read();

	private:
		uint8_t _inPin;
		uint8_t _refPin;
};

#endif