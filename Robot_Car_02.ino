
#define pmw 200
#define pmw1 175
#define d 5
#define e 5
#include <LiquidCrystal.h>
LiquidCrystal lcd(A0, A1, A2, A3, A4, A5);

bool a[8] = {0};
int k = 0;
int x, y;

void setup() {

  lcd.begin(16, 2);


  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(12, INPUT);
  pinMode(13, INPUT);
  analogWrite(6, 120);
  analogWrite(9, 100);
  delay(1000);
  analogWrite(6, 0);
  analogWrite(9, 0);

  analogWrite(10, 0);
  analogWrite(11, 0);
}
void loop()
{

  read_sensor_values();
  motor_control();
  lcd_print();
}


void read_sensor_values()
{
  a[0] = digitalRead(2);
  a[1] = digitalRead(3);
  a[2] = digitalRead(4);
  a[3] = digitalRead(5);
  a[4] = digitalRead(7);
  a[5] = digitalRead(8);
  a[6] = digitalRead(12);
  a[7] = digitalRead(13);
}
void lcd_print()
{
  lcd.clear();
  lcd.print(a[0]);
  lcd.print(a[1]);
  lcd.print(a[2]);
  lcd.print(a[3]);
  lcd.print(a[4]);
  lcd.print(a[5]);
  lcd.print(a[6]);
  lcd.print(a[7]);
  lcd.print(y);
  lcd.setCursor(0, 1);
  lcd.print("ROYAL ROOBET");
  lcd.print(k);
}
void forword()
{
  analogWrite(6, 125);
  analogWrite(9, 100);
}

