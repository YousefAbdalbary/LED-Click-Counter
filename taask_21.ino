int red = 13;
int yellow = 12;
int green = 11 ;
int button = 10;
int counter = 0 ;
int reading = 0 ;
void setup()
{
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(button, INPUT);

}

void loop()
{
  reading =digitalRead(button);
  if (reading ==HIGH){
  counter++;
    delay(50);
    if (counter%4==1){
      digitalWrite(red,HIGH);
    }
    else if (counter%4==2){
       digitalWrite(yellow,HIGH);

    }
    else if (counter%4==3){
       digitalWrite(green,HIGH);

    }
    else if (counter%4==0){
       digitalWrite(red,LOW);
      digitalWrite(yellow,LOW);
      digitalWrite(green,LOW);

    }
    
  
  
  }
  
}