#include <SoftwareSerial>

#define DEBUG true

SoftwareSerial esp(10, 11);

void setup() {
  Serial.begin(9600);
  esp.begin(
    //depends on the hardware module
  );

  transmit(####, 2000, DEBUG);
  transmit(####, 1000, DEBUG);
  transmit(####, 1000, DEBUG);
  transmit(####, 1000, DEBUG);
  transmit(####, 1000, DEBUG);
}
