const int sensorPin = PA5;
const int ledPin = PC13;

int lightCal;
int lightVal;
void setup(){
  pinMode(ledPin, OUTPUT);
  lightCal = analogRead(sensorPin);
  Serial.begin(9600);
}

void loop(){
  lightVal = analogRead(sensorPin);
  Serial.println(lightVal);
  if (lightVal < lightCal - 40){
    digitalWrite(PC13, LOW);
  }
  else{
    digitalWrite(PC13, HIGH);
  }
}
