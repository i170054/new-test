void off()
{

  for(int j = 2;j<9;j++)
  {
    digitalWrite(j,LOW);
   }
}

void disp(int a)
{
  switch(a)
  {
    case 0:
      for(int i = 2; i<9;i++)
      {
          digitalWrite(i,HIGH);
          delay(1000);
          off();
      }
      
      break;
     case 1:
      for(int i =3;i<=4;i++)
      {
          digitalWrite(i,HIGH);
          delay(1000);
          off();
      }
      break;
      case 2:
        digitalWrite(2,HIGH);
        digitalWrite(3,HIGH);
        digitalWrite(8,HIGH);
        digitalWrite(6,HIGH);
        digitalWrite(5,HIGH);
        delay(1000);
        off();
        break;
  }
}

void setup() 
{
  // put your setup code here, to run once:
  for(int i = 2; i<9;i++)
  {
    pinMode(i,OUTPUT);
  }

}

void loop() 
{
  // put your main code here, to run repeatedly:
  int l = 2;
  disp(l);
  int b;

}
