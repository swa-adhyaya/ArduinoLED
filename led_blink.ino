// LED Blink Program

// Define LED pin
int ledPin = 13;

void setup() {
  // Set LED pin as output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Turn LED ON
  digitalWrite(ledPin, HIGH);
  delay(1000); // Wait for 1 second

  // Turn LED OFF
  digitalWrite(ledPin, LOW);
  delay(1000); // Wait for 1 second
}
