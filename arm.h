Servo base;
Servo upper;

void arm_do(){
  for(int i=70; i<+185;i+=1 ){
    base.write(i);
    delay(6);
    }
  delay(200);
  
  go_backward(200,200);
  delay(200);
  go_forward(600,600);
  
  for(int j=180;j>65;j-=1){
    base.write(j);
    delay(6);
    }
  delay(200);
  
  upper.write(50);
  
  delay(500);

  upper.write(0);
  delay(50);
  
}
