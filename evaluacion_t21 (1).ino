// C++ code

#define boton 2
#define Ledr 13;
#define Ledb 12;
#define Luz 3;
#define sensormov A5;
bool botonval;
int Luzval;
bool sensorval;

void setup()
{
  pinMode(boton, INPUT);
  pinMode(Ledr, OUTPUT);
  pinMode(Ledb, OUTPUT);

}

//xd
void loop()
{
  Luzval = digitalRead(3);
  botonval = digitalRead(2);
  digiralWrite(Ledr, LOW);
  digitalWrite(Ledb, LOW);
  if (botonval == HIGH && Luzval > 50)
  {
    if (sensorval == HIGH){
      
      digitalWrite(Ledr, HIGH);
      digitalWrite(Ledb, HIGH);
      delay(1000)
      
    }
  }
  delay(10); // Delay a little bit to improve simulation performance
}