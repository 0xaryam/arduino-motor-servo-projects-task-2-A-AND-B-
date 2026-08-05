// Motor Driver Pins
const int IN1 = 2;
const int IN2 = 3;
const int IN3 = 4;
const int IN4 = 5;

const int IN5 = 6;
const int IN6 = 7;
const int IN7 = 8;
const int IN8 = 9;

void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  pinMode(IN5, OUTPUT);
  pinMode(IN6, OUTPUT);
  pinMode(IN7, OUTPUT);
  pinMode(IN8, OUTPUT);
}

void loop() {

  // التحرك للأمام لمدة 30 ثانية
  forward();
  delay(30000);

  // التحرك للخلف لمدة دقيقة
  backward();
  delay(60000);

  // اليمين واليسار بالتناوب لمدة دقيقة
  unsigned long start = millis();

  while (millis() - start < 60000) {
    turnRight();
    delay(3000);

    turnLeft();
    delay(3000);
  }

  // إيقاف جميع المحركات
  stopMotors();

  while (true);
}

// ===== التحرك للأمام =====
void forward() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);

  digitalWrite(IN5, HIGH);
  digitalWrite(IN6, LOW);

  digitalWrite(IN7, HIGH);
  digitalWrite(IN8, LOW);
}

// ===== التحرك للخلف =====
void backward() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);

  digitalWrite(IN5, LOW);
  digitalWrite(IN6, HIGH);

  digitalWrite(IN7, LOW);
  digitalWrite(IN8, HIGH);
}

// ===== الانعطاف يمين =====
void turnRight() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);

  digitalWrite(IN5, LOW);
  digitalWrite(IN6, HIGH);

  digitalWrite(IN7, LOW);
  digitalWrite(IN8, HIGH);
}

// ===== الانعطاف يسار =====
void turnLeft() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);

  digitalWrite(IN5, HIGH);
  digitalWrite(IN6, LOW);

  digitalWrite(IN7, HIGH);
  digitalWrite(IN8, LOW);
}

// ===== إيقاف المحركات =====
void stopMotors() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);

  digitalWrite(IN5, LOW);
  digitalWrite(IN6, LOW);

  digitalWrite(IN7, LOW);
  digitalWrite(IN8, LOW);
}