void setup() {
  for (int i = 7; i < 13; i++){pinMode(i, OUTPUT);}
  randomSeed(analogRead(0));
  Serial.begin(9600);}
void loop() {
  int go = random(7, 13);
  for (int i = 7; i < 13; i++){
    if (i == go){analogWrite(i,255);
    } else {analogWrite(i,0);
    }
  }
  delay(analogRead(0));
  Serial.println(go);
}
