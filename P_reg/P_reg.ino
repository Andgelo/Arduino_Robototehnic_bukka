#include <Wire.h>

#include <Strela.h>
#define svet P5
void setup() {
  uPinMode(INPUT, svet);
  motorConnection(1, 0);
}
void loop() {
  Serial.begin(9600);
  int i = uAnalogRead(svet);
  Serial.println(i);
  float A = (265 - i) * 0.7 - 200;
  float B = (265 - i) * 0.7 + 200;
  drive(A, B);
}
