long randNumber;

void setup() {
// initialize serial comms
  Serial.begin(19200);
  pinMode(13, OUTPUT);
}

long i=0;
float pi=3.14159;
void loop() {
  i=i+1;
  long j1=0,j2=0;
  unsigned long mtime;
  if(i%100==0){j1=i+random(-5,5);}
  else{j1=i;}
    if(i%100==0){j2=i+random(-5,5);}
  else{j2=i;}
  mtime=millis();
  Serial.print(mtime);
  Serial.print(",");
  Serial.print(sin(2.0*pi*float(j1)/50));
  Serial.print(",");
  Serial.print(cos(2.0*pi*float(j2)/50));
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
