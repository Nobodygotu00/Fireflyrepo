// Declarations

const int TrigPin = 2;
const int EchoPin = 3;
float cm;


  void setup () {

Serial.begin(9600); //begin serial communication
pinMode(TrigPin, OUTPUT); //set up pin D2 for trigger pulse
pinMode(EchoPin, INPUT); //set up pin D3 to receive echo pulse
for (int pinNumber = 8); //Green LED light
for (int pinNumber1 = 9);// Blue LED light
for (int pinNumber2 = 10);// Yellow LED light
for (int pinNumber3 = 11;)// Red LED light

}

void loop() {

digitalWrite(TrigPin, LOW);
delayMicroseconds(2);
digitalWrite(TrigPin, HIGH); //send trigger pulse
delayMicroseconds(10); //sustain trigger pulse for 10 microseconds
digitalWrite(TrigPin, LOW); //end trigger pulse
cm = pulseIn(EchoPin, HIGH) / 58.0; //read the echo pulse duration and convert to cm
cm = (int(cm * 100.0)) / 100.0; //Keep two decimal places
Serial.print("Distance\t=\t"); //print to serial monitor
Serial.print(cm);
Serial.print("cm");
Serial.println(); //jump down to next line in serial monitor
delay(1000);



if (potVal <= 199) {
    digitalWrite(3, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(9, HIGH);
  }
  
    
  else if( potVal >= 200 &&  potVal < 399) {
    digitalWrite(3, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(9, HIGH);
    
    delay (250);
    
    digitalWrite(3, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(9, LOW);
    
    delay (250);
    
  }
