const int SIZE = 3;
int LED[ SIZE ] = { 9, 10, 11 };
int select = 0;

void setup() {
  for( int i=0; i<= SIZE; i++ ){
    pinMode( LED[i], OUTPUT );
    digitalWrite( LED[i], HIGH );
  }
}

void loop() {
  digitalWrite( LED[ select ], LOW );
  delay( 1000 );
  digitalWrite( LED[ select ], HIGH );
  delay( 1000 );
  select = ( select + 1 ) % SIZE;
}
  
