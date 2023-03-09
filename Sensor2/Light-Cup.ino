int brightness = 255;   // variable for LED brightness 0~255

void setup() {
  pinMode(4, INPUT);  // switch is connected to pin 8
  pinMode(2, OUTPUT); // LED is connected to pin 9
}

void loop() {
  if (digitalRead(4) == HIGH) {
    if (brightness < 255) brightness++; 
// increase brightness if mercury switch is On
  }
  else {
    if (brightness > 0) brightness--;
// decrease brightness if mercury switch is Off (module tilted)
  }

  digitalWrite(2, brightness); // set LED brightness
}
