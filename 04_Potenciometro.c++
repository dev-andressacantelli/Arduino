RESISTOR LED 330
RESISTOR BOTAO 10

int ledPinRed = 13;
int ledPinGreen = 12;
int ledPinBlue = 8;
int button = 2;
int index = 0;
int potPin = A0;
int potStatus;
int brightness = 200;

void setup() 
{
  pinMode(ledPinRed, OUTPUT);
  pinMode(ledPinGreen, OUTPUT);
  pinMode(ledPinBlue, OUTPUT);
  pinMode(button, INPUT_PULLUP);
  pinMode(potPin, INPUT);
  Serial.begin (9600);
  digitalWrite(button, HIGH);
}

void loop() 
{

  if (digitalRead(button) == 00)
 {
    index++;
  
  if (index > 2) 
   {
    index = 0;    
   }
  }

delay(100);

  if (index == 0)
  {
  potencia(ledPinRed);
  digitalWrite(ledPinGreen, LOW);
  digitalWrite(ledPinBlue, LOW);
  }

else if (index == 1)
  {
  potencia(ledPinGreen);
  digitalWrite(ledPinRed, LOW);
  digitalWrite(ledPinBlue, LOW);
  }

else if (index == 2)
  {
  potencia(ledPinBlue);
  digitalWrite(ledPinGreen, LOW);
  digitalWrite(ledPinBlue, LOW);
  }
}


void potencia (int forca)
{
potStatus = analogRead(potPin);
brightness = map(potStatus, 0, 1023, 0, 255);

digitalWrite(forca, brightness);
delay(brightness);
Serial.print(potStatus);
}

//Assista à explicação em: https://www.youtube.com/watch?v=iRaWKKlFtz8&t=439s

  
  
  