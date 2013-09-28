#define SENSOR A6
#define SPEAKER 7

void setup() {
  pinMode( SENSOR, INPUT );
  pinMode( SPEAKER, OUTPUT );
}

void loop() {
  int sensor_value = analogRead( SENSOR );
  int freq = map( sensor_value, 0, 1023, 500, 10000 );
  tone(SPEAKER, freq );
}
  
