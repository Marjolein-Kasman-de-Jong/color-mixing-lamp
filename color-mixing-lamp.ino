// Input pins
const int redSensorPin = A0;
const int greenSensorPin = A1;
const int blueSensorPin = A2;

// Output pins
const int greenLEDPin = 9;
const int redLEDPin = 10;
const int blueLEDPin = 11;

// Sensor readings
int redSensorValue = 0;
int greenSensorValue = 0;
int blueSensorValue = 0;

// Output values
int redValue = 0;
int greenValue = 0;
int blueValue = 0;

void setup() {
  // Begin serial communication at 9600bps
  Serial.begin(9600);

  // Set LED pins as outputs
  pinMode(redLEDPin, OUTPUT);
  pinMode(greenLEDPin, OUTPUT);
  pinMode(blueLEDPin, OUTPUT);
}

void loop() {
  // Read and store sensor values
  redSensorValue = analogRead(redSensorPin);
  delay(5); 
  greenSensorValue = analogRead(greenSensorPin);
  delay(5);
  blueSensorValue = analogRead(blueSensorPin);

  // Convert sensor values to output values 
  redValue = redSensorValue/4;
  greenValue = greenSensorValue/4;
  blueValue = blueSensorValue/4;

  // Set LED light levels
  analogWrite(redLEDPin, redValue);
  analogWrite(greenLEDPin, greenValue);
  analogWrite(blueLEDPin, blueValue);
}