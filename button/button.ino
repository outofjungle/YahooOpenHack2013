int LED = 5;
int button = A5;

void setup() {
  pinMode( LED, OUTPUT );
  pinMode( button, INPUT );
  digitalWrite( button, HIGH ); // enable internal pull-up
}

void loop() {
  int pressed = digitalRead( button );
  if ( pressed == LOW ) {
    digitalWrite( LED, HIGH );
  } else {
    digitalWrite( LED, LOW );
  }
}
  
