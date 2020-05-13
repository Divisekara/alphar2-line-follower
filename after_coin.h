void after(){
  int white=0;
  int x=0;
  if (turn== 2) { //turn left 90
    brake();
    delay(200);
    go_forward(600, 600);
    brake();
    delay(200);
    turn_left_90();
    delay(200);
    go_backward(500,500);
    delay(200);
    x=1;
  }

  else if (turn==1) { //turn right 90
    brake();
    delay(200);
    go_forward(650, 650);
    brake();
    delay(200);
    turn_right_90();
    delay(200);
    go_backward(500,500);
    delay(200);
    x=1;
  }
}
