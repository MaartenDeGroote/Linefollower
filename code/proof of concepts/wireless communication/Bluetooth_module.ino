

int LED = 11;

void setup() 
{
 
 Serial1.begin(9600);
 pinMode(LED, OUTPUT);
 //Serial.println("Ready to connect\nDefault password is 1234 or 000");
    
}

void loop() 
{
  if (Serial1.available())
  {
   String flag = Serial1.readStringUntil('\r\n');
   flag==1;
   if (flag == "1")
  {
    digitalWrite(LED, HIGH);
    Serial1.println("LED On");
  }
  else if (flag == "0")
  {
    digitalWrite(LED, LOW);
    Serial1.println("LED Off");
  }
  }
}
