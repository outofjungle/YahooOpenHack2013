#define SPEAKER 7

void setup() {
  pinMode( SPEAKER, OUTPUT );
}

void loop() {
  tone(SPEAKER, millis() % 1000 );
}
  
