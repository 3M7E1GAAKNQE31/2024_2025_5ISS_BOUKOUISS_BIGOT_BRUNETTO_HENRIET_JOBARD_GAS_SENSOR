#include <TheThingsNetwork.h>
#include <SoftwareSerial.h>

#define loraSerial mySerial
#define debugSerial Serial

// Replace REPLACE_ME with TTN_FP_EU868 or TTN_FP_US915
#define freqPlan TTN_FP_EU868


const byte txPin = 11;
const byte rxPin = 10;
const int gasSensorPin = 0;

SoftwareSerial mySerial (rxPin,txPin);
TheThingsNetwork ttn(loraSerial, debugSerial, freqPlan);


const char *appEui = "0004A30B002159CA";
const char *appKey = "8d1630b9b6db6270fa1ae3268e610842";//"469f56274c4527be611be70a53bab737";//"8d1630b9b6db6270fa1ae3268e610842";
int val = 0;

void setup()
{
  loraSerial.begin(57600);
  debugSerial.begin(9600);
  ttn.join(appEui,appKey);
  //Serial.begin(9600);
  debugSerial.print("test serial");
}

void loop()
{
//  debugSerial.println("Device Information");
//  debugSerial.println();
//  ttn.showStatus();
//  debugSerial.println();
//  debugSerial.println("Use the EUI to register the device for OTAA");
//  debugSerial.println("-------------------------------------------");
//  debugSerial.println();
//  byte data[2];
//  data[0] = 0x11;
//  data[1] = 0x10;
//  ttn.sendBytes(data,sizeof(data));
//  debugSerial.println("Byte envoyé");
  val = analogRead(gasSensorPin);
  debugSerial.print("valeur du capteur:");
  debugSerial.println(val);

  byte payload[2];
  payload[0] = (val >> 8) & 0xFF;
  payload[1] = val & 0xFF;
  ttn.sendBytes(payload, sizeof(payload));

  debugSerial.print("print payload: ");
  debugSerial.print(payload[0]);
  debugSerial.println(payload[1]);
  delay(2500);
  
  }