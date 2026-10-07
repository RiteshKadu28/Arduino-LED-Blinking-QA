// Arduino LED Blinking Project
// Project Management Activity - GitHub QA Documentation

const int ledPin = 13;
const int blinkDelay = 1000;  // 1 second ON/OFF interval

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Turn LED ON
  digitalWrite(ledPin, HIGH);
  delay(blinkDelay);

  // Turn LED OFF
  digitalWrite(ledPin, LOW);
  delay(blinkDelay);
}
