const int sensorPin = A0; 
const int isiticiLed = 9;
const int soutucuLed = 10; 
const int coksicakLed = 11;
const int buffer = 7; 

void setup(){
  pinMode(isiticiLed, OUTPUT);
  pinMode(soutucuLed, OUTPUT);
  pinMode(buffer, OUTPUT);
  pinMode(coksicakLed, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  int hamDeger = analogRead(sensorPin);
  float voltaj = hamDeger *  (5000.0 / 1024.0);
  float sicaklik = voltaj / 10.0;

  Serial.print("Sicaklik: ");
  Serial.print(sicaklik);
  Serial.print(" C ");

  if (sicaklik < 20.0){
    digitalWrite(isiticiLed, HIGH);
  }
  else if(sicaklik >= 25.0){
    digitalWrite(isiticiLed, LOW);
  }
  if(sicaklik > 30.0){
    digitalWrite(soutucuLed, HIGH);
  }
  else if(sicaklik <= 27.0){
    digitalWrite(soutucuLed, LOW);
  }
  if(sicaklik >= 40.0){
    tone(buffer, 1000);
    digitalWrite(coksicakLed, HIGH);
    digitalWrite(soutucuLed, LOW);
  }
  else{
    digitalWrite(coksicakLed, LOW);
    noTone(buffer);
  }
  delay(500);

}