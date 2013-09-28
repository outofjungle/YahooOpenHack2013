#define LED 5
int intensity = 0;
int delta = 5;

void setup() {
  pinMode( LED, OUTPUT );
}

void loop() {
  intensity += delta;
  analogWrite( LED, intensity ); 
  if ( intensity <= 0 || intensity >= 255 ) {
    delta = -delta;
  }
  delay( 20 );
}
  
