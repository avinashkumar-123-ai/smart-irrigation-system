const int moisturePin = A0;
const int pumpLED = 8;

int moistureValue = 0;
int threshold = 500;

void setup() {
  pinMode(pumpLED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  moistureValue = analogRead(moisturePin);

  Serial.print("Soil Moisture: ");
  Serial.println(moistureValue);

  if (moistureValue < threshold) {
    digitalWrite(pumpLED, HIGH);
    Serial.println("Soil is dry - Pump ON");
  } else {
    digitalWrite(pumpLED, LOW);
    Serial.println("Soil is wet - Pump OFF");
  }

  delay(1000);
}