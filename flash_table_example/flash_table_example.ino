
#include <Flash.h>

/*
  This program demonstrates the basic uses of the Flash library.
*/

#define   RED 3
#define GREEN 6
#define  BLUE 5


/* named tables */
FLASH_TABLE(byte, color_table, 3 /* width of table */, 
                  {255,  0,  0}, // 
                  {255, 111, 0}, // 
                  {255,  0,123}, // 
                  {  0,  0,  0}, // 119 r
                  {255,  0,  0}, // 119 r
                  {  0,  0,  0}, // 119 r
                  {255,  0,255}, // 119 r                  {255,  0,  0}, // 
                  {255, 111, 0}, // 
                  {255,  0,123}, // 
                  {  0,  0,  0}, // 119 r
                  {255,  0,  0}, // 119 r
                  {  0,  0,  0}, // 119 r
                  {255,  0,255}, // 119 r                  {255,  0,  0}, // 
                  {255, 111, 0}, // 
                  {255,  0,123}, // 
                  {  0,  0,  0}, // 119 r
                  {255,  0,  0}, // 119 r
                  {  0,  0,  0}, // 119 r
                  {255,  0,255}, // 119 r                  {255,  0,  0}, // 
                  {255, 111, 0}, // 
                  {255,  0,123}, // 
                  {  0,  0,  0}, // 119 r
                  {255,  0,  0}, // 119 r
                  {  0,  0,  0}, // 119 r
                  {255,  0,255}, // 119 r                  {255,  0,  0}, // 
                  {255, 111, 0}, // 
                  {255,  0,123}, // 
                  {  0,  0,  0}, // 119 r
                  {255,  0,  0}, // 119 r
                  {  0,  0,  0}, // 119 r
                  {255,  0,255}, // 119 r                  {255,  0,  0}, // 
                  {255, 111, 0}, // 
                  {255,  0,123}, // 
                  {  0,  0,  0}, // 119 r
                  {255,  0,  0}, // 119 r
                  {  0,  0,  0}, // 119 r
                  {255,  0,255}, // 119 r                  {255,  0,  0}, // 
                  {255, 111, 0}, // 
                  {255,  0,123}, // 
                  {  0,  0,  0}, // 119 r
                  {255,  0,  0}, // 119 r
                  {  0,  0,  0}, // 119 r
                  {255,  0,255}, // 119 r                  {255,  0,  0}, // 
                  {255, 111, 0}, // 
                  {255,  0,123}, // 
                  {  0,  0,  0}, // 119 r
                  {255,  0,  0}, // 119 r
                  {  0,  0,  0}, // 119 r
                  {255,  0,255}, // 119 r                  {255,  0,  0}, // 
                  {255, 111, 0}, // 
                  {255,  0,123}, // 
                  {  0,  0,  0}, // 119 r
                  {255,  0,  0}, // 119 r
                  {  0,  0,  0}, // 119 r
                  {255,  0,255}, // 119 r                  {255,  0,  0}, // 
                  {255, 111, 0}, // 
                  {255,  0,123}, // 
                  {  0,  0,  0}, // 119 r
                  {255,  0,  0}, // 119 r
                  {  0,  0,  0}, // 119 r
                  {255,  0,255}, // 119 r                  {255,  0,  0}, // 
                  {255, 111, 0}, // 
                  {255,  0,123}, // 
                  {  0,  0,  0}, // 119 r
                  {255,  0,  0}, // 119 r
                  {  0,  0,  0}, // 119 r
                  {255,  0,255}, // 119 r                  {255,  0,  0}, // 
                  {255, 111, 0}, // 
                  {255,  0,123}, // 
                  {  0,  0,  0}, // 119 r
                  {255,  0,  0}, // 119 r
                  {  0,  0,  0}, // 119 r
                  {255,  0,255}, // 119 r                  {255,  0,  0}, // 
                  {255, 111, 0}, // 
                  {255,  0,123}, // 
                  {  0,  0,  0}, // 119 r
                  {255,  0,  0}, // 119 r
                  {  0,  0,  0}, // 119 r
                  {255,  0,255}, // 119 r                  {255,  0,  0}, // 
                  {255, 111, 0}, // 
                  {255,  0,123}, // 
                  {  0,  0,  0}, // 119 r
                  {255,  0,  0}, // 119 r
                  {  0,  0,  0}, // 119 r
                  {255,  0,255}, // 119 r                  {255,  0,  0}, // 
                  {255, 111, 0}, // 
                  {255,  0,123}, // 
                  {  0,  0,  0}, // 119 r
                  {255,  0,  0}, // 119 r
                  {  0,  0,  0}, // 119 r
                  {255,  0,255}, // 119 r                  {255,  0,  0}, // 
                  {255, 111, 0}, // 
                  {255,  0,123}, // 
                  {  0,  0,  0}, // 119 r
                  {255,  0,  0}, // 119 r
                  {  0,  0,  0}, // 119 r
                  {255,  0,255}, // 119 r                  {255,  0,  0}, // 
                  {255, 111, 0}, // 
                  {255,  0,123}, // 
                  {  0,  0,  0}, // 119 r
                  {255,  0,  0}, // 119 r
                  {  0,  0,  0}, // 119 r
                  {255,  0,255}, // 119 r                  {255,  0,  0}, // 
                  {255, 111, 0}, // 
                  {255,  0,123}, // 
                  {  0,  0,  0}, // 119 r
                  {255,  0,  0}, // 119 r
                  {  0,  0,  0}, // 119 r
                  {255,  0,255}, // 119 r                  {255,  0,  0}, // 
                  {255, 111, 0}, // 
                  {255,  0,123}, // 
                  {  0,  0,  0}, // 119 r
                  {255,  0,  0}, // 119 r
                  {  0,  0,  0}, // 119 r
                  {255,  0,255}, // 119 r                  {255,  0,  0}, // 
                  {255, 111, 0}, // 
                  {255,  0,123}, // 
                  {  0,  0,  0}, // 119 r
                  {255,  0,  0}, // 119 r
                  {  0,  0,  0}, // 119 r
                  {255,  0,255}, // 119 r                  {255,  0,  0}, // 
                  {255, 111, 0}, // 
                  {255,  0,123}, // 
                  {  0,  0,  0}, // 119 r
                  {255,  0,  0}, // 119 r
                  {  0,  0,  0}, // 119 r
                  {255,  0,255}, // 119 r                  {255,  0,  0}, // 
                  {255, 111, 0}, // 
                  {255,  0,123}, // 
                  {  0,  0,  0}, // 119 r
                  {255,  0,  0}, // 119 r
                  {  0,  0,  0}, // 119 r
                  {255,  0,255}, // 119 r                  {255,  0,  0}, // 
                  {255, 111, 0}, // 
                  {255,  0,123}, // 
                  {  0,  0,  0}, // 119 r
                  {255,  0,  0}, // 119 r
                  {  0,  0,  0}, // 119 r
                  {255,  0,255}, // 119 r                  {255,  0,  0}, // 
                  {255, 111, 0}, // 
                  {255,  0,123}, // 
                  {  0,  0,  0}, // 119 r
                  {255,  0,  0}, // 119 r
                  {  0,  0,  0}, // 119 r
                  {255,  0,255}, // 119 r                  {255,  0,  0}, // 
                  {255, 111, 0}, // 
                  {255,  0,123}, // 
                  {  0,  0,  0}, // 119 r
                  {255,  0,  0}, // 119 r
                  {  0,  0,  0}, // 119 r
                  {255,  0,255}, // 119 r                  {255,  0,  0}, // 
                  {255, 111, 0}, // 
                  {255,  0,123}, // 
                  {  0,  0,  0}, // 119 r
                  {255,  0,  0}, // 119 r
                  {  0,  0,  0}, // 119 r
                  {255,  0,255}, // 119 r                  {255,  0,  0}, // 
                  {255, 111, 0}, // 
                  {255,  0,123}, // 
                  {  0,  0,  0}, // 119 r
                  {255,  0,  0}, // 119 r
                  {  0,  0,  0}, // 119 r
                  {255,  0,255}, // 119 r                  {255,  0,  0}, // 
                  {255, 111, 0}, // 
                  {255,  0,123}, // 
                  {  0,  0,  0}, // 119 r
                  {255,  0,  0}, // 119 r
                  {  0,  0,  0}, // 119 r
                  {255,  0,255}, // 119 r                  {255,  0,  0}, // 
                  {255, 111, 0}, // 
                  {255,  0,123}, // 
                  {  0,  0,  0}, // 119 r
                  {255,  0,  0}, // 119 r
                  {  0,  0,  0}, // 119 r
                  {255,  0,255}, // 119 r                  {255,  0,  0}, // 
                  {255, 111, 0}, // 
                  {255,  0,123}, // 
                  {  0,  0,  0}, // 119 r
                  {255,  0,  0}, // 119 r
                  {  0,  0,  0}, // 119 r
                  {255,  0,255}, // 119 r                  {255,  0,  0}, // 
                  {255, 111, 0}, // 
                  {255,  0,123}, // 
                  {  0,  0,  0}, // 119 r
                  {255,  0,  0}, // 119 r
                  {  0,  0,  0}, // 119 r
                  {255,  0,255}, // 119 r                  {255,  0,  0}, // 
                  {255, 111, 0}, // 
                  {255,  0,123}, // 
                  {  0,  0,  0}, // 119 r
                  {255,  0,  0}, // 119 r
                  {  0,  0,  0}, // 119 r
                  {255,  0,255}, // 119 r                  {255,  0,  0}, // 
                  {255, 111, 0}, // 
                  {255,  0,123}, // 
                  {  0,  0,  0}, // 119 r
                  {255,  0,  0}, // 119 r
                  {  0,  0,  0}, // 119 r
                  {255,  0,255}, // 119 r                  {255,  0,  0}, // 
                  {255, 111, 0}, // 
                  {255,  0,123}, // 
                  {  0,  0,  0}, // 119 r
                  {255,  0,  0}, // 119 r
                  {  0,  0,  0}, // 119 r
                  {255,  0,255}, // 119 r                  {255,  0,  0}, // 
                  {255, 111, 0}, // 
                  {255,  0,123}, // 
                  {  0,  0,  0}, // 119 r
                  {255,  0,  0}, // 119 r
                  {  0,  0,  0}, // 119 r
                  {255,  0,255}, // 119 r                  {255,  0,  0}, // 
                  {255, 111, 0}, // 
                  {255,  0,123}, // 
                  {  0,  0,  0}, // 119 r
                  {255,  0,  0}, // 119 r
                  {  0,  0,  0}, // 119 r
                  {255,  0,255}, // 119 r                  {255,  0,  0}, // 
                  {255, 111, 0}, // 
                  {255,  0,123}, // 
                  {  0,  0,  0}, // 119 r
                  {255,  0,  0}, // 119 r
                  {  0,  0,  0}, // 119 r
                  {255,  0,255}, // 119 r
                  {  0,255,  0}, // 119 g
                  {  0,  0,255});// 127 b

