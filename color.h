void color_sensor_out()
{
  // Setting RED (R) filtered photodiodes to be read
  digitalWrite(S2_,LOW);
  digitalWrite(S3_,LOW);
  
  // Reading the output frequency

  redFrequency = pulseIn(sensorOut, LOW);

  
  // Setting GREEN (G) filtered photodiodes to be read
  digitalWrite(S2_,HIGH);
  digitalWrite(S3_,HIGH);
  
  // Reading the output frequency
  greenFrequency = pulseIn(sensorOut, LOW);
  

  digitalWrite(S2_,LOW);
  digitalWrite(S3_,HIGH);
 
  blueFrequency = pulseIn(sensorOut, LOW);

  if(redFrequency<60){
    red();
    color=1;

    
    }
  else{
    blue();
    color=2;

    }
}
