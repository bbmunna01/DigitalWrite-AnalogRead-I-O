#define LED_PIN 6
#define POT_PIN A1

void setup() {
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);
  delay(1000);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  delay(500);
  digitalWrite(LED_PIN, LOW);
  delay(500);

  int potenValue = analogRead(POT_PIN);

  Serial.print("Analog value: ");
  Serial.println(potenValue);
  delay(1000);
}
