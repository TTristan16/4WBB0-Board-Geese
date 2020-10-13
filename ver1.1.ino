// Libaries
// #include <TFT.h> // Still has problems with 
#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>

// Main System
int stateSystem = 1; // 0 = Starting up, 1 = Ready to Connect, 2 = Playing a game

// Connection Handler variables

int inputByte;



void setup() {
 // General
 Serial.println("*** Starting up... ***");
 
 // Serial
 Serial.begin(115200);
 
 

}

void loop() {
  switch(stateSystem) {
    case 0:
      break;
    case 1:
      break;
    
  }
}

void connectToNetwerk(char* ssid, char* password) {
  WiFi.begin(ssid, password);                       // Connect to the network
  while (WiFi.status() != WL_CONNECTED) {           // Wait for the WiFi to connect
    delay(500);
    Serial.print(".");
  }

  Serial.println(" Connection Established");
  Serial.print("IP address:\t");
  Serial.println(WiFi.localIP());                   // Print the IP address of the module

  stateSystem = 2;                                  // Connection is succesful new state of system is reached.
}
