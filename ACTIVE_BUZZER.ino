int buzzpin=7;
int mynumber;
int potval=A0;
int val;
String msg="potentiometer value";
void setup() {
  // put your setup code here, to run once:
pinMode(buzzpin,OUTPUT);
pinMode(potval,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
val=analogRead(potval);
Serial.println(val);
delay(500);
if (val>=800)
{
  digitalWrite(buzzpin,HIGH);
  delay(200);
  
}
else{
  digitalWrite(buzzpin,LOW);
}
}
