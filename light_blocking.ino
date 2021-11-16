int led=13; //initializing led pin in digital pin 13
int sensor=2;// initializing hall sensor in digital pin 8


void setup() {
pinMode(led, OUTPUT);// defining led as OUTPUT
pinMode(sensor, INPUT);// defining led as OUTPUT
Serial.begin(9600);//serial communication at 9600 bps.
}

void loop() {
 if (digitalRead(sensor)== HIGH) // read the digital value sensor and if the sensor value is high to mean there is light.
 {
  digitalWrite(led,HIGH); //turn on the led 
  Serial.println("HIGH");//print out "HIGH"
 }
  if (digitalRead(sensor)== LOW)// read the digital value sensor and if the sensor value is low to mean there is no light.
 {
  digitalWrite(led,LOW);//turn of the led
  Serial.println("LOW");//print out "HIGH"
 }
}
