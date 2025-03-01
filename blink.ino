const int ledPin = 1; // PB1 en el ATtiny85

void setup() {
  pinMode(ledPin, OUTPUT); // Configurar PB1 como salida
}

void loop() {
  digitalWrite(ledPin, HIGH); // Encender LED
  delay(1000);                 // Esperar 500 ms
  digitalWrite(ledPin, LOW);  // Apagar LED
  delay(1000);                 // Esperar 500 ms
}
