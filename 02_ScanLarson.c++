/* PWM SÃO AS ENTRADAS QUE POSSUEM ~ */


int pin1 = 11;
int pin2 = 10;
int pin3 = 9;
int pin4 = 6;
int pin5 = 5;
int pin6 = 3;

void setup ()
{
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
  pinMode(pin5, OUTPUT);
  pinMode(pin6, OUTPUT);
}

void loop()
{
  int b1;
  int b2;
  int b3;
  int b4;
  int b5;
  int b6;

  for (int i =  0; i < 395; i++)
  {
    b1 = i;
    b2 = i - 70;
    b3 = i - 140;
    b4 = i - 210;
    b5 = i - 280;
    b6 = i - 350;
    
    if (b1 < 0)
      b1 = 0;
    else if (b1 > 255)
      b1 = 255;

     if (b2 < 0)
      b2 = 0;
     else if (b2 > 255)
      b2 = 255;

     if (b3 < 0)
      b3 = 0;
     else if (b3 > 255)
      b3 = 255;

     if (b4 < 0)
      b4 = 0;
     else if (b4 > 255)
      b4 = 255;

     if (b5 < 0)
      b5 = 0;
     else if (b5 > 255)
      b5 = 255;

     if (b6 < 0)
      b6 = 0;
     else if (b6 > 255)
      b6 = 255;

     analogWrite (pin1, b1);
     analogWrite (pin2, b2);
     analogWrite (pin3, b3);
     analogWrite (pin4, b4);
     analogWrite (pin5, b5);
     analogWrite (pin6, b6);

     delay(5);

    }


  for (int i =  0; i < 395; i++)
  {
    b1 = i - 350;
    b2 = i - 280;
    b3 = i - 210;
    b4 = i - 140;
    b5 = i - 70;
    b6 = i;

    if (b1 < 0)
      b1 = 0;
    else if (b1 > 255)
      b1 = 255;

     if (b2 < 0)
      b2 = 0;
     else if (b2 > 255)
      b2 = 255;

     if (b3 < 0)
      b3 = 0;
     else if (b3 > 255)
      b3 = 255;

     if (b4 < 0)
      b4 = 0;
     else if (b4 > 255)
      b4 = 255;

     if (b5 < 0)
      b5 = 0;
     else if (b5 > 255)
      b5 = 255;

     if (b6 < 0)
      b6 = 0;
     else if (b6 > 255)
      b6 = 255;

     analogWrite (pin1, b1);
     analogWrite (pin2, b2);
     analogWrite (pin3, b3);
     analogWrite (pin4, b4);
     analogWrite (pin5, b5);
     analogWrite (pin6, b6);

     delay(5);
    }

}

//Assista à explicação em: https://www.youtube.com/watch?v=qFx3cs9DhUI