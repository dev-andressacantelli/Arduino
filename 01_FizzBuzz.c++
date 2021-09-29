
int pinRed = 13;
int pinBlue = 7;
int pinOrange = 6;
int pinGreen = 5;

int d = 500;
int n1 = 3;
int n2 = 5;
int n3 = n1 + n2;
int maxValue = 50;
int i = 1;

void setup()
{
  while (i < 15) {
    pinMode (pinRed, OUTPUT);
    pinMode (pinBlue, OUTPUT);
    pinMode (pinOrange, OUTPUT);
    pinMode (pinGreen, OUTPUT);
    
    i++;

  }
}

void loop ()
{
  while (i <= maxValue){

  // "FizzBuzz" 
  if ((i % n3) == 0)
   {
    digitalWrite(pinRed, HIGH);
    delay (d);
    digitalWrite(pinRed, LOW);
    delay (d);
    }
 
  //"Fizz"
  else if ((i % n1) == 0)
        {
         digitalWrite(pinBlue, HIGH);
         delay (d);
         digitalWrite(pinBlue, LOW);
         delay (d);
        }

   //"Buzz"
   else if ((i % n2) == 0)
         {
          digitalWrite(pinOrange, HIGH);
          delay (d);
          digitalWrite(pinOrange, LOW);
          delay (d);
         }

   else
      {
       digitalWrite(pinGreen, HIGH);
       delay (d);
       digitalWrite(pinGreen, LOW);
       delay (d);
      }

    i++;

    }

}

//Assista à explicação em: https://www.youtube.com/watch?v=JijFD27wE4s

       