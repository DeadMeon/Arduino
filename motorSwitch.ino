#include <Servo.h>

boolean direction = 0;

Servo servo_4;

void setup() {
  pinMode(2, INPUT);
  servo_4.attach(4);
}

void loop() {
  if (digitalRead(2) && direction == 0) {
    servo_4.write(180);
    delay(5*1000);
    servo_4.write(90);
    direction = 1;
  } else if (digitalRead(2) && direction == 1) {
    servo_4.write(0);
    delay(5*1000);
    servo_4.write(90);
    direction = 0;
  }
  delay(5*1000);

}
