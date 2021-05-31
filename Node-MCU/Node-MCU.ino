int led_pin BUILIN_LED

void setup() {
  Serial.begin(115200);
  pinMode(led_pin, INPUT);
  
}

void loop() {
  Serial.println("Turn LED on");
  digitalWrite(led_pin, HIGH);
  delay(500);

  Serial.println("Turn LED Off");
  digitalWrite(led_pin, LOW);
  delay(500);
}
