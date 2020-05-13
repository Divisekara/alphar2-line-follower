int error = 0;
float kp = 9;
float kd = 4;
int previous_error;

void pid() {
  kp = 9;
  kd = 4;
  left_base=130;
  right_base=100;
  ir();
  error = sensorValue2 * 6 + sensorValue3 * 5 + sensorValue4 * 4 + sensorValue5 * 3 + sensorValue6 * 2 + sensorValue7 *  1 + sensorValue8 * 0 + sensorValue9 * 0 + sensorValue10 * (-1) + sensorValue11 * (-2) + sensorValue12 * (-3) + sensorValue13 * (-4) + sensorValue14 * (-5) + sensorValue15 * (-6);
  //Serial.println(error);

  power = error * kp + (error - previous_error) * kd;
  previous_error = error;

  left_speed = left_base - power;
  right_speed = right_base + power;

  if (left_speed < 0) {
    left_speed = 0;
    right_speed = 200;
  }
  if (right_speed < 0) {
    right_speed = 0;
    left_speed = 200;
  }

  forward();
  /* Serial.print(left_speed);
    Serial.print(" ");
    Serial.print(right_speed);
    Serial.println("");*/

  analogWrite(left_pwm, left_speed);
  analogWrite(right_pwm, right_speed);
}


//for dotted line and currves
void pid2() {
  kp = 10;
  kd = 5;
  left_base=75;
  right_base=60;
  
  ir();
  error = sensorValue2 * 6 + sensorValue3 * 5 + sensorValue4 * 4 + sensorValue5 * 3 + sensorValue6 * 2 + sensorValue7 *  1 + sensorValue8 * 0 + sensorValue9 * 0 + sensorValue10 * (-1) + sensorValue11 * (-2) + sensorValue12 * (-3) + sensorValue13 * (-4) + sensorValue14 * (-5) + sensorValue15 * (-6);
  //Serial.println(error);

  power = error * kp + (error - previous_error) * kd;
  previous_error = error;

  left_speed = left_base - power;
  right_speed = right_base + power;

  if (left_speed < 0) {
    left_speed = 0;
    right_speed = 200;
  }
  if (right_speed < 0) {
    right_speed = 0;
    left_speed = 200;
  }

  forward();
  /* Serial.print(left_speed);
    Serial.print(" ");
    Serial.print(right_speed);
    Serial.println("");*/

  analogWrite(left_pwm, left_speed);
  analogWrite(right_pwm, right_speed);
}



//for fine tuning
void pid3() {
  kp = 10;
  kd = 5;
  left_base=80;
  right_base=60;
  
  ir();
  error = sensorValue2 * 6 + sensorValue3 * 5 + sensorValue4 * 4 + sensorValue5 * 3 + sensorValue6 * 2 + sensorValue7 *  1 + sensorValue8 * 0 + sensorValue9 * 0 + sensorValue10 * (-1) + sensorValue11 * (-2) + sensorValue12 * (-3) + sensorValue13 * (-4) + sensorValue14 * (-5) + sensorValue15 * (-6);
  //Serial.println(error);

  power = error * kp + (error - previous_error) * kd;
  previous_error = error;

  left_speed = left_base - power;
  right_speed = right_base + power;

  if (left_speed < 0) {
    left_speed = 0;
    right_speed = 200;
  }
  if (right_speed < 0) {
    right_speed = 0;
    left_speed = 200;
  }

  forward();
  /* Serial.print(left_speed);
    Serial.print(" ");
    Serial.print(right_speed);
    Serial.println("");*/

  analogWrite(left_pwm, left_speed);
  analogWrite(right_pwm, right_speed);
}
