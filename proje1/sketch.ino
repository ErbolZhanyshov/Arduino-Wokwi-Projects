const int button = 9;
const int led = 10;

int leddurum = LOW;
int eskiButtonDurum = HIGH;

void setup(){
  pinMode(button, INPUT_PULLUP);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  int yeniButtonDurum = digitalRead(button);
  if (eskiButtonDurum == HIGH && yeniButtonDurum == LOW){
    leddurum =! leddurum;
    digitalWrite(led, leddurum);
    delay(50);
  }
  eskiButtonDurum = yeniButtonDurum;
}