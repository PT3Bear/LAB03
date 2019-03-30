float sensorValue= 0;
float sensorVoltage;
float R1;
int ResisterValue =1000000;
void setup() {
  Serial.begin(9600);

}

void loop() {
  for(int i=0;i<=5;i++)
  {
   
    sensorValue =0.7* sensorValue+0.3*analogRead(A1);
  }
sensorVoltage = sensorValue*5/4095;
R1=sensorVoltage*(ResisterValue)/5;
 Serial.print(sensorValue);
 Serial.print("   ");
 Serial.print(sensorVoltage);
Serial.print("   ");
Serial.println(R1);
delay(500);
}
