const int dataPins[7] = {2, 3, 4, 5, 6, 7, 8};
const int modePin = 9;   
const int ledPin = 13;   
void setup() {
  for (int i = 0; i < 7; i++) {
    pinMode(dataPins[i], INPUT_PULLUP);
  }
  pinMode(modePin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  int evenParity = 0;

  for (int i = 0; i < 7; i++) {
    int bitVal = !digitalRead(dataPins[i]);
    evenParity = evenParity ^ bitVal; 
  }

  int mode = !digitalRead(modePin);
  int finalParityBit = evenParity ^ mode;

  digitalWrite(ledPin, finalParityBit);

  Serial.print("Mod: ");
  Serial.print(mode == 0 ? "EVEN" : "ODD ");
  Serial.print(" | Hesaplanan Parity Biti: ");
  Serial.println(finalParityBit);
  
  delay(200);
}