void left()
{
  analogWrite(6, pmw);
  analogWrite(11, pmw1);
  delay(10);
  analogWrite(6, 0);
  analogWrite(11, 0);
}
void right()
{
  analogWrite(9, pmw);
  analogWrite(10, pmw1);
  delay(10);
  analogWrite(9, 0);
  analogWrite(10, 0);
}
void Stop()
{
  analogWrite(6, 0);
  analogWrite(9, 0);

  analogWrite(10, 0);
  analogWrite(11, 0);
}
void revers()
{
  analogWrite(10, 127);
  analogWrite(11, 127);
  analogWrite(6,   0);
  analogWrite(9,   0);
}
void motor_control()
{
  if ((a[0] == 0) && (a[1] == 0) && (a[2] == 0) && (a[3] == 1) && (a[4] == 1) && (a[5] == 0) && (a[6] == 0) && (a[7] == 0))

  {
    forword();
    delay(d);
  }
  else if ((a[0] == 0) && (a[1] == 0) && (a[2] == 0) && (a[3] == 1) && (a[4] == 1) && (a[5] == 1) && (a[6] == 0) && (a[7] == 0))
  {
    right();
    delay(d);
    forword();
    delay(e);
  }
  else if ((a[0] == 0) && (a[1] == 0) && (a[2] == 0) && (a[3] == 0) && (a[4] == 1) && (a[5] == 1) && (a[6] == 0) && (a[7] == 0))
  {
    right();
    delay(d);
    forword();
    delay(e);
  }
  else if ((a[0] == 0) && (a[1] == 0) && (a[2] == 0) && (a[3] == 0) && (a[4] == 1) && (a[5] == 1) && (a[6] == 1) && (a[7] == 0))
  {
    right();
    delay(d);
    forword();
    delay(e);

  }
  else if ((a[0] == 0) && (a[1] == 0) && (a[2] == 0) && (a[3] == 0) && (a[4] == 0) && (a[5] == 1) && (a[6] == 1) && (a[7] == 0))

  {
    right();
    delay(d);
    forword();
    delay(e);

  }
  else if ((a[0] == 0) && (a[1] == 0) && (a[2] == 0) && (a[3] == 0) && (a[4] == 0) && (a[5] == 1) && (a[6] == 1) && (a[7] == 1))

  {
    right();
    delay(d);
    forword();
    delay(e);

  }
  else if ((a[0] == 0) && (a[1] == 0) && (a[2] == 0) && (a[3] == 0) && (a[4] == 0) && (a[5] == 0) && (a[6] == 1) && (a[7] == 1))

  {
    right();
    delay(d);
    forword();
    delay(e);

  }
  else if ((a[0] == 0) && (a[1] == 0) && (a[2] == 0) && (a[3] == 0) && (a[4] == 0) && (a[5] == 0) && (a[6] == 0) && (a[7] == 1))

  {
    right();
    delay(d);
    forword();
    delay(e);
  }

  else if ((a[0] == 0) && (a[1] == 0) && (a[2] == 1) && (a[3] == 1) && (a[4] == 1 ) && (a[5] == 0) && (a[6] == 0) && (a[7] == 0))
  {
    left();
    delay(d);
    forword();
    delay(e);


  }
  else if ((a[0] == 0) && (a[1] == 0) && (a[2] == 1) && (a[3] == 1) && (a[4] == 0 ) && (a[5] == 0) && (a[6] == 0) && (a[7] == 0))
  {
    left();
    delay(d);
    forword();
    delay(e);
  }
  else if ((a[0] == 0) && (a[1] == 1) && (a[2] == 1) && (a[3] == 1) && (a[4] == 0 ) && (a[5] == 0) && (a[6] == 0) && (a[7] == 0))
  {
    left();
    delay(d);
    forword();
    delay(e);
  }
  else if ((a[0] == 0) && (a[1] == 1) && (a[2] == 1) && (a[3] == 0) && (a[4] == 0 ) && (a[5] == 0) && (a[6] == 0) && (a[7] == 0))
  {
    left();
    delay(d);
    forword();
    delay(e);

  }
  else if ((a[0] == 1) && (a[1] == 1) && (a[2] == 1) && (a[3] == 0) && (a[4] == 0 ) && (a[5] == 0) && (a[6] == 0) && (a[7] == 0))
  {
    left();
    delay(d);
    forword();
    delay(e);

  }
  else if ((a[0] == 1) && (a[1] == 1) && (a[2] == 0) && (a[3] == 0) && (a[4] == 0 ) && (a[5] == 0) && (a[6] == 0) && (a[7] == 0))
  {
    left();
    delay(d);
    forword();
    delay(e);

  }
  else if ((a[0] == 1) && (a[1] == 0) && (a[2] == 0) && (a[3] == 0) && (a[4] == 0 ) && (a[5] == 0) && (a[6] == 0) && (a[7] == 0))
  {

    left();
    delay(d);
    forword();
    delay(e);
  }
  else if (((a[0] == 1) && (a[1] == 1) && (a[2] == 1) && (a[3] == 1) && (a[4] == 1 ) && (a[5] == 0) && (a[6] == 0) && (a[7] == 0) && ((k == 0) || (k == 1))) || ((a[0] == 1) && (a[1] == 1) && (a[2] == 1) && (a[3] == 1) && (a[4] == 0 ) && (a[5] == 0) && (a[6] == 0) && (a[7] == 0) &&  (k == 0) || (k == 1)))
  {
    turn_L();
    delay(d);
    forword();
    delay(300);


    k++;
  }
  else if ((a[0] == 1) && (a[1] == 1) && (a[2] == 1) && (a[3] == 1) && (a[4] == 0 ) && (a[5] == 0) && (a[6] == 0) && (a[7] == 0) &&  (k == 2))
  {

    forword();
    delay(300);
    k = 0;
  }
  else if ((a[0] == 1) && (a[1] == 1) && (a[2] == 1) && (a[3] == 1) && (a[4] == 1 ) && (a[5] == 0) && (a[6] == 0) && (a[7] == 0) && (k == 2))
  {

    forword();
    delay(300);
    k = 0;
  }
  else if ((a[0] == 0) && (a[1] == 0) && (a[2] == 0) && (a[3] == 1) && (a[4] == 1 ) && (a[5] == 1) && (a[6] == 1) && (a[7] == 1))
  {

    turn_R();
    delay(d);
    forword();
    delay(e);
  }
  else if   ((a[0] == 0) && (a[1] == 0) && (a[2] == 0) && (a[3] == 0) && (a[4] == 1 ) && (a[5] == 1) && (a[6] == 1) && (a[7] == 1))
  {

    turn_R();
    delay(d);
    forword();
    delay(e);
  }
  else if   ((a[0] == 1) && (a[1] == 1) && (a[2] == 1) && (a[3] == 1) && (a[4] == 1 ) && (a[5] == 1) && (a[6] == 1) && (a[7] == 1))
  {
      forword();
    delay(1000);
    analogWrite(6, 0);
    analogWrite(9, 0);

    analogWrite(10, 0);
    analogWrite(11, 0);
 delay(10000);
  }
  else if   ((a[0] == 1) && (a[1] == 1) && (a[2] == 1) && (a[3] == 0) && (a[4] == 0 ) && (a[5] == 1) && (a[6] == 1) && (a[7] == 1))
  {

    
    forword();
    delay(1000);
  }
   else if   ((a[0] == 1) && (a[1] == 1) && (a[2] == 1) && (a[3] == 0) && (a[4] == 0 ) && (a[5] == 0) && (a[6] == 1) && (a[7] == 1))
  {

    
    forword();
    delay(1000);
  }
   else if   ((a[0] == 1) && (a[1] == 1) && (a[2] == 0) && (a[3] == 0) && (a[4] == 0 ) && (a[5] == 1) && (a[6] == 1) && (a[7] == 1))
  {

    
    forword();
    delay(1000);
  }
   else if   ((a[0] == 0) && (a[1] == 0) && (a[2] == 0) && (a[3] == 0) && (a[4] == 0 ) && (a[5] == 0) && (a[6] == 0) && (a[7] == 0))
  {

    
    revers();
    delay(100);
  }
  
  
  else
  {

  }


}
void turn_L()
{

  analogWrite(6, pmw);
  analogWrite(11, pmw1);
  delay(250);
  analogWrite(6, 0);
  analogWrite(11, 0);

}
void turn_R()
{
  analogWrite(9, pmw);
  analogWrite(10, pmw1);
  delay(250);
  analogWrite(9, 0);
  analogWrite(10, 0);
}
void rotat_a()
{
  analogWrite(6, 200);
  analogWrite(11, 200);
  delay(500);

  analogWrite(11, 0);
  analogWrite(6, 0);

}
void rotat_b()
{
  analogWrite(10, 200);
  analogWrite(5, 200);
  delay(750);

  analogWrite(10, 0);
  analogWrite(5, 0);
}
void turn_Y()
{

  analogWrite(11, 200);
  analogWrite(6, 200);
  delay(600);

  analogWrite(11, 0);
  analogWrite(6, 0);

}











