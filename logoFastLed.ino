#include <SPI.h>
#include <FastLED.h>
#define NUM_LEDS 128
#define DATA_PIN 4
CRGB leds[NUM_LEDS];
   
void setup() { 
  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
  // Инициализация последовательного порта
}

void loop() {
    RunningLed();
    delay(1000);
    }
    void RunningLed() {
       for(int a = 0; a < NUM_LEDS; a++) {
             leds[a] = CRGB::Green;  
      FastLED.show();
      delay(500);
      FastLED.clear();
           }
        }
           
    void drawLogo() {
  // This 8x8 array represents the LED matrix pixels. 
  // A value of 1 means we’ll fade the pixel to white
  int logo[8][8] = {  
   {0, 0, 1, 1, 1, 1, 1, 1},
   {0, 1, 0, 0, 0, 0, 1, 1},
   {1, 1, 1, 1, 1, 1, 0, 1},
   {1, 0, 0, 0, 0, 1, 0, 1},
   {1, 0, 0, 0, 0, 1, 0, 1},
   {1, 0, 0, 0, 0, 1, 0, 1},
   {1, 0, 0, 0, 0, 1, 1, 0},
   {1, 1, 1, 1, 1, 1, 0, 0}
  };
int led=-1;
  for(int row = 0; row < 8; row++) {
    for(int column = 0; column < 8; column++) {
     led++; 
    if(logo[row][column] == 1) {
     //if(row==column) {
    //  int led=row*column;
    // leds[(row*column)-1] = CRGB::Blue;
       leds[led] = CRGB::Green;  
      FastLED.show();
           }
        }
          
    }
 
}
    void drawZero() {
      FastLED.clear();
  // This 8x8 array represents the LED matrix pixels. 
  // A value of 1 means we’ll fade the pixel to white
  int logo[8][8] = {  
   {0, 0, 0, 0, 0, 0, 0, 0},
   {0, 0, 0, 0, 0, 0, 0, 0},
   {0, 0, 0, 0, 0, 0, 0, 0},
   {0, 0, 0, 0, 0, 0, 0, 0},
   {0, 0, 0, 0, 0, 0, 0, 0},
   {0, 0, 0, 0, 0, 0, 0, 0},
   {0, 0, 0, 0, 0, 0, 0, 0},
   {0, 0, 0, 0, 0, 0, 0, 0}
  };
int led=-1;
  for(int row = 0; row < 8; row++) {
    for(int column = 0; column < 8; column++) {
     led++; 
    if(logo[row][column] == 1) {
     //if(row==column) {
    //  int led=row*column;
    // leds[(row*column)-1] = CRGB::Blue;
       leds[led] = CRGB::Green;  
      FastLED.show();
           }
        }
          
    }
 
}
