#include <Servo.h>
#define SERVO_SPEED 100
Servo servo;

void setup() {
  // put your setup code here, to run once:
  servo.attach(8);
  servo.write(0);
  delay(2000);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int angle = 0; angle < 180;angle = angle+10)
  {
    servo.write(angle);
    delay(SERVO_SPEED);
  }
  for(int angle = 180; angle > 0;angle = angle-10)
  {
    servo.write(angle);
    delay(SERVO_SPEED);
  }
}
