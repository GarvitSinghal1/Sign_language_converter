
#include <SoftwareSerial.h>

SoftwareSerial BTserial(0, 1); // RX | TX
int indexFinger =2; 
//int middleFinger=3;
//int ringFinger=4;
//int pinkeyFinger=5;



void setup() {

  Serial.begin(9600);                                                               

  pinMode(indexFinger, INPUT);
 // pinMode(middleFinger, INPUT);
 // pinMode(ringFinger, INPUT);
 // pinMode(pinkeyFinger, INPUT);
  BTserial.begin(9600);

}

void loop() {

 int indexFingerStatus = digitalRead(indexFinger); 
//  int middleFingerStatus = digitalRead(middleFinger);     
//  int ringFingerStatus = digitalRead(ringFinger);
 // int pinkeyFingerStatus = digitalRead(pinkeyFinger);
  // Serial.println(pinkeyFingerStatus); 
//    Serial.println(indexFingerStatus);
    if(indexFingerStatus == 1){
     Serial.println("The patient wants to drink Water");
     }/*
    if (middleFingerStatus == 0 ){
        Serial.println("The patient wants to have food");
     }*/
 /*   if (ringFingerStatus == 0 ){
        Serial.println("The patient want to go to the washroom");
     } 
     
    if (pinkeyFingerStatus == 0 ){
        Serial.println("This message is customizable acording to thee needs");
    }    */    

      
  

  

delay(1000); 
}
