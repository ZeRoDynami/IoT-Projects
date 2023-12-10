// Define the pin for the PIR sensor
const int pirPin = 2;  // Change this pin according to your wiring

void setup() {
  Serial.begin(9600);  // Initialize serial communication
  
  pinMode(pirPin, INPUT);  // Set PIR pin as input
}

void loop() {
  // Read the state of the PIR sensor
  int pirState = digitalRead(pirPin);

  // Check if motion is detected
  if (pirState == HIGH) {
    Serial.println("Motion detected!");
    // Add your desired actions when motion is detected here
  } else {
    Serial.println("No motion detected.");
    // Add your desired actions when no motion is detected here
  }

  delay(1000);  // Adjust the delay as needed to control the sensing frequency
}
