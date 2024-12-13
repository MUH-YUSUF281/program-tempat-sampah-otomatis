#include <Servo.h> 
#include <NewPing.h> 

Servo myservo; 
#define TRIGGER_PIN 5 
#define ECHO_PIN 6 
#define MAX_DISTANCE 10
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); 

void setup() {
  myservo.attach(2); 
  Serial.begin(9600);
}

void loop() {
delay(50); 
int jarak = sonar.ping_cm(); 
Serial.println(jarak);
if((jarak>0)&&(jarak<=10))
  {
  delay(50); 
  myservo.write(10); 
  delay(2000); 
  myservo.write(120); 
  delay(1500); 
  }
}