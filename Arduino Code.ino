#include <Wire.h>
#include <MPU6050.h>

// MPU6050 setup
MPU6050 mpu;

// Pin definitions
const int buzzerPin = 8;
const int redLEDPin = 7;
const int greenLEDPin = 6;

// Threshold for detecting vibrations
const float vibrationThreshold = 2.0; // Adjust based on sensitivity

void setup() {
  // Initialize serial communication
  Serial.begin(9600);

  // Initialize MPU6050
  Wire.begin();
  mpu.initialize();
  if (!mpu.testConnection()) {
    Serial.println("MPU6050 connection failed");
    while (1);
  }

  // Set pin modes
  pinMode(buzzerPin, OUTPUT);
  pinMode(redLEDPin, OUTPUT);
  pinMode(greenLEDPin, OUTPUT);

  // Turn off buzzer and LEDs initially
  digitalWrite(buzzerPin, LOW);
  digitalWrite(redLEDPin, LOW);
  digitalWrite(greenLEDPin, HIGH); // Green LED indicates normal condition
}

void loop() {
  // Read accelerometer data
  int16_t ax, ay, az;
  mpu.getAcceleration(&ax, &ay, &az);

  // Convert raw data to g-force
  float x = ax / 16384.0;
  float y = ay / 16384.0;
  float z = az / 16384.0;

  // Calculate total acceleration
  float totalAcceleration = sqrt(x * x + y * y + z * z);

  // Check if vibration exceeds threshold
  if (totalAcceleration > vibrationThreshold) {
    Serial.println("Vibration Detected!");
    digitalWrite(buzzerPin, HIGH); // Activate buzzer
    digitalWrite(redLEDPin, HIGH); // Turn on red LED
    digitalWrite(greenLEDPin, LOW); // Turn off green LED
  } else {
    Serial.println("Normal Condition");
    digitalWrite(buzzerPin, LOW); // Deactivate buzzer
    digitalWrite(redLEDPin, LOW); // Turn off red LED
    digitalWrite(greenLEDPin, HIGH); // Turn on green LED
  }

  delay(100); // Adjust loop speed
}
