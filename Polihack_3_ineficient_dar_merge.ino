#include <string.h>
int pin1 = 12;
int pin2 = 13;
int pin3 = 11;
int pin4 = 10;
int pin5 = 9;
int pin6 = 8;
int TIME;
// 1 indexing
short pins[7] = {0, pin1, pin2, pin3, pin4, pin5, pin6};
String string;
String msg = "Please input string:";
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
  pinMode(pin5, OUTPUT);
  pinMode(pin6, OUTPUT);
  for (int i = 1; i <= 6; ++i) {
    digitalWrite(pins[i], HIGH);
  }
  delay(500);
  for (int i = 1; i <= 6; ++i) {
    digitalWrite(pins[i], LOW);
  }
  TIME=1000;  
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while (Serial.available() == 0);
  string = Serial.readString();
  for (int i = 0; i < string.length(); ++i) {
    char c = string[i];
    if (c >= 65 && c <= 90) {
      c+=32;
      digitalWrite(pins[1],LOW);
      digitalWrite(pins[2],LOW);
      digitalWrite(pins[3],LOW);
      digitalWrite(pins[4],HIGH);
      digitalWrite(pins[5],LOW);
      digitalWrite(pins[6],HIGH);
      delay(TIME);
    }
    if (c == 'a') {
      digitalWrite(pins[1],HIGH);
      digitalWrite(pins[2],LOW);
      digitalWrite(pins[3],LOW);
      digitalWrite(pins[4],LOW);
      digitalWrite(pins[5],LOW);
      digitalWrite(pins[6],LOW);
      
    }else if (c == 'b') {
      digitalWrite(pins[1],HIGH);
      digitalWrite(pins[2],HIGH);
      digitalWrite(pins[3],LOW);
      digitalWrite(pins[4],LOW);
      digitalWrite(pins[5],LOW);
      digitalWrite(pins[6],LOW);
      
    } 
    else if (c == 'c') {
      digitalWrite(pins[1],HIGH);
      digitalWrite(pins[2],LOW);
      digitalWrite(pins[3],LOW);
      digitalWrite(pins[4],HIGH);
      digitalWrite(pins[5],LOW);
      digitalWrite(pins[6],LOW);
    }
    else if (c == 'd') {
      digitalWrite(pins[1],HIGH);
      digitalWrite(pins[2],LOW);
      digitalWrite(pins[3],LOW);
      digitalWrite(pins[4],HIGH);
      digitalWrite(pins[5],HIGH);
      digitalWrite(pins[6],LOW);
      
    }
    else if (c == 'e') {
      digitalWrite(pins[1],HIGH);
      digitalWrite(pins[2],LOW);
      digitalWrite(pins[3],LOW);
      digitalWrite(pins[4],LOW);
      digitalWrite(pins[5],HIGH);
      digitalWrite(pins[6],LOW);
    }else if (c == 'f') {
      digitalWrite(pins[1],HIGH);
      digitalWrite(pins[2],HIGH);
      digitalWrite(pins[3],LOW);
      digitalWrite(pins[4],HIGH);
      digitalWrite(pins[5],LOW);
      digitalWrite(pins[6],LOW);
      
    }else if (c == 'g') {
      digitalWrite(pins[1],HIGH);
      digitalWrite(pins[2],HIGH);
      digitalWrite(pins[3],LOW);
      digitalWrite(pins[4],HIGH);
      digitalWrite(pins[5],HIGH);
      digitalWrite(pins[6],LOW);
      
    }else if (c == 'h') {
      digitalWrite(pins[1],HIGH);
      digitalWrite(pins[2],HIGH);
      digitalWrite(pins[3],LOW);
      digitalWrite(pins[4],LOW);
      digitalWrite(pins[5],HIGH);
      digitalWrite(pins[6],LOW);
      
    }else if (c == 'i') {
      digitalWrite(pins[1],LOW);
      digitalWrite(pins[2],HIGH);
      digitalWrite(pins[3],LOW);
      digitalWrite(pins[4],HIGH);
      digitalWrite(pins[5],LOW);
      digitalWrite(pins[6],LOW);
      
    }else if (c == 'j') {
      digitalWrite(pins[1],LOW);
      digitalWrite(pins[2],HIGH);
      digitalWrite(pins[3],LOW);
      digitalWrite(pins[4],HIGH);
      digitalWrite(pins[5],HIGH);
      digitalWrite(pins[6],LOW);
      
    }else if (c == 'k') {
      digitalWrite(pins[1],HIGH);
      digitalWrite(pins[2],LOW);
      digitalWrite(pins[3],HIGH);
      digitalWrite(pins[4],LOW);
      digitalWrite(pins[5],LOW);
      digitalWrite(pins[6],LOW);
      
    }else if (c == 'l') {
      digitalWrite(pins[1],HIGH);
      digitalWrite(pins[2],HIGH);
      digitalWrite(pins[3],HIGH);
      digitalWrite(pins[4],LOW);
      digitalWrite(pins[5],LOW);
      digitalWrite(pins[6],LOW);
      
    }else if (c == 'm') {
      digitalWrite(pins[1],HIGH);
      digitalWrite(pins[2],LOW);
      digitalWrite(pins[3],HIGH);
      digitalWrite(pins[4],HIGH);
      digitalWrite(pins[5],LOW);
      digitalWrite(pins[6],LOW);
      
    }else if (c == 'n') {
      digitalWrite(pins[1],HIGH);
      digitalWrite(pins[2],LOW);
      digitalWrite(pins[3],HIGH);
      digitalWrite(pins[4],HIGH);
      digitalWrite(pins[5],HIGH);
      digitalWrite(pins[6],LOW);
      
    }else if (c == 'o') {
      digitalWrite(pins[1],HIGH);
      digitalWrite(pins[2],LOW);
      digitalWrite(pins[3],HIGH);
      digitalWrite(pins[4],LOW);
      digitalWrite(pins[5],HIGH);
      digitalWrite(pins[6],LOW);
      
    }else if (c == 'p') {
      digitalWrite(pins[1],HIGH);
      digitalWrite(pins[2],HIGH);
      digitalWrite(pins[3],HIGH);
      digitalWrite(pins[4],HIGH);
      digitalWrite(pins[5],LOW);
      digitalWrite(pins[6],LOW);
      
    }else if (c == 'q') {
      digitalWrite(pins[1],HIGH);
      digitalWrite(pins[2],HIGH);
      digitalWrite(pins[3],HIGH);
      digitalWrite(pins[4],HIGH);
      digitalWrite(pins[5],HIGH);
      digitalWrite(pins[6],LOW);

    }else if (c == 'r') {
      digitalWrite(pins[1],HIGH);
      digitalWrite(pins[2],HIGH);
      digitalWrite(pins[3],HIGH);
      digitalWrite(pins[4],LOW);
      digitalWrite(pins[5],HIGH);
      digitalWrite(pins[6],LOW);

    }else if (c == 's') {
      digitalWrite(pins[1],LOW);
      digitalWrite(pins[2],HIGH);
      digitalWrite(pins[3],HIGH);
      digitalWrite(pins[4],HIGH);
      digitalWrite(pins[5],LOW);
      digitalWrite(pins[6],LOW);
      
    }else if (c == 't') {
      digitalWrite(pins[1],LOW);
      digitalWrite(pins[2],HIGH);
      digitalWrite(pins[3],HIGH);
      digitalWrite(pins[4],HIGH);
      digitalWrite(pins[5],HIGH);
      digitalWrite(pins[6],LOW);
      
    }else if (c == 'u') {
      digitalWrite(pins[1],HIGH);
      digitalWrite(pins[2],LOW);
      digitalWrite(pins[3],HIGH);
      digitalWrite(pins[4],LOW);
      digitalWrite(pins[5],LOW);
      digitalWrite(pins[6],HIGH);
      
    }else if (c == 'v') {
      digitalWrite(pins[1],HIGH);
      digitalWrite(pins[2],HIGH);
      digitalWrite(pins[3],HIGH);
      digitalWrite(pins[4],LOW);
      digitalWrite(pins[5],LOW);
      digitalWrite(pins[6],HIGH);
      
    }else if (c == 'w') {
      digitalWrite(pins[1],LOW);
      digitalWrite(pins[2],HIGH);
      digitalWrite(pins[3],LOW);
      digitalWrite(pins[4],HIGH);
      digitalWrite(pins[5],HIGH);
      digitalWrite(pins[6],HIGH);
      
    }else if (c == 'x') {
      digitalWrite(pins[1],HIGH);
      digitalWrite(pins[2],LOW);
      digitalWrite(pins[3],HIGH);
      digitalWrite(pins[4],HIGH);
      digitalWrite(pins[5],LOW);
      digitalWrite(pins[6],HIGH);
      
    }
    else if (c == 'y') {
      digitalWrite(pins[1],HIGH);
      digitalWrite(pins[2],LOW);
      digitalWrite(pins[3],HIGH);
      digitalWrite(pins[4],HIGH);
      digitalWrite(pins[5],HIGH);
      digitalWrite(pins[6],HIGH);
      
    }
    else if (c == 'z') {
      digitalWrite(pins[1],HIGH);
      digitalWrite(pins[2],LOW);
      digitalWrite(pins[3],HIGH);
      digitalWrite(pins[4],LOW);
      digitalWrite(pins[5],HIGH);
      digitalWrite(pins[6],HIGH);
      
    }else if (c == '.') {
      digitalWrite(pins[1],LOW);
      digitalWrite(pins[2],LOW);
      digitalWrite(pins[3],HIGH);
      digitalWrite(pins[4],LOW);
      digitalWrite(pins[5],LOW);
      digitalWrite(pins[6],LOW);
      
    }else if (c == '#') {
      digitalWrite(pins[1],LOW);
      digitalWrite(pins[2],LOW);
      digitalWrite(pins[3],HIGH);
      digitalWrite(pins[4],HIGH);
      digitalWrite(pins[5],HIGH);
      digitalWrite(pins[6],HIGH);
      
    }else if (c == ',') {
      digitalWrite(pins[1],LOW);
      digitalWrite(pins[2],HIGH);
      digitalWrite(pins[3],LOW);
      digitalWrite(pins[4],LOW);
      digitalWrite(pins[5],LOW);
      digitalWrite(pins[6],LOW);
      
    }else if (c == '?') {
      digitalWrite(pins[1],LOW);
      digitalWrite(pins[2],HIGH);
      digitalWrite(pins[3],LOW);
      digitalWrite(pins[4],LOW);
      digitalWrite(pins[5],LOW);
      digitalWrite(pins[6],HIGH);
      
    }else if (c == ';') {
      digitalWrite(pins[1],LOW);
      digitalWrite(pins[2],HIGH);
      digitalWrite(pins[3],HIGH);
      digitalWrite(pins[4],LOW);
      digitalWrite(pins[5],LOW);
      digitalWrite(pins[6],LOW);
      
    }else if (c == '!') {
      digitalWrite(pins[1],LOW);
      digitalWrite(pins[2],HIGH);
      digitalWrite(pins[3],HIGH);
      digitalWrite(pins[4],LOW);
      digitalWrite(pins[5],HIGH);
      digitalWrite(pins[6],LOW);
      
    }else if (c == '(') {
      digitalWrite(pins[1],HIGH);
      digitalWrite(pins[2],HIGH);
      digitalWrite(pins[3],LOW);
      digitalWrite(pins[4],LOW);
      digitalWrite(pins[5],LOW);
      digitalWrite(pins[6],HIGH);
      
    }
    else if (c == ')') {
      digitalWrite(pins[1],LOW);
      digitalWrite(pins[2],LOW);
      digitalWrite(pins[3],HIGH);
      digitalWrite(pins[4],HIGH);
      digitalWrite(pins[5],HIGH);
      digitalWrite(pins[6],LOW);
      
    }
    else if (c == '-') {
      digitalWrite(pins[1],LOW);
      digitalWrite(pins[2],LOW);
      digitalWrite(pins[3],HIGH);
      digitalWrite(pins[4],LOW);
      digitalWrite(pins[5],LOW);
      digitalWrite(pins[6],HIGH);
      
    }else if (c == '*') {
      digitalWrite(pins[1],LOW);
      digitalWrite(pins[2],LOW);
      digitalWrite(pins[3],HIGH);
      digitalWrite(pins[4],LOW);
      digitalWrite(pins[5],HIGH);
      digitalWrite(pins[6],LOW);
      
    }else if (c == '&') {
      digitalWrite(pins[1],HIGH);
      digitalWrite(pins[2],HIGH);
      digitalWrite(pins[3],HIGH);
      digitalWrite(pins[4],HIGH);
      digitalWrite(pins[5],LOW);
      digitalWrite(pins[6],HIGH);
      
    }else if (c == '"') {
      digitalWrite(pins[1],LOW);
      digitalWrite(pins[2],HIGH);
      digitalWrite(pins[3],HIGH);
      digitalWrite(pins[4],LOW);
      digitalWrite(pins[5],LOW);
      digitalWrite(pins[6],HIGH);
      
    }else if (c == ' ') {
      digitalWrite(pins[1],LOW);
      digitalWrite(pins[2],LOW);
      digitalWrite(pins[3],LOW);
      digitalWrite(pins[4],LOW);
      digitalWrite(pins[5],LOW);
      digitalWrite(pins[6],LOW);
      
    }else if (c == '"') {
      digitalWrite(pins[1],LOW);
      digitalWrite(pins[2],HIGH);
      digitalWrite(pins[3],HIGH);
      digitalWrite(pins[4],LOW);
      digitalWrite(pins[5],LOW);
      digitalWrite(pins[6],HIGH);
      
    }
    // Cat timp sta aprins
    delay(TIME);
  }
  for (int i = 1; i <= 6; ++i) {
    digitalWrite(pins[i], LOW);
  }
}