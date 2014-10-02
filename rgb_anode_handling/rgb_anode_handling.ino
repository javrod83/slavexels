
#define GREEN 6
#define BLUE 5
#define RED 3

#define delayTime 10
void setup() {

rgb_setup();
}

int redVal;
int blueVal;
int greenVal;
 
void loop() {
 
  int redVal = 255;
  int blueVal = 0;
  int greenVal = 0;
  for( int i = 0 ; i < 255 ; i += 1 ){
    greenVal += 1;
    redVal -= 1;
    rgb_set_values(redVal,greenVal,blueVal);
    delay( delayTime );
  }
 
  redVal = 0;
  blueVal = 0;
  greenVal = 255;
  for( int i = 0 ; i < 255 ; i += 1 ){
    blueVal += 1;
    greenVal -= 1;
    rgb_set_values(redVal,greenVal,blueVal);

    delay( delayTime );
  }
 
  redVal = 0;
  blueVal = 255;
  greenVal = 0;
  for( int i = 0 ; i < 255 ; i += 1 ){
    redVal += 1;
    blueVal -= 1;
   rgb_set_values(redVal,greenVal,blueVal);

    delay( delayTime );
  }
}
