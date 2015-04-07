/**

MatrixDisplay Library

*/


#include <Adafruit_NeoPixel.h>
#include <avr/power.h>


MatrixDisplay::MatrixDisplay(uint16_t pin, uint16_t _width = 7, uint16_t _height = 14, uint16_t _ledsPerPixel = 2) {

  width = _width;
  height = _height;
  ledsPerPixel = _ledsPerPixel;

  strip = Adafruit_NeoPixel(width * height * ledsPerPixel, pin, NEO_GRB + NEO_KHZ800);
}

MatrixDisplay::begin() {

  strip.begin();
  strip.show(); // clear

}

MatrixDisplay::clear(void) {
  strip.clear();
}

MatrixDisplay::clear(uint16_t x, uint16_t y) {
  pixel(x, y, 0, 0, 0);
}


MatrixDisplay::pixel(uint16_t x, uint16_t y, uint8_t r, uint8_t g, uint8_t b) {

  int i = x * y;

  for(int v = 0; v < ledsPerPixel; v++) {
    strip.setPixelColor(i + v, r, g, b);
  }
}
