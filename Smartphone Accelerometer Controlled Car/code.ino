#include <SoftwareSerial.h>

SoftwareSerial BT(10, 11); //TX, RX respetively
String readdata;

void setup() {
 BT.begin(9600);
 Serial.begin(9600);
  pinMode(3, OUTPUT); 
  pinMode(4, OUTPUT); 
  pinMode(5, OUTPUT); 
  pinMode(6, OUTPUT); 

}

void loop() {
  while (BT.available()){ 
  delay(10);
  char c = BT.read();
  readdata += c; 
  } 
  if (readdata.length() > 0) {
    Serial.println(readdata); 

  if(readdata == "1") 
  {
    digitalWrite(3, HIGH);
    digitalWrite (4, LOW);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    delay(100);
  }
 

  else if(readdata == "2")
  {
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(6,HIGH);
    delay(100);
  }

  else if (readdata == "3")
  {
    digitalWrite (3,HIGH);
    digitalWrite (4,LOW);
    digitalWrite (5,LOW);
    digitalWrite (6,HIGH);
    delay (100);
   
  }

 else if ( readdata == "4")
 {
   digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, HIGH);
   digitalWrite (6, LOW);
   delay (100);
 }
 else if (readdata == "5")
 {
   digitalWrite (3, LOW);
   digitalWrite (4, LOW);
   digitalWrite (5, LOW);
   digitalWrite (6, LOW);
   delay (100);
 }

  


readdata="";}} //Reset the variable
