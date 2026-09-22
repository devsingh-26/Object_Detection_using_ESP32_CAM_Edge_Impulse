#define FLASH_LED 4

void setup() {
  pinMode(FLASH_LED, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  digitalWrite(FLASH_LED, HIGH);
  Serial.println("LED ON");
  delay(1000);

  digitalWrite(FLASH_LED, LOW);
  Serial.println("LED OFF");
  delay(1000);
}
