// Define Pin Connections
const int trigPin = 9;
const int echoPin = 13;
const int ledPin = 4;
const int buzzerPin = 5;

// Variables for distance calculation
long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  
  Serial.begin(9600); // Start serial monitor for debugging
}

void loop() {
  // 1. Send a 10-microsecond pulse to the TRIG pin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // 2. Measure the time it takes for the echo to return
  duration = pulseIn(echoPin, HIGH);

  // 3. Calculate distance in centimeters
  // Formula: Distance = (Time x Speed of Sound) / 2
  distance = duration * 0.034 / 2;

  // Print distance to the serial monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // 4. Check if an object is detected (Distance greater than 0)
  if (distance > 50) {
    digitalWrite(ledPin, HIGH);      // Turn LED ON
    digitalWrite(buzzerPin, HIGH);    // Turn Buzzer ON
    delay(250);                       // Wait for 0.25 seconds

    digitalWrite(ledPin, LOW);       // Turn LED OFF
    digitalWrite(buzzerPin, LOW);     // Turn Buzzer OFF
    delay(250);                       // Wait for 0.25 seconds
  } else {
    // If no object is in range or sensor reads 0
    digitalWrite(ledPin, LOW);
    digitalWrite(buzzerPin, LOW);
  }
}

      