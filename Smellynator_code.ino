#define sensor    A0                      //sensor on Analog 0


int gasLevel = 0;                         //int variable for gas level
const int green = 2;
const int yellow = 3;
const int red = 4;

void setup() {
  Serial.begin(9600);                     //start serial comms
  pinMode(sensor,INPUT);                  //set sensor for input
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);  
}

void loop() {
  gasLevel = analogRead(sensor);

  if(gasLevel < 150){
  digitalWrite(green, HIGH);
  delay (1000);
  digitalWrite (green, LOW);
  }
  else if (gasLevel > 150 && gasLevel < 400){
  digitalWrite(yellow, HIGH);
  delay (1000);
  digitalWrite (yellow, LOW);
  }
  else if (gasLevel > 400){
  digitalWrite(red, HIGH);
  delay (1000);
  digitalWrite(red, LOW);
  }
}
