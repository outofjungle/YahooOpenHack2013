const int SIZE = 5;
int LED[ SIZE ] = { A3, A4, A2, 6, 5 };
int select = 0;

void setup() {
  for( int i=0; i<= SIZE; i++ ){
    pinMode( LED[i], OUTPUT );
  }
}

void loop() {
  digitalWrite( LED[ select ], HIGH );
  delay( 100 );
  digitalWrite( LED[ select ], LOW );
  delay( 100 );
  select = ( select + 1 ) % SIZE;
}
