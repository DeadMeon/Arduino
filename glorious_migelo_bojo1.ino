#include <Adafruit_NeoPixel.h>

#define PIN 2	 // input pin Neopixel is attached to

#define NUMPIXELS      12 // number of neopixels in Ring

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int delayval = 10; // timing delay

int redColor = 0;
int greenColor = 0;
int blueColor = 0;

void setup() {
  pixels.begin(); // Initializes the NeoPixel library.
//  Serial.begin(9600);
}

void loop() {
  setColor();

  for(int i=0;i<NUMPIXELS;i++){

    
    pixels.setPixelColor(i, pixels.Color(redColor, greenColor, blueColor)); 
    pixels.show(); 
    if (i == NUMPIXELS){
    	i = 0; // start all over again!
        setColor();
	}
  }
  delay(delayval);
}

// setColor()
// picks random values to set for RGB

void setColor(){
  redColor = random(0, 255);
  greenColor = random(0,255);
  blueColor = random(0, 255);
  Serial.print("red: ");
  Serial.println(redColor);
  Serial.print("green: ");
  Serial.println(greenColor);
  Serial.print("blue: ");
  Serial.println(blueColor);
  
}