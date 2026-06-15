#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

// Set the LCD address to 0x27 for a 16 chars and 2 line display
// If 0x27 doesn't work, try 0x3F
LiquidCrystal_I2C lcd(0x27, 16, 2);  

void setup() {
  // Initialize the LCD
  lcd.init();                      
  
  // Turn on the blacklight
  lcd.backlight();                 
  
  // Print the first line
  lcd.setCursor(0, 0);             // Column 0, Row 0
  lcd.print("Senpai :");
  
  // Print the second line
  lcd.setCursor(0, 1);             // Column 0, Row 1
  lcd.print("KuldeepBhakar");   // Removed space to fit 16-character limit
}

void loop() {
  // Main loop remains empty as the text is static
}
