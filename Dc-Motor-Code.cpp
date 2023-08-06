int enA = 10;
int in1 = 7;
int in2 = 6;

void setup() {
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
}

void loop() {
  // Stage 1 - 100% speed forward
  motorControl(255, HIGH, LOW);
  delay(5000);

  // Stage 2 - 70% speed forward
  motorControl(0.7 * 255, HIGH, LOW);
  delay(5000);

  // Stage 3 - 50% speed forward with 5 sec delay
  motorControl(0.5 * 255, HIGH, LOW);
  delay(5000);

  // Stage 4 - 100% speed reverse
  motorControl(255, LOW, HIGH);
  delay(5000);

  // Stage 5 - 70% speed reverse
  motorControl(0.7 * 255, LOW, HIGH);
  delay(5000);

  // Stage 6 - 50% speed reverse with 5 sec delay
  motorControl(0.5 * 255, LOW, HIGH);
  delay(5000);
}

void motorControl(int speed, int directionPin1, int directionPin2) {
  analogWrite(enA, speed);
  digitalWrite(in1, directionPin1);
  digitalWrite(in2, directionPin2);
}
