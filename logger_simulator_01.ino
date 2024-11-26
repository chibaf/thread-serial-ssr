long randNumber;

void setup() {
// initialize serial comms
  Serial.begin(19200);
  pinMode(13, OUTPUT);
}

long i=0,k1=0,k2=0;
float pi=3.14159;
void loop() {
  i=i+1;
  long j1=0,j2=0;
  unsigned long mtime;
  if(i%100==0){k1=random(-5,5);j1=i+k1;}
  else{j1=i+k1;}
  j1=i+k1;
    if(i%100==0){k2=random(-5,5);j2=i+k2;}
  else{j2=i+k2;}
  mtime=millis();
  Serial.print(mtime);
  Serial.print(",");
  Serial.print(sin(2.0*pi*float(j1)/100.));
  Serial.print(",");
  Serial.print(cos(2.0*pi*float(j2)/100.));
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
