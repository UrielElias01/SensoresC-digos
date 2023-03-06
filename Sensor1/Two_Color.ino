void setup() {
  pinMode(8, OUTPUT); // module's red pin
  pinMode(9, OUTPUT); // module's green pin

  digitalWrite(8, LOW); // switch off red
  digitalWrite(9, LOW);
}


void loop() {
  digitalWrite(8, HIGH);  // switch on red
  delay(1000);            // wait 1 second
  digitalWrite(8, LOW);   // switch off red

  digitalWrite(9, HIGH);  // switch on green
  delay(1000);            // wait 1 second
  digitalWrite(9, LOW);   // switch off green
}