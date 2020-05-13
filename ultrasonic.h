void measure_d(){
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  t=pulseIn(echo,HIGH);
  d=t*0.034/2;
  //Serial.print(d);
  //Serial.println(" ");
}
