// 
// Santa Hat with NeoPixel and one extra NeoPixel in the Bommel
// The code uses comon neopixel function. We using Digital PIN D12 
// for the neopixel strip and PIN D8 for the Bommel
// 
// markus van kempen - markus@vankempen.org
//
#define VERSION "2021-01-03-1521"

// NEOPIXEL BEST PRACTICES for most reliable operation:
// - Add 1000 uF CAPACITOR between NeoPixel strip's + and - connections.
// - MINIMIZE WIRING LENGTH between microcontroller board and first pixel.
// - NeoPixel strip's DATA-IN should pass through a 300-500 OHM RESISTOR.
// - AVOID connecting NeoPixels on a LIVE CIRCUIT. If you must, ALWAYS
//   connect GROUND (-) first, then +, then data.
// - When using a 3.3V microcontroller with a 5V-powered NeoPixel strip,
//   a LOGIC-LEVEL CONVERTER on the data line is STRONGLY RECOMMENDED.
// (Skipping these may work OK on your workbench but can fail in the field)

#include <Adafruit_NeoPixel.h>

//#include <SoftwareSerial.h>
//SoftwareSerial hc06(2, 3); //HC-6 Bluethooth for remote controll (optional)

// Which pin on the Arduino is connected to the NeoPixels?
// On a Trinket or Gemma we suggest changing this to 1:
#define NEOPIXEL_RING_PIN    12
#define BOMMEL_PIN      8

// How many NeoPixels are attached to the Arduino?
#define NEOPIXEL_RING_COUNT 50

// Declare our NeoPixel strip object:
Adafruit_NeoPixel strip(NEOPIXEL_RING_COUNT, NEOPIXEL_RING_PIN, NEO_GRB + NEO_KHZ800); // Ring
Adafruit_NeoPixel singel(2, BOMMEL_PIN, NEO_RGB + NEO_KHZ800); // Bommel 


// Argument 1 = Number of pixels in NeoPixel strip
// Argument 2 = Arduino pin number (most are valid)
// Argument 3 = Pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
//   NEO_RGBW    Pixels are wired for RGBW bitstream (NeoPixel RGBW products)


// setup() function -- runs once at startup --------------------------------

void setup() {
  strip.begin();           // INITIALIZE NeoPixel strip object (REQUIRED)
  strip.setBrightness(20); // Set BRIGHTNESS to about 1/5 (max = 255)
  strip.show();            // Turn OFF all pixels ASAP
  // initialize digital pin LED_BUILTIN as an output.

  singel.begin();           // INITIALIZE NeoPixel strip object (REQUIRED)
  singel.setBrightness(100); // Set BRIGHTNESS to about 1/5 (max = 255) // bommel pixel full brightnes
  singel.show();  
  
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(115200);
  delay(1000); 
  Serial.println("Serial HELLO SANTA :) ");
  Serial.print("VERSION = ");
  Serial.println(VERSION );
    Serial.println("NeoPixel SantaHat start ");
//  hc06.begin(115200);
//  hc06.println("HC05 HELLO : ");

  
  Serial.println("Bommel-Red");
  singel.setPixelColor(0, singel.Color(0, 250, 0));
  singel.show();         
  delay(1000); 
  /*
   * 
  delay(1000); 
  Serial.println("Bommel-Green");
  singel.setPixelColor(0, singel.Color(250, 0, 0));
  singel.show();            // Turn OFF all pixels ASAP
  delay(1000); 
   Serial.println("rainbowbommel");
    rainbowbommel(10);
   delay(1000); 
    
*/
}


// loop() function -- runs repeatedly as long as board is on ---------------
int counter=0;
void loop() {
    Serial.println("LOOP-Start");

    Serial.println("theaterChase-White");
     theaterChase(strip.Color(127,   0,   0), 30); // Red, half brightness

  
 // Serial.println("rainbowbommel");
 // rainbowbommel(10);
  Serial.println("rainbow1");
  rainbow(10);             // Flowing rainbow cycle along the whole strip
      
  // Light up bommel
  //digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  Serial.println("Bommel-Red");
  singel.setPixelColor(0, singel.Color(250, 0, 0));
  singel.show();
  
  // Fill along the length of the strip in various colors...
  Serial.println("colorWipe-Red");
  colorWipe(strip.Color(255,   0,   0), 50); // Red
  //digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW

  Serial.println("Bommel-Green");
  singel.setPixelColor(0, singel.Color(0, 250, 0));
  singel.show();

  Serial.println("colorWipe-Green-start");
  colorWipe(strip.Color(  0, 255,   0), 50); // Green
  // digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)

  Serial.println("theaterChaseRainbow");
  theaterChaseRainbow(50); // Rainbow-enhanced theaterChase variant

  singel.setPixelColor(0, singel.Color(0, 0, 50));
  singel.show();
  
  Serial.println("colorWipe-Blue");
  colorWipe(strip.Color(  0,   0, 255), 50); // Blue
  //digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  // Serial.println("colorWipe-White");
  singel.setPixelColor(0, singel.Color(250, 250, 250));
 singel.show();
  // colorWipe(strip.Color(255,   255,   255),255); // Red
  // Do a theater marquee effect in various colors...
  // theaterChase(strip.Color(127, 127, 127), 255); // White, half brightness
  Serial.println("theaterChase-White");
  // Do a theater marquee effect in various colors...
  // theaterChase(strip.Color(127, 127, 127), 255); // White, half brightness
  theaterChase(strip.Color(127,   0,   0), 50); // Red, half brightness
  singel.setPixelColor(0, singel.Color(0, 250, 250));
   singel.show();
  // theaterChase(strip.Color(  0,   0, 127), 50); // Blue, half brightness
  Serial.println("rainbow2");
  rainbow(10);             // Flowing rainbow cycle along the whole strip

    Serial.println("rainbow3");
  rainbow(10);             // Flowing rainbow cycle along the whole strip
  counter++;
  Serial.print("loop counter");
  Serial.println(counter);
  Serial.println("LOOP -END");
}


