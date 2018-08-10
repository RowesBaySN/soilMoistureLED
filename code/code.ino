/*int redPin = D4;
int greenPin = D2;
int yellowPin = D3; */
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
/*  pinMode(redPin, OUTPUT); 
  pinMode(greenPin, OUTPUT);
  pinMode(yellowPin, OUTPUT); */
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);

  // print out the value you read:
  Serial.println(sensorValue);
  delay(1);        // delay in between reads for stability

  if (sensorValue < 30) {
    Serial.println("Water is low"); 
   /*digitalWrite(redPin, HIGH);
   digitalWrite(greenPin, LOW);
   digitalWrite(yellowPin, LOW); */

  } else if (sensorValue > 30 && sensorValue < 70){
    Serial.println("You may need to water soon");
/*    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);
    digitalWrite(yellowPin, HIGH); */
  }  else {
    Serial.println("You don't need to water"); 
   /* digitalWrite(redPin, LOW); 
    digitalWrite(greenPin, HIGH);
    digitalWrite(yellowPin, LOW); */}

}
