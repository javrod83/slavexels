

void rgb_setup()
  {
      pinMode(GREEN, OUTPUT);
      pinMode(BLUE, OUTPUT);
      pinMode(RED, OUTPUT);
      digitalWrite(GREEN, HIGH);
      digitalWrite(BLUE, HIGH);
      digitalWrite(RED, HIGH);
  }


void rgb_set_values(byte r,byte g,byte b)
  {

      analogWrite(GREEN,255- r);
      analogWrite(BLUE, 255-g);
      analogWrite(RED,255- b);
  }

