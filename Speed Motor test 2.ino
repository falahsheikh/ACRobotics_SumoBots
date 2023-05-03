// Define motor pins
const int M1p = 7;
const int M1n = 6;
const int M2p = 8;
const int M2n = 9;

// Define speed control pins
const int SM1 = 3;
const int SM2 = 10;

// Define sensor pin
const int sensor1 = 2;

// Function to set motor direction and speed
void setMotor(int pwmPin, int dirPin, int speed) {
  analogWrite(pwmPin, speed);
  digitalWrite(dirPin, HIGH);
}

void setup() {
  pinMode(M1p, OUTPUT);
  pinMode(M1n, OUTPUT);
  pinMode(M2p, OUTPUT);
  pinMode(M2n, OUTPUT);  
  pinMode(SM1, OUTPUT);
  pinMode(SM2, OUTPUT);
  pinMode(sensor1, INPUT);
}

void loop() {
  // Move forward at half speed
  setMotor(SM1, M1n, 127);
  setMotor(SM2, M2n, 127);
  delay(1000);

  // Move forward at full speed
  setMotor(SM1, M1n, 255);
  setMotor(SM2, M2n, 255);
  delay(1000);
}
