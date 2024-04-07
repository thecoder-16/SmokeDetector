#define sensorPin A1
#define ledPin 7
#define Threshold 270

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("MQ2 warming up.");
  delay(20000);
  Serial.println("MQ2 is ready for use.");
  digitalWrite(ledPin, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorVal = analogRead(sensorPin);

  Serial.print(sensorVal);
  
  if(sensorVal > Threshold) {
    Serial.print(" -> Smoke Detected !");
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
  Serial.println("");
}

