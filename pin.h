int renc1 = 2;
int renc2 = 3;

int lenc1 = 18;
int lenc2 = 19;

int right_count_1 = 0;
int left_count_1 = 0;
int right_count_2 = 0;
int left_count_2 = 0;

int sensorPin1 = A0;
int sensorValue1 = 0;

int sensorPin2 = A1;
int sensorValue2 = 0;

int sensorPin3 = A2;
int sensorValue3 = 0;

int sensorPin4 = A3;
int sensorValue4 = 0;

int sensorPin5 = A4;
int sensorValue5 = 0;

int sensorPin6 = A5;
int sensorValue6 = 0;

int sensorPin7 = A6;
int sensorValue7 = 0;

int sensorPin8 = A7;
int sensorValue8 = 0;

int sensorPin9 = A8;
int sensorValue9 = 0;

int sensorPin10 = A9;
int sensorValue10 = 0;

int sensorPin11 = A10;
int sensorValue11 = 0;

int sensorPin12 = A11;
int sensorValue12 = 0;

int sensorPin13 = A12;
int sensorValue13 = 0;

int sensorPin14 = A13;
int sensorValue14 = 0;

int sensorPin15 = A14;
int sensorValue15 = 0;

int sensorPin16 = 15;
int sensorValue16 = 0;

int Total = 0;

#define left_pwm 13
#define left_dir_one 12
#define left_dir_two 11

#define right_pwm 10
#define right_dir_one 9
#define right_dir_two 8

#define ir_pin_one 22
#define ir_pin_two 21

int power = 0;
int right_speed = 0;
int left_speed = 0;
int base_pwm = 80;
int right_base = 80;
int left_base = 110;
int total;

//Colour detection sensor pins.
int color;
int frequency;

#define S0_ 31
#define S1_ 33
#define S2_ 35
#define S3_ 37
#define sensorOut 39 

int redFrequency = 0;
int greenFrequency = 0;
int blueFrequency = 0;

int trig=28;
int echo=29;

float t=0;
float d=0;

#define ir_pin_one 22
int coins = 0;

#define r 43
#define g 41
#define b 45

#define G1 47
#define G2 49

int adc(int n) {
  if (n < 600) {
    return 0;
  }
  else {
    return 1; //IR panel analog to digital translation.
  }
}
