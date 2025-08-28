#define dirPin 2   // Direction pin
#define stepPin 3  // Step pin
#define stepsPerRevolution 200  // Steps for one full rotation (depends on your motor)

void setup() {
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
}

void loop() {
  // Rotate clockwise
  digitalWrite(dirPin, HIGH);
  for(int i = 0; i < stepsPerRevolution; i++) {
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(1000); // Speed control
    digitalWrite(stepPin, LOW);
    delayMicroseconds(1000);
  }
  delay(1000); // Pause for 1 second

  // Rotate counterclockwise
  digitalWrite(dirPin, LOW);
  for(int i = 0; i < stepsPerRevolution; i++) {
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(1000);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(1000);
  }
  delay(1000);
}