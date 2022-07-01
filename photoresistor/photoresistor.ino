void setup() {
  Serial.begin(9600);
}


void loop() {
  int value = analogRead(A0);
  Serial.println("Tingkat Pencahayaan : ");
  Serial.println(value);
  delay(250);
}