// Some functions of our own for creating animated effects -----------------

// Fill strip pixels one after another with a color. Strip is NOT cleared
// first; anything there will be covered pixel by pixel. Pass in color
// (as a single 'packed' 32-bit value, which you can get by calling
// strip.Color(red, green, blue) as shown in the loop() function above),
// and a delay time (in milliseconds) between pixels.
void colorWipe(uint32_t color, int wait) {
  for (int i = 0; i < strip.numPixels(); i++) { // For each pixel in strip...
    strip.setPixelColor(i, color);         //  Set pixel's color (in RAM)
    strip.show();                          //  Update strip to match
    delay(wait);                           //  Pause for a moment
  }
}

// Theater-marquee-style chasing lights. Pass in a color (32-bit value,
// a la strip.Color(r,g,b) as mentioned above), and a delay time (in ms)
// between frames.
void theaterChase(uint32_t color, int wait) {
  for (int a = 0; a < 10; a++) { // Repeat 10 times...
    for (int b = 0; b < 3; b++) { //  'b' counts from 0 to 2...
      strip.clear();         //   Set all pixels in RAM to 0 (off)
      // 'c' counts up from 'b' to end of strip in steps of 3...
      for (int c = b; c < strip.numPixels(); c += 3) {
        strip.setPixelColor(c, color); // Set pixel 'c' to value 'color'
      }
      strip.show(); // Update strip with new contents
      delay(wait);  // Pause for a moment
    }
  }
}

// Rainbow cycle along whole strip. Pass delay time (in ms) between frames.
void rainbow(int wait) {
  // Hue of first pixel runs 5 complete loops through the color wheel.
  // Color wheel has a range of 65536 but it's OK if we roll over, so
  // just count from 0 to 5*65536. Adding 256 to firstPixelHue each time
  // means we'll make 5*65536/256 = 1280 passes through this outer loop:
  for (long firstPixelHue = 0; firstPixelHue < 5 * 65536; firstPixelHue += 256) {
    for (int i = 0; i < strip.numPixels(); i++) { // For each pixel in strip...
      // Offset pixel hue by an amount to make one full revolution of the
      // color wheel (range of 65536) along the length of the strip
      // (strip.numPixels() steps):
      int pixelHue = firstPixelHue + (i * 65536L / strip.numPixels());
      // strip.ColorHSV() can take 1 or 3 arguments: a hue (0 to 65535) or
      // optionally add saturation and value (brightness) (each 0 to 255).
      // Here we're using just the single-argument hue variant. The result
      // is passed through strip.gamma32() to provide 'truer' colors
      // before assigning to each pixel:
      strip.setPixelColor(i, strip.gamma32(strip.ColorHSV(pixelHue)));
    }
    strip.show(); // Update strip with new contents
    delay(wait);  // Pause for a moment
  }
}
// Rainbow cycle along whole strip. Pass delay time (in ms) between frames.
void rainbowbommel(int wait) {
  // Hue of first pixel runs 5 complete loops through the color wheel.
  // Color wheel has a range of 65536 but it's OK if we roll over, so
  // just count from 0 to 5*65536. Adding 256 to firstPixelHue each time
  // means we'll make 5*65536/256 = 1280 passes through this outer loop:
  for (long firstPixelHue = 0; firstPixelHue < 5 * 65536; firstPixelHue += 256) {
    for (int i = 0; i < singel.numPixels(); i++) { // For each pixel in strip...
      // Offset pixel hue by an amount to make one full revolution of the
      // color wheel (range of 65536) along the length of the strip
      // (strip.numPixels() steps):
      int pixelHue = firstPixelHue + (i * 65536L / singel.numPixels());
      // strip.ColorHSV() can take 1 or 3 arguments: a hue (0 to 65535) or
      // optionally add saturation and value (brightness) (each 0 to 255).
      // Here we're using just the single-argument hue variant. The result
      // is passed through strip.gamma32() to provide 'truer' colors
      // before assigning to each pixel:
      singel.setPixelColor(i, singel.gamma32(singel.ColorHSV(pixelHue)));
    }
    singel.show(); // Update strip with new contents
    delay(wait);  // Pause for a moment
  }
}

// Rainbow-enhanced theater marquee. Pass delay time (in ms) between frames.
void theaterChaseRainbow(int wait) {
  int firstPixelHue = 0;     // First pixel starts at red (hue 0)
  for (int a = 0; a < 30; a++) { // Repeat 30 times...
    for (int b = 0; b < 3; b++) { //  'b' counts from 0 to 2...
      strip.clear();         //   Set all pixels in RAM to 0 (off)
      // 'c' counts up from 'b' to end of strip in increments of 3...
      for (int c = b; c < strip.numPixels(); c += 3) {
        // hue of pixel 'c' is offset by an amount to make one full
        // revolution of the color wheel (range 65536) along the length
        // of the strip (strip.numPixels() steps):
        int      hue   = firstPixelHue + c * 65536L / strip.numPixels();
        uint32_t color = strip.gamma32(strip.ColorHSV(hue)); // hue -> RGB
        strip.setPixelColor(c, color); // Set pixel 'c' to value 'color'
      }
      strip.show();                // Update strip with new contents
      delay(wait);                 // Pause for a moment
      firstPixelHue += 65536 / 90; // One cycle of color wheel over 90 frames
    }
  }
}
