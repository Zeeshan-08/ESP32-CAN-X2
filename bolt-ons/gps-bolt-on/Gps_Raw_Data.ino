#include <SoftwareSerial.h>

SoftwareSerial gpsSerial(17, 18);  // RX, TX

void setup() {
  Serial.begin(115200);    // Initialize serial communication with the Serial Monitor
  gpsSerial.begin(115200); // Initialize serial communication with the GPS module
}

void loop() {
  if (gpsSerial.available()) {  // Check if data is available from the GPS module
    char c = gpsSerial.read();  // Read a character from the GPS module 
    Serial.print(c);            // Print the character to the Serial Monitor (Raw Data)
  }
}