String inputString = "";         // a string to hold incoming data
boolean stringComplete = false;  // whether the string is complete

void setup()
{
  Serial.begin(57600);
  
  rgb_setup();
  // This proves that all the big data is really in flash memory and not consuming RAM
  Serial.print("Mem: "); Serial.println(availableMemory());



  // Example 4: Two-dimensional tables
  // 4.a Print out the font table
  color_table.print(Serial); Serial.println();

  // 4.b Determine the size of the array
  Serial.print("Rows: "); Serial.println(color_table.rows());
  Serial.print("Cols: "); Serial.println(color_table.cols());
  Serial.print("RAM: "); Serial.println(sizeof(color_table));
  
  // 4.c Access individual elements of the array using [] notation
  Serial.print("r: ");
  Serial.print(color_table[0][0]);
  Serial.print("g: ");
  Serial.print(color_table[1][0]);
  Serial.print("b: ");
  Serial.print(color_table[2][0]);
  
  
}

void loop()
{
  
    for( int i = 0 ; i < color_table.rows() ; i += 1 ){
  
    rgb_set_values(color_table[i][0],color_table[i][1],color_table[i][2]);
    delay( 200 );
  }
}


void serialEvent() {
  while (Serial.available()) {
    // get the new byte:
    char inChar = (char)Serial.read(); 
    // add it to the inputString:
    inputString += inChar;
    // if the incoming character is a newline, set a flag
    // so the main loop can do something about it:
    if (inChar == '\n') {
      stringComplete = true;
    } 
  }
}


int availableMemory() 
{
  int size = 1024;
  byte *buf;
  while ((buf = (byte *) malloc(--size)) == NULL);
  free(buf);
  return size;
}
