#include <Adafruit_NeoPixel.h>

int PINRED = 11; 
int PINGREEN = 10;
int PINBLUE = 9;
int NUM_PIXELS = 4;

Adafruit_NeoPixel pixelsRed(NUM_PIXELS, PINRED, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixelsGreen(NUM_PIXELS, PINGREEN, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixelsBlue(NUM_PIXELS, PINBLUE, NEO_GRB + NEO_KHZ800);

int DELAYRED = 150;
int DELAYGREEN = 300;
int DELAYBLUE = 500;

void setup() 
{
  pixelsRed.begin();
  pixelsGreen.begin();
  pixelsBlue.begin();
}

void loop() 
{
  pixelsRed.clear(); 
  pixelsGreen.clear(); 
  pixelsBlue.clear(); 
  
  
    for(int redLed = 0; redLed < NUM_PIXELS; redLed++) {
  	 pixelsRed.setPixelColor(redLed, pixelsRed.Color(random(256), random(000), random(000)));
 	 pixelsRed.show();
     delay(DELAYRED);
	}
    
    for(int greenLed = 0; greenLed < NUM_PIXELS; greenLed++) {
     pixelsGreen.setPixelColor(greenLed, pixelsGreen.Color(random(000), random(256), random(000)));
 	 pixelsGreen.show();
     delay(DELAYGREEN);
	}
  
     for(int blueLed = 0; blueLed < NUM_PIXELS; blueLed++) {
      pixelsBlue.setPixelColor(blueLed, pixelsBlue.Color(random(000), random(000), random(256)));
 	  pixelsBlue.show();
      delay(DELAYBLUE);
	}
}


//Assista à explicação em: https://www.youtube.com/watch?v=znJLL7SI-fE&t=2s
 




