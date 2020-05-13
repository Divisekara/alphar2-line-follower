#include "Servo.h"
#include "pin.h"
#include "color_led.h"
#include "ir_panel.h"
#include "moves.h"

#include "pid.h"
#include "arm.h"

#include "coin_measuring.h"
#include "settings.h"
#include "color.h"
#include "ultrasonic.h"


Servo upper_servo;
Servo base_servo;

void setup() {
  sets();
  go_forward(1000, 1000);
  brake();
  delay(200);
}

int task = 1;
int temp = 2;
int turn = 0;
int white = 0;

#include "after_coin.h"

void loop1(){//boruwa
  }


void loop() {
  
  if(2<=temp<4){
    measure_d();
    if(d<20){
      brake();
      delay(300);
      while(d>4){
        pid3();
        measure_d();
        if(d<4){
          brake();
          break;
          }
        }
      delay(100);
      go_forward(100,100);
      brake();
      delay(100); 
      color_sensor_out();
      delay(300);
      go_backward(200,200);
      if(color==1){go_round_left();}
      else{go_round_right();}
      off();
      temp+=1;
    }
  }

  pid();


  //Serial.println(task);
  //println(Total);
  //Serial.println(sensorValue1);

  if (white == 2 && (sensorValue1 == 0 || sensorValue16 == 0) && Total==0) { // stopping condition
    stop_alpha_stop();
  }

  if (task > 3 && Total == 8) {
    white += 1;
    brake();
    delay(200);
    arm_do();
    delay(200);
    turn_back();
    delay(200);
    go_backward(500, 500);


    while (true) {
      int x = 0;
      pid();
      if (sensorValue16 == 0 && sensorValue1 == 0) {
        after();
        x = 1;
      }
      if (x == 1) {
        break;
      }
    }
  }

  else if (sensorValue16 == 0 && temp != 1 && task!=1 && task!=2) { //turn left 90
    ir();
    if(sensorValue1==0 && sensorValue16==0){
      stop_alpha_stop();
      }
    brake();
    delay(200);
    go_forward(600, 600);
    brake();
    delay(200);
    turn_left_90();
    delay(200);
    go_backward(500, 500);
    delay(200);
    turn = 2;
    task+=1;

  }

  else if (sensorValue1 == 0 && task!=1 && task!=2) { //turn right 90
    brake();
    delay(100);
    ir();
    delay(100);
    if(sensorValue1==0 && sensorValue16==0){
      stop_alpha_stop();
      }
    brake();
    delay(200);
    go_forward(650, 650);
    brake();
    delay(200);
    turn_right_90();
    delay(200);
    go_backward(500, 500);
    delay(400);
    turn = 1;
    task+=1;
  }
  
  else if ((task==1 || task==2) && (sensorValue1==0 || sensorValue16==0 )) { //dotted line and curve
    brake();
    delay(10);
    go_forward(600, 600);
    brake();
    delay(10);
    turn_right_45();
    delay(10);
    go_forward(600, 600);
    temp += 1;
    task += 1;
    turn==2;
    while(true)
    {
      pid2();
      if(sensorValue16==0 && Total<6){
          brake();
          delay(10);
          go_forward(600, 600);
          brake();
          delay(10);
          turn_right_45_2();
          temp += 1;
          task += 1;
          turn==2;
          break;
      }
      }
  }
}
