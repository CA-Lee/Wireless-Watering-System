#include <SoftwareSerial.h>
SoftwareSerial xb(8,9);//r,t
int temp = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(10,OUTPUT);
pinMode(A0,INPUT);
xb.begin(9600);
Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
while(xb.available()<3);
  if(xb.read() == 87){
    int i = 0;
    i+=xb.read()*256;
    i+=xb.read();
    Serial.println(i);
    temp=(i+temp)/2;
    if(temp>analogRead(A0)){
      digitalWrite(10,1);
      delay(4000);
      digitalWrite(10,0);
    }else{
      digitalWrite(10,0);
    }
}

while(xb.read()!=94);
}
