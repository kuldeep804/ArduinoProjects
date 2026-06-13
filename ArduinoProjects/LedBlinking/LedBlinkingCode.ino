const int ledPin = 13; 

void setup() {
  // Initialize the digital pin as an output.
  pinMode(ledPin, OUTPUT);     
}

void loop() {
  digitalWrite(ledPin, HIGH);   // Turn the LED on (HIGH voltage level)
  delay(2000);                  // Wait for 1 second (1000 milliseconds)
  digitalWrite(ledPin, LOW);    // Turn the LED off by making the voltage LOW
  delay(2000);                  // Wait for 1 second
}
      