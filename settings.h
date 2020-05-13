void count_() {
  right_count_1 += 1;
  left_count_1 += 1;
  right_count_2 += 1;
  left_count_2 += 1;
}

void sets() {

  Serial.begin(9600);

  base.attach(7);
  upper.attach(6);
  upper.write(0);
  base.write(67);

  pinMode(S0_, OUTPUT);
  pinMode(S1_, OUTPUT);
  pinMode(S2_, OUTPUT);
  pinMode(S3_, OUTPUT);
  pinMode(sensorOut, INPUT);
  digitalWrite(S0_,HIGH);
  digitalWrite(S1_,LOW);

  pinMode(r, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(G1, OUTPUT);
  pinMode(G2, OUTPUT);
  pinMode(14, OUTPUT);

  pinMode(left_pwm, OUTPUT);
  pinMode(left_dir_one, OUTPUT);
  pinMode(left_dir_two, OUTPUT);

  pinMode(right_pwm, OUTPUT);
  pinMode(right_dir_one, OUTPUT);
  pinMode(right_dir_two, OUTPUT);

  pinMode(14, OUTPUT);
  digitalWrite(14, HIGH);

  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);

  attachInterrupt(digitalPinToInterrupt(renc1), count_, RISING);
  attachInterrupt(digitalPinToInterrupt(renc2), count_, RISING);
  attachInterrupt(digitalPinToInterrupt(lenc1), count_, RISING);
  attachInterrupt(digitalPinToInterrupt(lenc2), count_, RISING);
  off();

  pinMode(ir_pin_one, INPUT);
  attachInterrupt(digitalPinToInterrupt(ir_pin_two), count_coins, RISING);

  
}
