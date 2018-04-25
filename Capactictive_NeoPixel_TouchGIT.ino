#include <CapacitiveSensor.h>
#include <Adafruit_NeoPixel.h>

/*
 * CapitiveSense Library Demo Sketch
 * Paul Badger 2008
 * Uses a high value resistor e.g. 10M between send pin and receive pin
 * Resistor effects sensitivity, experiment with values, 50K - 50M. Larger resistor values yield larger sensor values.
 * Receive pin is the sensor pin - try different amounts of foil/metal on this pin
 */


Adafruit_NeoPixel pixels = Adafruit_NeoPixel(10, 5, NEO_GRB + NEO_KHZ800);
int NUMPIXELS = 5;
int black = 0;

  int red = random(0, 255);
  int green = random(0, 255);
  int blue = random(0, 255);

  
  int myPixels1[] = {0, 1, 2, 3, 4};
  //{4, 3, 0, 1, 2};
  int myPixels2[] = {9, 8, 5, 6, 7};

CapacitiveSensor   cs_5_0 = CapacitiveSensor(13,A0);        // 10M resistor between pins 4 & 2, pin 2 is sensor pin, add a wire and or foil if desired
CapacitiveSensor   cs_6_1 = CapacitiveSensor(11,A1);        // 10M resistor between pins 4 & 6, pin 6 is sensor pin, add a wire and or foil
CapacitiveSensor   cs_9_2 = CapacitiveSensor(10,A2);        // 10M resistor between pins 4 & 8, pin 8 is sensor pin, add a wire and or foil


void onestar(int myPixels []){
     for(int i=0;i<NUMPIXELS;i++){
        pixels.setPixelColor(myPixels[i], pixels.Color(red, green, blue));
        delay(300);
        pixels.show();
        pixels.setPixelColor(myPixels[i], pixels.Color(0, 0, 0));
     }
}

void setup()                    
{  
   //cs_4_2.set_CS_AutocaL_Millis(0xFFFFFFFF);     // turn off autocalibrate on channel 1 - just as an example
   Serial.begin(9600);
   pixels.begin(); 
   
}

void loop()                    
{
    pixels.setPixelColor(0, pixels.Color(red, blue, green));
    
    //long start = millis();
    long total50 =  cs_5_0.capacitiveSensor(30);
    long total61 =  cs_6_1.capacitiveSensor(30);
    long total92 =  cs_9_2.capacitiveSensor(30);
    //Serial.print(millis() - start);        // check on performance in milliseconds
    Serial.print("\t TOTAL 50 ");                    // tab character for debug windown spacing
    Serial.print(total50);                  // print sensor output 1
    Serial.print("\t TOTAL 61 ");
    Serial.print(total61);                  // print sensor output 2
    Serial.print("\t TOTAL 92 ");
    Serial.print(total92); 
    Serial.println("");                // print sensor output 3

    if (total50 > c90){
      for(int j = 0; j < 3; j++){
        onestar(myPixels1);
      }
        
      delay(500);
      
      for(int i=0;i<NUMPIXELS;i++){
        pixels.setPixelColor(i, pixels.Color(0, 0, 0));
      }
      pixels.show();
     }
     if(total61 > 500){
       for(int j = 0; j < 3; j++){
        onestar(myPixels2);
       }
        
      delay(500);
      
      for(int i=0;i<NUMPIXELS;i++){
        pixels.setPixelColor(i, pixels.Color(0, 0, 0));
      }
      
      pixels.show();
     }
}


