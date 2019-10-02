// Declarations

const int TrigPin = 2;
const int EchoPin = 3;

int notes [] = {262, 330, 392, 440}; // c,e,g,a

 
 

float cm;

void setup() {

Serial.begin(9600); //begin serial communication
pinMode(TrigPin, OUTPUT); //set up pin D2 for trigger pulse
pinMode(EchoPin, INPUT); //set up pin D3 to receive echo pulse

 pinMode (7, OUTPUT);// sound
 pinMode (8, OUTPUT);// green LED light
 pinMode (9, OUTPUT);// blue LED light
 pinMode (10, OUTPUT);// yellow LED light
 pinMode (11, OUTPUT);// red LED light

}

void loop(){

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



  // create an array of notes
// the numbers below correspond to the frequencies of // middle C, D, E, and F

int notes[ ] = {262, 330, 392, 440};//c,e,g,a

 

 // play the note corresponding to each value on A0
  if (cm > 50) {
    // play the first frequency in the array on pin 8
    tone(7, notes[0]);
    digitalWrite (8, HIGH);
    digitalWrite (9, LOW);
    digitalWrite (10,LOW);
    digitalWrite (11,LOW);
    delay(250);
  }



else if (cm <= 50 && cm > 30) {
    // play the second frequency in the array on pin 8
    tone(7, notes[1]);
    digitalWrite (8, LOW);
    digitalWrite (9, HIGH);
    digitalWrite (10,LOW);
    digitalWrite (11,LOW);
   delay(250);
  }
else if (cm <= 30 && cm > 10) {
    // play the third frequency in the array on pin 8
    tone(7, notes[2]);
     digitalWrite (8,LOW);
    digitalWrite (9, LOW);
    digitalWrite (10,HIGH);
    digitalWrite (11,LOW);
   delay(250);
  }
else if (cm <= 10 && cm >= 0) {
    // play the fourth frequency in the array on pin 8
    tone(7, notes[3]);
    digitalWrite (8, LOW);
    digitalWrite (9, LOW);
    digitalWrite (10,LOW);
    digitalWrite (11,HIGH);
  delay(250);
  }
  
 


else {
    // if the value is out of range, play no tone
    noTone(8);
  }
}


//LED lights
