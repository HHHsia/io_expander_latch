void setup() {
  pinMode(25 , OUTPUT);//Data
  pinMode(26 , OUTPUT);//Enable
}

void loop() {
  digitalWrite(25 , LOW);
  digitalWrite(26 , LOW);

  digitalWrite(25 , HIGH);
  delay(300);
  digitalWrite(26 , HIGH);
  delay(200);
  digitalWrite(26 , LOW);
  delay(300);

  digitalWrite(25 , LOW);
  delay(300);
  digitalWrite(26 , HIGH);
  delay(200);
  digitalWrite(26 , LOW);
  delay(300);

  delay(1000);
}
