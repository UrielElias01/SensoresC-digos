  #include <Stepper.h>

const int stepsPerRevolution = 2048;  // change this to fit the number of steps per revolution
const int knockSensor = 14;

// ULN2003 Motor Driver Pins
#define IN1 19
#define IN2 18
#define IN3 5
#define IN4 4

// initialize the stepper library
Stepper myStepper(stepsPerRevolution, IN1, IN3, IN2, IN4);

void setup() {
  pinMode(knockSensor, INPUT);
  // set the speed at 5 rpm
  myStepper.setSpeed(8);
  // initialize the serial port
  Serial.begin(9600);
}

void loop() {
  // step one revolution in one direction:
  int sensorValue = digitalRead(knockSensor);
  if (sensorValue == HIGH) {
    Serial.println("clockwise");
    Serial.println("Knock detected!");
    myStepper.step(stepsPerRevolution);
    delay(1000);
    // step one revolution in the other direction:
  }else{
    Serial.println("counterclockwise");
    myStepper.step(-stepsPerRevolution);
    delay(1000);
  }
  
}
