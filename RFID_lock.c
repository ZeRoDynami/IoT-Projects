#include <MFRC522.h>   // Library for RFID module
#include <Servo.h>     // Library for servo motor

#define SS_PIN 10       // Define the slave select pin for the RFID module
#define RST_PIN 9       // Define the reset pin for the RFID module
#define LED_PIN 13      // Define the pin for the status LED
#define SERVO_PIN 7     // Define the pin for the servo motor

MFRC522 mfrc522(SS_PIN, RST_PIN);  // Create an instance of the RFID module
Servo servo;                       // Create an instance of the servo motor

void setup() {
  Serial.begin(9600);               // Initialize serial communication
  SPI.begin();                      // Initialize SPI communication
  mfrc522.PCD_Init();               // Initialize RFID module
  servo.attach(SERVO_PIN);          // Attach the servo motor to the specified pin
  pinMode(LED_PIN, OUTPUT);          // Set the LED pin as an output
  unlockDoor();                     // Unlock the door initially
}

void loop() {
  // Look for new RFID cards
  if (mfrc522.PICC_IsNewCardPresent() && mfrc522.PICC_ReadCardSerial()) {
    // Print UID (unique identifier) of the card/tag
    Serial.print("Card UID: ");
    for (byte i = 0; i < mfrc522.uid.size; i++) {
      Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");
      Serial.print(mfrc522.uid.uidByte[i], HEX);
    }
    Serial.println();
    
    // Check if the card is authorized (replace this with your own authorized card UID)
    if (isAuthorizedCard(mfrc522.uid.uidByte)) {
      Serial.println("Access granted!");
      unlockDoor();  // Unlock the door
      delay(5000);   // Keep the door unlocked for 5 seconds (adjust as needed)
      lockDoor();    // Lock the door
    } else {
      Serial.println("Access denied!");
    }
    
    // Halt the RFID module to avoid reading the same card multiple times
    mfrc522.PICC_HaltA();
  }
}

bool isAuthorizedCard(byte cardUID[]) {
  // Replace this array with the UID of the authorized card/tag
  byte authorizedUID[] = {0xAA, 0xBB, 0xCC, 0xDD};

  // Compare the received card UID with the authorized UID
  for (byte i = 0; i < 4; i++) {
    if (cardUID[i] != authorizedUID[i]) {
      return false;  // Card is not authorized
    }
  }
  return true;       // Card is authorized
}

void unlockDoor() {
  servo.write(90);       // Open the door (adjust the angle as needed)
  digitalWrite(LED_PIN, HIGH);  // Turn on the status LED
}

void lockDoor() {
  servo.write(0);        // Close the door (adjust the angle as needed)
  digitalWrite(LED_PIN, LOW);   // Turn off the status LED
}
