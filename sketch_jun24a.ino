#include <Keyboard.h>
void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  pinMode(16, INPUT_PULLUP);
  pinMode(14, INPUT_PULLUP);
  pinMode(15, INPUT_PULLUP);
  pinMode(A0, INPUT_PULLUP);
  pinMode(A1, INPUT_PULLUP);
  pinMode(A2, INPUT_PULLUP);
  pinMode(A3, INPUT_PULLUP);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(15,HIGH);
  digitalWrite(14,HIGH);
  digitalWrite(15,HIGH);
  digitalWrite(A0,HIGH);
  digitalWrite(A1,HIGH);
  digitalWrite(A2,HIGH);
  digitalWrite(A3,HIGH);
  Keyboard.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(2) == LOW) {
 Keyboard.press('4');
 delay(10);}
else
{
  Keyboard.release('4');
}
  if (digitalRead(3) == LOW) {
 Keyboard.press('e');
 delay(10);
  }
  else
{
  Keyboard.release('e');
}
  if (digitalRead(4) == LOW) {
 Keyboard.press('d');
 delay(10);
  }
else
{
  Keyboard.release('d');
}
  if (digitalRead(5) == LOW) {
 Keyboard.press('c');
 delay(10);}
else
{
  Keyboard.release('c');
}
  if (digitalRead(6) == LOW) {
 Keyboard.press('5');
 delay(10);
  }
  else
{
  Keyboard.release('5');
}
  if (digitalRead(7) == LOW) {
 Keyboard.press('r');
 delay(10);
  }
  else
{
  Keyboard.release('r');
}
  if (digitalRead(8) == LOW) {
 Keyboard.press('f'); 
 delay(10);
  }
  else
{
  Keyboard.release('f');
}
  if (digitalRead(9) == LOW) {
 Keyboard.press('v');
 delay(10);
  }
  else
{
  Keyboard.release('v');
}
  if (digitalRead(A3) == LOW) {
 Keyboard.press('7');
 delay(10);
  }
  else
{
  Keyboard.release('7');
}
  if (digitalRead(A2) == LOW) {
 Keyboard.press('y');
 delay(10);
  }
  else
{
  Keyboard.release('y');
}
  if (digitalRead(A1) == LOW) {
 Keyboard.press('h');
 delay(10);
  }
  else
{
  Keyboard.release('h');
}
  if (digitalRead(A0) == LOW) {
 Keyboard.press('n');
 delay(10);
  }
  else
{
  Keyboard.release('n');
}
  if (digitalRead(15) == LOW) {
 Keyboard.press('6');
 delay(10);
  }
  else
{
  Keyboard.release('6');
}
  if (digitalRead(14) == LOW) {
 Keyboard.press('t');
 delay(10);
  }
  else
{
  Keyboard.release('t');
}
  if (digitalRead(16) == LOW) {
 Keyboard.press('g');
 delay(10);
  }
  else
{
  Keyboard.release('g');
}
  if (digitalRead(10) == LOW) {
 Keyboard.press('b');
 delay(10);
  }
  else
{
  Keyboard.release('b');
}
  }
