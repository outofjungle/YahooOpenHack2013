int LED = 5;
int button = A5;

void setup() {
  pinMode( LED, OUTPUT );
  pinMode( button, INPUT );
}

void loop() {
  int pressed = digitalRead( button );
  if ( pressed == HIGH ) {
    digitalWrite( LED, HIGH );
  } else {
    digitalWrite( LED, LOW );
  }
}
  
