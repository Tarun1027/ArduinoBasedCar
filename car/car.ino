void setup() {
  // put your setup code here, to run once:
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);

pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    digitalWrite(5,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(6,LOW);
  
  digitalWrite(7,LOW);
  
  delay(1000);
  digitalWrite(7,HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6,LOW);
  digitalWrite(8,LOW);
  delay(1000);
   digitalWrite(8,HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(5,LOW);
  digitalWrite(7,LOW);
  delay(2000);
    digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(5,LOW);
  
  digitalWrite(8,LOW);
  delay(1000);
  digitalWrite(7,HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(8,HIGH);
  delay(8000);
   
  
  
  
  
  delay(500);
}
