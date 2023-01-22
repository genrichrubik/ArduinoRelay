int del = 15;
byte flag;

void setup() {  
  pinMode(2, OUTPUT);           
  pinMode(4, OUTPUT);         
  pinMode(3, OUTPUT);                 
  digitalWrite(4, HIGH);      
}

void loop() {

  if (digitalRead(3) == 1 && flag==0) {     
    digitalWrite(2,HIGH);
    delay(del);
    digitalWrite(2,LOW);
    flag=1;
    delay(100);
  } 
  if (digitalRead(3) == 0 && flag==1) {
  flag=0;
  }
  delay(2);
}
 
