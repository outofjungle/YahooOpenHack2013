#define RED 9
#define GREEN 10
#define BLUE 11
#define DELAY 1000.0

double shift;

void setup() {
  shift = DELAY/(3 * DELAY);
  pinMode( RED, OUTPUT );
  pinMode( GREEN, OUTPUT );
  pinMode( BLUE, OUTPUT );
}

void loop() {
  double theta = millis()/DELAY;
  switch_on( RED, theta );
  switch_on( GREEN, theta + 1*shift );
  switch_on( BLUE, theta + 2*shift );
}

void switch_on( int pin, double theta ) {
  analogWrite( pin, 128.0 + 128 * sin( theta * 2.0 * PI  ) );    
}
