
void ir() {
  sensorValue1 = adc(analogRead(sensorPin1));
  sensorValue2 = adc(analogRead(sensorPin2));
  sensorValue3 = adc(analogRead(sensorPin3));
  sensorValue4 = adc(analogRead(sensorPin4));
  sensorValue5 = adc(analogRead(sensorPin5));
  sensorValue6 = adc(analogRead(sensorPin6));
  sensorValue7 = adc(analogRead(sensorPin7));
  sensorValue8 = adc(analogRead(sensorPin8));
  sensorValue9 = adc(analogRead(sensorPin9));
  sensorValue10 = adc(analogRead(sensorPin10));
  sensorValue11 = adc(analogRead(sensorPin11));
  sensorValue12 = adc(analogRead(sensorPin12));
  sensorValue13 = adc(analogRead(sensorPin13));
  sensorValue14 = adc(analogRead(sensorPin14));
  sensorValue15 = adc(analogRead(sensorPin15));
  sensorValue16 = adc(analogRead(sensorPin16));

  total = sensorValue1 + sensorValue2 + sensorValue3 + sensorValue4 + sensorValue5 + sensorValue6 + sensorValue7 + sensorValue8 + sensorValue9 + sensorValue10 + sensorValue11 + sensorValue12 + sensorValue13 + sensorValue14 + sensorValue15 + sensorValue16;
  Total = sensorValue5 + sensorValue6 + sensorValue7 + sensorValue8 + sensorValue9 + sensorValue10 + sensorValue11 + sensorValue12;

}
