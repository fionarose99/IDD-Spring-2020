#include <Adafruit_NeoPixel.h>

#ifdef __AVR__
  #include <avr/power.h>
#endif

// Teensy Pin for what sends data to LED
#define LED_OUT  6

Adafruit_NeoPixel pixel = Adafruit_NeoPixel(1, LED_OUT, NEO_GRB + NEO_KHZ800);
    //"In most cases you can leave this off and pass just two arguments; 
    // the example code is just being extra descriptive. If you have a 
    // supply of classic “V1” Flora pixels, those require NEO_KHZ400 + NEO_RGB 
    // to be passed here. RGBW NeoPixels also require a different value here: NEO_RGBW.

    // Parameter 1 = number of pixels in strip
    // Parameter 2 = Arduino pin number (most are valid)
    // Parameter 3 = pixel type flags, add together 
      // this initializes all the Neopixels to 'off' in case some were left lit
      // by a prior program.
  pixel.setPixelColor(0, pixel.Color(61, 255, 236));
      // setPixelColor(n, c);
      // Sets pixel color w/ 32-bit 'packed' RGB/RGBW color
      // n = pixel index (starts from 0)
      // c = packed 32-bit color value
      // 61, 255, 236 = teal blue color
  
  pixel.setBrightness(255); // 255 = max, 0 = min
}

void loop() {
  
}
