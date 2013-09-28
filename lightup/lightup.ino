const int LED_COUNT = 5;
int LED[ LED_COUNT ] = { A3, A4, A2, 6, 5 };

void setup() {
  for( int i=0; i< LED_COUNT; i++ ){
    pinMode( LED[i], OUTPUT );
  }
}

void showLights(int count) {
 for( int led = 0; led < LED_COUNT; led++) {
   if( led < count ) {
     digitalWrite( LED[ led ], HIGH );
   } else {
     digitalWrite( LED[ led ], LOW );
   }
 }
}

int brightlights = 0;
int light_direction = 1;

void loop() {
  delay( 75 );
  showLights(brightlights);
  brightlights += light_direction;
  if ((brightlights > LED_COUNT) || (brightlights <= 0)) {
    light_direction = -light_direction;
  }
}
