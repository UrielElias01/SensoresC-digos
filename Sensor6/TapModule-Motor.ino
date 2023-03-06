const int knockSensor = 14;
int pin1 = 5;
int pin2 = 4;

void setup() {
  Serial.begin(9600);
  pinMode(knockSensor, INPUT);
  pinMode(pin1,OUTPUT);
  pinMode(pin2,OUTPUT);
}

void loop() {
  int sensorValue = digitalRead(knockSensor);

  if (sensorValue == HIGH) {
    Serial.println("Knock detected!");
    digitalWrite(pin1,HIGH);
    digitalWrite(pin2,LOW);
  } else { 
    digitalWrite(pin1, LOW);
  }
  delay(1000);
}
