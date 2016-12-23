void setup() {
  // put your setup code here, to run once:
  myservo.attach(6);

}

void loop() {
  // put your main code here, to run repeatedly:
  myservo.write(0);
  delay(3000);
  myservo.write(30);
  delay(3000);
  myservo.write(60);
  delay(3000);
  myservo.write(90);
  delay(3000);
  myservo.write(120);
  delay(3000);
  myservo.write(150);
  delay(3000);
  myservo.write(180);
  delay(3000);

}
