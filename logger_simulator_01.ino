void setup() {
// initialize serial comms
  Serial.begin(19200);
  pinMode(13, OUTPUT);
}

int i=0;
float pi=3.14159;
void loop() {
  i=i+1;
  unsigned mtime;
  mtime=millis();
  Serial.print(mtime);
  Serial.print(",");
  Serial.print(sin(2.0*pi*float(i)/50));
  Serial.print(",");
  Serial.print(cos(2.0*pi*float(i)/50));
  Serial.print(",");
  Serial.print("0.0");
  Serial.print(",");
  Serial.print("0.0");
  Serial.print(",");
  Serial.print("0.0");
  Serial.print(",");
  Serial.print("0.0");
  Serial.print(",");
  Serial.print("0.0");
  Serial.print(",");
  Serial.print("0.0");
  Serial.print(",");
  Serial.print("0.0");
  Serial.print(",");
  Serial.print("0.0");
  Serial.println();
  digitalWrite(13,1);
  delay(25);
  digitalWrite(13,0);
  delay(25);
}
