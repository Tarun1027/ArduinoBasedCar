void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  while(!Serial.available());
  char x=Serial.read();
  if(x=='w') //forward
  {
    digitalWrite(6,HIGH); 
    digitalWrite(5,LOW); 
    digitalWrite(8,HIGH); 
    digitalWrite(7,LOW);  
  }
  else if(x=='s') //backward
  {
    digitalWrite(5,HIGH); 
    digitalWrite(6,LOW); 
    digitalWrite(7,HIGH); 
    digitalWrite(8,LOW);  
  }
  else if(x=='a') //left
  {
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(8,LOW);    
    digitalWrite(7,HIGH);
  } 
  else if(x=='d') //right
  {
    digitalWrite(6,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(7,LOW);    
    digitalWrite(8,HIGH);
  } 
   else if(x==' ')  //stop
  {
    digitalWrite(6,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(7,HIGH);    
    digitalWrite(8,HIGH);
  } 
}
