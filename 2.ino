float Analogin =0;
void setup() {
  Serial.begin(9600);
}

void loop() {
 for(int i=0;i<=5;i++)
 {
  Analogin =0.7* Analogin+0.3*analogRead(14);
 }
 Serial.println(Analogin);
float Vin = Analogin*2.5/4095;
Serial.println(Vin);
delay(500);
}
