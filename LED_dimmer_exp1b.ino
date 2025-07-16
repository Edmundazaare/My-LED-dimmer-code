int potPin = 15;
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
}


void loop() {
  // put your main code here, to run repeatedly:
int potValue = analogRead(potPin);

int percentage = map(potValue,0,1023,0,100);

Serial.print("Potentiometer  Value: ");
Serial.println(potValue);

Serial.print("|Percentage:");
Serial.print(percentage);
Serial.println("%");
delay(1000);
}
