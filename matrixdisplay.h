#ifndef _MATRIXDISPLAY_H
#define _MATRIXDISPLAY_H


#include <Adafruit_NeoPixel.h>


/**
 * ::MatrixDisplay
 */

class MatrixDisplay {

	public:

		// (constructor)
		// width, height, ledsPerPixel, 
		MatrixDisplay(uint16_t pin, uint16_t _width = 7, uint16_t _height = 14, uint16_t _ledsPerPixel = 2);

		void
			begin(void);
			clear(void);
			clear(uint16_t x, uint16_t y);
			pixel(uint16_t x, uint16_t y);
			pixel(uint16_t x, uint16_t y, uint8_t r, uint8_t g, uint8_t b);

	private:

		Adafruit_NeoPixel strip;

		uint16_t
			width = 0,
			height = 0,
			ledsPerPixel = 0;

};



#endif