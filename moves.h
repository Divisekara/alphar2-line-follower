void turn_left() {
  digitalWrite(right_dir_one, LOW);
  digitalWrite(right_dir_two, HIGH);
  digitalWrite(left_dir_one, HIGH);
  digitalWrite(left_dir_two, LOW);
  analogWrite(left_pwm, base_pwm);
  analogWrite(right_pwm, base_pwm);
}

void turn_right() {
  digitalWrite(right_dir_one, HIGH);
  digitalWrite(right_dir_two, LOW);
  digitalWrite(left_dir_one, LOW);
  digitalWrite(left_dir_two, HIGH);
  analogWrite(left_pwm, base_pwm);
  analogWrite(right_pwm, base_pwm);
}

void forward() {
  digitalWrite(right_dir_one, LOW);
  digitalWrite(right_dir_two, HIGH);
  digitalWrite(left_dir_one, LOW);
  digitalWrite(left_dir_two, HIGH);

}



void brake() {
  digitalWrite(right_dir_one, HIGH);
  digitalWrite(right_dir_two, HIGH);
  digitalWrite(left_dir_one, HIGH);
  digitalWrite(left_dir_two, HIGH);
  analogWrite(left_pwm, 0);
  analogWrite(right_pwm, 0);
}

void turn_left_90() {
  left_count_1 = 0;
  while (left_count_1 < 950) {
    turn_left();
    Serial.print("");
  }
  brake();
}

void turn_left_45() {
  left_count_1 = 0;
  while (left_count_1 < 600) {
    turn_left();
    Serial.println("");
  }
  brake();
}

void turn_right_90() {
  right_count_1 = 0;
  while (right_count_1 < 850) {
    turn_right();
    Serial.print("");
  }
  brake();
}

void turn_right_45() {
  right_count_1 = 0;
  while (right_count_1 < 400) {
    turn_right();
    Serial.print("");
  }
  brake();
}


void turn_right_45_2() {
  right_count_1 = 0;
  while (right_count_1 < 650) {
    turn_right();
    Serial.print("");
  }
  brake();
}





void go_forward(int right_distance,int left_distance){
  digitalWrite(right_dir_one,LOW);
  digitalWrite(right_dir_two,HIGH);
  digitalWrite(left_dir_one,LOW);
  digitalWrite(left_dir_two,HIGH);

  right_count_1=0;
  left_count_1=0;
  while(right_count_1<right_distance || left_count_1<left_distance){
    
    if(right_count_1<right_distance){analogWrite(right_pwm,100);}
    else{analogWrite(right_pwm,0);}

    if(left_count_1<left_distance){analogWrite(left_pwm,140);}
    else{analogWrite(left_pwm,0);}
    
    Serial.print("");
    
    }
  brake();
  }


void go_backward(int right_distance,int left_distance){
  digitalWrite(right_dir_one,HIGH);
  digitalWrite(right_dir_two,LOW);
  digitalWrite(left_dir_one,HIGH);
  digitalWrite(left_dir_two,LOW);

  right_count_1=0;
  left_count_1=0;
  while(right_count_1<right_distance || left_count_1<left_distance){
    
    if(right_count_1<right_distance){analogWrite(right_pwm,100);}
    else{analogWrite(right_pwm,0);}

    if(left_count_1<left_distance){analogWrite(left_pwm,140);}
    else{analogWrite(left_pwm,0);}
    
    Serial.print("");
    
    }
  brake();
  }

void turn_back(){
  right_count_1=0;
  while(right_count_1<1800){
    turn_right();
    Serial.print("");
    }
  brake();
  }


void go_round_left(){  //red color cylinder
  
  right_count_1=0;

  turn_left_90();
  
  delay(100);

  digitalWrite(right_dir_one, LOW);
  digitalWrite(right_dir_two, HIGH);
  digitalWrite(left_dir_one, LOW);
  digitalWrite(left_dir_two, HIGH);

  while(true){
    ir();
    if(sensorValue16==0 || sensorValue15==0){
      brake();
      break;
      }
    analogWrite(left_pwm, 255);
    analogWrite(right_pwm, 60);
    }

  digitalWrite(right_dir_one, LOW);
  digitalWrite(right_dir_two, HIGH);
  digitalWrite(left_dir_one, LOW);
  digitalWrite(left_dir_two, HIGH);
  
  left_count_1=0;
  while(left_count_1<400){
    analogWrite(left_pwm, 255);
    analogWrite(right_pwm, 60);
    Serial.print("");
    }
  brake();
  delay(100);

  
  left_count_1 = 0;
  while (left_count_1 < 900) {
    turn_left();
    Serial.print("");
  }
  
  brake();

  //turn_left_90();
 
  }

void go_round_right(){ //blue color cylinder
  left_count_1=0;
  
  right_count_1 = 0;
  while (right_count_1 < 950) {
    turn_right();
    Serial.print("");
  }
  brake();
  delay(200);

  digitalWrite(right_dir_one, LOW);
  digitalWrite(right_dir_two, HIGH);
  digitalWrite(left_dir_one, LOW);
  digitalWrite(left_dir_two, HIGH);

  while(true){
    ir();
    if(sensorValue1==0 || sensorValue2==0){
      brake();
      break;
      }
    analogWrite(left_pwm, 80);
    analogWrite(right_pwm, 255);
    }

  digitalWrite(right_dir_one, LOW);
  digitalWrite(right_dir_two, HIGH);
  digitalWrite(left_dir_one, LOW);
  digitalWrite(left_dir_two, HIGH);


  right_count_1=0;
  while(right_count_1<470){
    analogWrite(left_pwm, 80);
    analogWrite(right_pwm, 255);
    Serial.print("");
    }


  brake();
  delay(100);

  right_count_1 = 0;
  while (right_count_1 < 900) {
    turn_right();
    Serial.print("");
  }
  brake();

  //turn_right_90();
 
  }


void stop_alpha_stop(){
  go_forward(1200, 1200);
  while (true) {
    brake();
    if(coins==0){off();}
    else if(coins==1){g1();}
    else{green();}
    }
}
