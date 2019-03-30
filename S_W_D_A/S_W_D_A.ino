#include <Strela.h>
#include <Wire.h>


void setup() {
  Serial.begin(9600);
  motorConnection(0, 0);
}

void loop() {
  if (Serial.available() > 0)
  {
    char c = Serial.read();
    if (c == 'w')
    {
      drive(255, 255);
      delay(2000);
       drive(0,0);
    }
    if (c == 's')
    {
      drive(-255, -255);
      delay(2000);
       drive(0,0);
    }
    if (c == 'a')
    {
      drive(-255, 255);
      delay(2000);
      drive(0,0);
    }
    if (c == 'd')
    {
      drive(255, -255);
      delay(2000);
      drive(0,0);
    }
  }
}
