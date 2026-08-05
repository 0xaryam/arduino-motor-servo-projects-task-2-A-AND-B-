#include <Servo.h>

Servo myServo;

const int trigPin = 9;
const int echoPin = 10;
const int ledPin = 3;
const int servoPin = 6;

long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);

  myServo.attach(servoPin);
  myServo.write(0);

  Serial.begin(9600);
}

void loop() {
  // إرسال نبضة للحساس
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);

  // استقبال النبضة
  duration = pulseIn(echoPin, HIGH, 30000);

  // إذا لم يقرأ الحساس
  if (duration == 0) {
    digitalWrite(ledPin, LOW);
    myServo.write(0);
    return;
  }

  // حساب المسافة
  distance = duration * 0.0343 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // تشغيل السيرفو والليد عند اقتراب الجسم
  if (distance >= 2 && distance <= 10) {
    digitalWrite(ledPin, HIGH);
    myServo.write(90);
  } else {
    digitalWrite(ledPin, LOW);
    myServo.write(0);
  }

  delay(100);
}