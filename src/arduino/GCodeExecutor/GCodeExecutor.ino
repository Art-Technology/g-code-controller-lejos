#include <Servo.h>
#define D_PIN 6
#define M1_PIN 2
#define M2_PIN 3
#define M3_PIN 4
#define T3_PIN 13
#define T2_PIN 12
#define T1_PIN 11 


char cmd;
byte cmdNum;
Servo M1, M2, M3;




void setup() {
  Serial.begin(9600);
  M1.attach(M1_PIN);
  M2.attach(M2_PIN);
  M3.attach(M3_PIN);
  pinMode(TPIN, OUTPUT);
  pinMode(T1_PIN, INPUT);
  pinMode(T2_PIN, INPUT);
  pinMode(T3_PIN, INPUT);
  
}


void loop() {}
