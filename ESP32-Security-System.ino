const int PIR_PIN = 15; // PINO PIR
const int LED_PIN = 12; // PINO LED 
const int BUZZER_1 = 5; // PINO BUZZER 1
const int BUZZER_2 = 18; // PINO BUZZER 2

void setup() {
  Serial.begin(115200);
  pinMode(LED_PIN, OUTPUT);
  pinMode(PIR_PIN, INPUT);
  pinMode(BUZZER_1, OUTPUT);
  pinMode(BUZZER_2, OUTPUT);
  Serial.println("Iniciando Sistema de Detecção de Movimento!!!");
}

void loop() {
  if (digitalRead(PIR_PIN) == HIGH) {
    Serial.println("Movimento Detectado!!");
    digitalWrite(LED_PIN, HIGH);

    while (digitalRead(PIR_PIN) == HIGH) {
      tone(BUZZER_1, 1500); 
      tone(BUZZER_2, 1500);
      delay(300); 
      noTone(BUZZER_1);
      noTone(BUZZER_2);
      delay(200); 
    }
  } else {
    digitalWrite(LED_PIN, LOW);
    noTone(BUZZER_1);
    noTone(BUZZER_2);
  }
}
