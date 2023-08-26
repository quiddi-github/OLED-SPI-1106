
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SH110X.h>


#define OLED_MOSI     9
#define OLED_CLK      10
#define OLED_DC       11
#define OLED_CS       12
#define OLED_RST      13


// Create the OLED display
Adafruit_SH1106G display = Adafruit_SH1106G(128, 64,OLED_MOSI, OLED_CLK, OLED_DC, OLED_RST, OLED_CS);


void setup()   {
  Serial.begin(9600);

  //display.setContrast (0); // dim display

  // Start OLED
  display.begin(0, true); // we dont use the i2c address but we will reset!


  // Clear OLED
  display.clearDisplay();

}


void loop() {
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SH110X_WHITE);
  display.setCursor(0, 0);
  display.println("Hallo wie geht es dir?");
  //display.display();
  display.setCursor(10, 28); //Cursor wird Pixelweise gesetz. x-Koordinate 10, y-Koordinate 28
  display.println("Danke gut");
  display.display();
  delay(2000);


}
