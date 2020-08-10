void setup()
{
  pinMode(4,OUTPUT);
  digitalWrite(4,LOW); 
  pinMode(5,OUTPUT);
  digitalWrite(5,LOW); 
  pinMode(6,OUTPUT);
  digitalWrite(6,LOW); 
  pinMode(7,OUTPUT);
  digitalWrite(7,LOW); 
  Serial.begin(9600);
}

int delay1 = 80;
int delay2 = 100;

int count =0;
void loop()
{
  count = count +1;
  if(count==25)
  {
    delay1 = 70;
    delay2 = 75;
  }
 
  if(analogRead(A5)<800) // in black
  {
    digitalWrite(4, LOW);
    delay(delay2);
    digitalWrite(4, HIGH);
    delay(delay1);
    
  }
  else if(analogRead(A4)<800)
  {
    digitalWrite(5, LOW);
    delay(delay2);
    digitalWrite(5, HIGH);
    delay(delay1);
  }
  else if(analogRead(A3)<800)
  {
    digitalWrite(6, LOW);
    delay(delay2);
    digitalWrite(6, HIGH);
    delay(delay1);
  }
  else if(analogRead(A2)<800)
  {
    digitalWrite(7, LOW);
    delay(delay2);
    digitalWrite(7, HIGH);
    delay(delay1);
  }
  delay(10);
  Serial.print("\n");
  Serial.print(analogRead(A2));
  Serial.print("\t");
  Serial.print(analogRead(A3));
  Serial.print("\t");
  Serial.print(analogRead(A4));
  Serial.print("\t");
  Serial.print(analogRead(A5));
   Serial.print("\t");
  Serial.print(digitalRead(7));
   Serial.print("\t");
  Serial.print(digitalRead(6));
   Serial.print("\t");
  Serial.print(digitalRead(5));
   Serial.print("\t");
  Serial.print(digitalRead(4));
}
