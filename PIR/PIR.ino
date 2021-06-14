#define PIR_PIN D5

void setup() {
  Serial.begin(115200);
  pinMode(PIR_PIN, INPUT);
}

void loop() {
  int motion_detected;
  motion_detected = digitalRead(PIR_PIN);
  Serial.println("motion_detected=" + String(motion_detected));
  if(motion_detected == 1)
  {
    Serial.println("motion detected!");
    // signaal debounce
    delay(100);
    motion_detected = digitalRead(PIR_PIN);
    while(motion_detected == 1)
    {
      Serial.println("wait until no deteting signal");
      delay(100);
      motion_detected = digitalRead(PIR_PIN);
    }
    Serial.println("Object was passed");
  }
  delay(100);
}
