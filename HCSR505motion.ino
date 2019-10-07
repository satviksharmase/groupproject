void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(6, INPUT);
  pinMode(8, INPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  if (digitalRead(6) == HIGH) 
  {
    Serial.println("light on");
    digitalWrite(1,HIGH);
    if (digitalRead(8) == HIGH) 
    {
      Serial.println("tap on");
      digitalWrite(2,HIGH);
    }
    else 
    {
      Serial.println("tap off");
      digitalWrite(2,LOW);
    }
    delay(3000);
    }
  else {
    Serial.println("light off");
    digitalWrite(1,LOW);
  }
  delay(3000);
}
