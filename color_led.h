void red () {
  digitalWrite(r, 0);
  digitalWrite(g, 1);
  digitalWrite(b, 1);
  digitalWrite(G1, 1);
  digitalWrite(G2, 1);
}

void green () {
  digitalWrite(g, 1);
  digitalWrite(r, 1);
  digitalWrite(b, 1);
  digitalWrite(G1, 0);
  digitalWrite(G2, 0);
}

void blue () {
  digitalWrite(r, 1);
  digitalWrite(g, 1);
  digitalWrite(b, 0);
  digitalWrite(G1, 1);
  digitalWrite(G2, 1);
}

void off () {
  digitalWrite(r, 1);
  digitalWrite(g, 1);
  digitalWrite(b, 1);
  digitalWrite(G1, 1);
  digitalWrite(G2, 1);
}

void g1 () {
  digitalWrite(r, 1);
  digitalWrite(g, 1);
  digitalWrite(b, 1);
  digitalWrite(G1, 0);
  digitalWrite(G2, 1);
}

void g2 () {
  digitalWrite(r, 1);
  digitalWrite(g, 1);
  digitalWrite(b, 1);
  digitalWrite(G1, 1);
  digitalWrite(G2, 0);
}
