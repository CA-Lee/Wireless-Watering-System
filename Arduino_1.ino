#include <SoftwareSerial.h>
SoftwareSerial xb(8,9);//r,t

void setup() {
  // put your setup code here, to run once:
pinMode(A0,INPUT);
xb.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int i = analogRead(A0);
xb.write(94);
xb.write(87);
xb.write(i/256);
xb.write(i%256);
//delay(10*60*1000);
delay(30*1000);
}
