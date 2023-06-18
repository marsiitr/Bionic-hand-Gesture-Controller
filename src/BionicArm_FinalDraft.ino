#include <Servo.h>    //the library which helps us to control the servo motor

Servo fingure1;
Servo fingure3;
Servo fingure4;
Servo fingure2;
Servo fingure5;

int flex_5 = A5;
int flex_4 = A4;
int flex_3 = A3;
int flex_2 = A2;
int flex_1 = A1;

int flex_5_val;
int flex_4_val;
int flex_3_val;
int flex_2_val;
int flex_1_val;

String data="",prv_data="-1|-1|-1|-1|-1";
int msg[5];

void setup(){
  Serial.begin(9600);
  fingure1.attach(15);
  fingure2.attach(16);
  fingure3.attach(17);
  fingure4.attach(18);
  fingure5.attach(19);
}


void loop(){
  flex_5_val = analogRead(flex_5); 
  flex_5_val = map(flex_5_val, 0, 730, 0, 180);
  
  flex_4_val = analogRead(flex_4);
  flex_4_val = map(flex_4_val, 0, 730, 0, 180);
 
  flex_3_val = analogRead(flex_3);
  flex_3_val = map(flex_3_val, 0, 730, 0, 180);
 
  flex_2_val = analogRead(flex_2);
  flex_2_val = map(flex_2_val, 0, 730, 0, 180);
  
  flex_1_val = analogRead(flex_1);
  flex_1_val = map(flex_1_val, 0, 730, 0, 180);

  
  msg[0] = flex_5_val;
  msg[1] = flex_4_val;
  msg[2] = flex_3_val;
  msg[3] = flex_2_val;
  msg[4] = flex_1_val;
  data=String(flex_1_val)+"|"+String(flex_2_val)+"|"+String(flex_3_val)+"|"+String(flex_4_val)+"|"+String(flex_5_val);
  if(data!=prv_data)
  {
    fingure1.write(msg[0]);
    fingure2.write(msg[1]);
    fingure3.write(msg[3]);
    fingure4.write(msg[3]);
    fingure5.write(msg[4]);
    prv_data=data;
  }
}
