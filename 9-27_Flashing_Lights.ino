#include <Adafruit_NeoPixel.h>
#ifdef _AVR_
#include <avr/power.h>
#endif

int const NUM_PIXELS = 12;
int8_t const PIN = 13;
Adafruit_NeoPixel strip;

void setup() {
  strip = Adafruit_NeoPixel(NUM_PIXELS, PIN, NEO_GRB+NEO_KHZ800);
  strip.begin();
  strip.setBrightness(25);
  strip.show(); // Init all pixels to "off"  
  //strip.setPixelColor(0, 0xFF0000);
  //strip.setPixelColor(1, 0xFF5000);
  //strip.setPixelColor(2, 0xFFFF00);
  //strip.setPixelColor(3, 0x008000);
  //strip.setPixelColor(4, 0x00FFFF);
  //strip.setPixelColor(5, 0xFF00FF);
  //strip.setPixelColor(6, 0x996633);
  //strip.setPixelColor(7, 0x666600);
  //strip.setPixelColor(8, 0xFFFFFF);
  //strip.setPixelColor(9, 0x006699);
  //strip.setPixelColor(10, 0x999999);
  //strip.setPixelColor(11, 0x3300CC);
}

void loop() {
   for (int i = 0; i<12; i++) {
   strip.setPixelColor(i, 0xFF0000);
   strip.show();
   delay(5);
   strip.setPixelColor(i, 0x0000FF);
   delay(20);

}}
