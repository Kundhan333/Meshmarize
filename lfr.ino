
void setup() {
  // put your setup code here, to run once:
  pinMode(8,INPUT);
  pinMode(9,INPUT);
  pinMode(10,OUTPUT); //left
  pinMode(11,OUTPUT); //left
  pinMode(12,OUTPUT); //right
  pinMode(13,OUTPUT); //right
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(digitalRead(8));
Serial.println(digitalRead(9));

if(digitalRead(8)==HIGH && digitalRead(9)==HIGH)//forward
{
digitalWrite(10,HIGH);
digitalWrite(11,LOW);
digitalWrite(12,HIGH);
digitalWrite(13,LOW);
}
else if(!digitalRead(8)==HIGH && digitalRead(9)==HIGH)//right
{
  digitalWrite(10,LOW);

digitalWrite(11,LOW);
digitalWrite(12,HIGH);

digitalWrite(13,LOW);
}
else if(digitalRead(8)==HIGH && !digitalRead(9)==HIGH)//left
{digitalWrite(10,HIGH);
digitalWrite(11,LOW);
digitalWrite(12,LOW);
digitalWrite(13,LOW);
}
else if(!digitalRead(8)==HIGH && !digitalRead(9)==HIGH)//stop
{digitalWrite(10,LOW);
digitalWrite(11,LOW);
digitalWrite(12,LOW);
digitalWrite(13,LOW);

}
}
