int potPin = 15;
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
}


void loop() {
  // put your main code here, to run repeatedly:
int potValue = analogRead(potPin);

Serial.print("Potentiometer  Value: ");
Serial.println(potValue);
delay(1000);
}
