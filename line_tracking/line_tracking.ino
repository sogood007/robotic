//Line Tracking IO define
#define LT_R !digitalRead(10)
#define LT_M !digitalRead(4)
#define LT_L !digitalRead(2)

#define ENA 5
#define ENB 6
#define IN1 7
#define IN2 8
#define IN3 9
#define IN4 11

#define carSpeed 250

void setup(){
  Serial.begin(9600);
  pinMode(10,INPUT);
  pinMode(4,INPUT);
  pinMode(2,INPUT);
}

void loop() {
}
