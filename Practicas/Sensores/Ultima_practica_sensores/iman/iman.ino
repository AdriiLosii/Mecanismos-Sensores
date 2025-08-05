const int HALLPin = 2;
const int LEDPin = 13;
void setup() {
  pinMode(LEDPin, OUTPUT);
  pinMode(HALLPin, INPUT);
}
void loop() {
  if(digitalRead(HALLPin)==HIGH)
  {
    digitalWrite(LEDPin, HIGH);   
  }
  else
  {
    digitalWrite(LEDPin, LOW);
  }
}
