void setup() {
  // Comunicación seria a 9600 baudios
  Serial.begin(9600);
}

void loop() {
 
  int ADC_SHARP = analogRead(A0);
  Serial.println(ADC_SHARP);
  delay(10);
}
