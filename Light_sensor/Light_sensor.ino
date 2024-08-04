

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(1, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A1);
  // print out the value you read:
  Serial.println(sensorValue);
  delay(1); // delay in between reads for stability

  if(sensorValue >= 680)
  {
    digitalWrite(1, HIGH);
    
   }

   if(sensorValue < 670)
   {
    digitalWrite(1, LOW);
    
    }
}
