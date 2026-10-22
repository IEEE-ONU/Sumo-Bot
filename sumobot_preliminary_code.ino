//blatantly plagiarized

// Motor Pins - RIGHT
const int enaPin = 6;
const int in4Pin = 2;
const int in3Pin = 4;

// Motor Pins - LEFT
const int enbPin = 3;
const int in2Pin = 5;
const int in1Pin = 7;

// Line Sensor Pins
const int lineSensorPin = 8;

// Threshold Value for Line Detection
const int lineThreshold = 100;

// Movement Duration when Correcting Position
const int correctionDuration = 1000;

// Speed Values
const int leftSpeed = 255;   // Max speed for the left motor
const int rightSpeed = 250;  // Reduced speed for the right motor

// Move the bot forward
void moveForward() {
  digitalWrite(in1Pin, HIGH);
  digitalWrite(in2Pin, LOW);
  digitalWrite(in3Pin, HIGH);
  digitalWrite(in4Pin, LOW);
}

// Move the bot backward
void moveBackward() {
  digitalWrite(in1Pin, LOW);
  digitalWrite(in2Pin, HIGH);
  digitalWrite(in3Pin, LOW);
  digitalWrite(in4Pin, HIGH);
}

// Turn the bot left by a specified degree
void moveLeft(int degrees) {
  int turnDuration = (int)((float)degrees / 90.0 * 1000.0);
  
  digitalWrite(in1Pin, LOW);
  digitalWrite(in2Pin, HIGH);
  digitalWrite(in3Pin, HIGH);
  digitalWrite(in4Pin, LOW);
  delay(turnDuration);

  stopMoving();
}

// Turn the bot right by a specified degree.
void moveRight(int degrees) {
  int turnDuration = (int)((float)degrees / 90.0 * 1000.0);

  digitalWrite(in1Pin, HIGH);
  digitalWrite(in2Pin, LOW);
  digitalWrite(in3Pin, LOW);
  digitalWrite(in4Pin, HIGH);
  delay(turnDuration);

  stopMoving();
}

// Function to stop the bot
void stopMoving() {
  digitalWrite(in1Pin, LOW);
  digitalWrite(in2Pin, LOW);
  digitalWrite(in3Pin, LOW);
  digitalWrite(in4Pin, LOW);
}

// Hard Rotate
void rotateClockwise() {
  digitalWrite(in1Pin, HIGH);
  digitalWrite(in2Pin, LOW);
  digitalWrite(in3Pin, LOW);
  digitalWrite(in4Pin, HIGH);
}

// Hard Rotate
void rotateCounterClockwise() {
  digitalWrite(in1Pin, LOW);
  digitalWrite(in2Pin, HIGH);
  digitalWrite(in3Pin, HIGH);
  digitalWrite(in4Pin, LOW);
}

void setup() {
  // Set the motor control pins as output
  pinMode(in1Pin, OUTPUT);
  pinMode(in2Pin, OUTPUT);
  pinMode(in3Pin, OUTPUT);
  pinMode(in4Pin, OUTPUT);
  pinMode(enaPin, OUTPUT);
  pinMode(enbPin, OUTPUT);

  // Start the serial connection at 9600 Bauds
  Serial.begin(9600);

  // Set the line Sensor pins as input
  pinMode(lineSensorPin, INPUT);

  // Set the speed control (0-255) for the motors
  analogWrite(enaPin, leftSpeed);
  analogWrite(enbPin, rightSpeed);

  // Five second delay for start
  delay(5000);
}

void loop() {

  if (!digitalRead(lineSensorPin)) {
    moveBackward();
    delay(200);
    rotateCounterClockwise();
  } else if (detectObstacle()) {
    for (int i = 1; i <= 3; ++i) {
        moveForward();
        delay(50);
    }
  } else {
    rotateCounterClockwise();
  }
}
