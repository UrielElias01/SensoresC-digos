#include <ESP32Servo.h>

#include <DHT11.h>

//#include <LiquidCrystal.h>
int reading = 0;
int sensorPin = 4;
int serv =7;
DHT11 dht11(sensorPin);
Servo myservo;

void setup() {
        Serial.begin(9600);
        myservo.attach(serv);
}

void loop() {
  delay(3000);
  int err;
  float temp, humi;
  if((err=dht11.read(humi, temp))==0)
  {
      Serial.print("Temp: ");
      Serial.print(temp);
      Serial.print("RH: ");
      Serial.print(humi);
      Serial.println();
	if (temp >35) {
                myservo.write(180);
	} if(temp <=34)
        {
                myservo.write(90);
	}
  }
  else
  {
    Serial.print("Error");
    Serial.println();
  }
}
