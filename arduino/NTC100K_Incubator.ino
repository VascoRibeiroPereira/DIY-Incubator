int ThermistorPin = 0;
int Vo;
float R1 = 10000; // use a 100KOhms resistor
float logR2, R2, T, Tc, Tf;
float c1 = 1.009249522e-03, c2 = 2.378405444e-04, c3 = 2.019202697e-07;

unsigned long previousMillis = 0;        // will store last time
const long interval = 1000;           // interval at which to loop

void setup() {
//Serial.begin(9600); //uncomment to check in the serial monitor
pinMode(2, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT); // connected to S terminal of Relay
}

void loop() {

  unsigned long currentMillis = millis();
  
  if (currentMillis - previousMillis >= interval) {

  Vo = analogRead(ThermistorPin);
  R2 = R1 * (1023.0 / (float)Vo - 1.0);
  logR2 = log(R2);
  T = (1.0 / (c1 + c2*logR2 + c3*logR2*logR2*logR2));
  Tc = T - 273.15;


  //Serial.print("Temperature: "); //uncomment to check in the serial monitor
  //Serial.print(Tc); //uncomment to check in the serial monitor
  //Serial.println(" C");   //uncomment to check in the serial monitor

    if(Tc >= 37) 
  {
    digitalWrite(2, HIGH); // turn the Fan OFF
    digitalWrite(7, LOW); // turn the RELAY OFF
    digitalWrite(4, HIGH); // turn the RED LED ON
    digitalWrite(5, LOW); // turn the GREEN LED OFF
    digitalWrite(6, LOW); // turn the BLUE LED OFF
    delay(20000); //Stop in this state for 20 seconds
  }

      if(Tc <= 35)
  {
    digitalWrite(2, LOW); // turn the Fan OFF
    digitalWrite(7, HIGH); // turn the RELAY ON
    digitalWrite(4, LOW); // turn the RED LED OFF
    digitalWrite(5, LOW); // turn the GREEN LED OFF
    digitalWrite(6, HIGH); // turn the BLUE LED ON
  }

        if(Tc < 37 && Tc > 35)
  {
    digitalWrite(7, HIGH); // turn the RELAY ON
    digitalWrite(2, LOW); // turn the Fan OFF
    digitalWrite(4, LOW); // turn the RED LED OFF
    digitalWrite(5, HIGH); // turn the GREEN LED ON
    digitalWrite(6, LOW); // turn the BLUE LED OFF
  }
    previousMillis = currentMillis;
    }
}
