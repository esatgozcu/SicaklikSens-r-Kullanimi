// Sensörümüzün derece başına 10 mV çıkış verir.    1000 mV = 1 V

const int analogPin = A0;
float gerilimDeger = 0;
int sensorDeger = 0;
float sicaklik = 0;

void setup() {
  
  Serial.begin(9600);         
}

void loop() {

 sensorDeger = analogRead(analogPin);

 Serial.print("Sensor Degeri : ");
 Serial.println(sensorDeger);

 gerilimDeger = analogRead(analogPin);
 gerilimDeger = (gerilimDeger/1023)*5000;

 Serial.print("Gerilim Degeri : ");
 Serial.print(gerilimDeger);
 Serial.println(" mV gerilim var.");

 sicaklik = gerilimDeger / 10.0;

 Serial.print("Sicaklik Degeri : ");
 Serial.print(sicaklik);
 Serial.println(" derece sicaklik var.");

 delay(1000);
}



