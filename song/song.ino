const int SPEAKER = 7;

const int LED_COUNT = 8;
int LED[ LED_COUNT ] = { A3, A4, A2, 6, 5, 9, 10, 11 };

const int A = 880;
const int B = 494;
const int C = 523;
const int D = 587;
const int E = 659;
const int F = 698;
const int G = 784;
const int REST = 0;

const int SIZE = 50;
int SONG[ SIZE ] = {
 C, C, G, G, A, A, G, REST, 
 F, F, E, E, D, D, C, REST,
 G, G, F, F, E, E, D, REST,
 G, G, F, F, E, E, D, REST,
 C, C, G, G, A, A, G, REST, 
 F, F, E, E, D, D, C, REST, REST, REST
};

void setup() {
  pinMode( SPEAKER, OUTPUT );
  for( int i=0; i< LED_COUNT; i++ ){
    pinMode( LED[i], OUTPUT );
  }
  randomSeed(analogRead(0));
}

void twinkle() {
  int twinkle = random( LED_COUNT );
  for( int i=0; i< LED_COUNT; i++ ){
    digitalWrite( LED[i], random(2) );
  }
}

int note_index = 0;
void loop() {
  int note = SONG[note_index];
  if (note == 0) {
    noTone(SPEAKER);
  } else {
    tone(SPEAKER, SONG[note_index] );
    twinkle();
  }
  note_index = (note_index + 1) % SIZE;

  delay(200);
  noTone(SPEAKER);
  delay(100);
}
  
