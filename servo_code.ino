#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;

int servoPin1 = D4;   // GPIO2
int servoPin2 = D5;   // GPIO14
int servoPin3 = D6;   // GPIO12

void setup() {
  servo1.attach(servoPin1, 500, 2500);
  servo2.attach(servoPin2, 500, 2500);
  servo3.attach(servoPin3, 500, 2500);
}

void loop() {
  // Rotate all servos 0 → 180
  for (int angle = 0; angle <= 180; angle += 5) {
    servo1.write(angle);
    servo2.write(angle);
    servo3.write(angle);
    delay(30);
  }

  delay(1000);

  // Rotate all servos 180 → 0
  for (int angle = 180; angle >= 0; angle -= 5) {
    servo1.write(angle);
    servo2.write(angle);
    servo3.write(angle);
    delay(30);
  }

  delay(1000);
}
