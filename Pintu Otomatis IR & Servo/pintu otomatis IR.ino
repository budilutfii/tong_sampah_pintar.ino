#include <Servo.h>
 Servo s1;
 int val = 0 ; 

void setup() {
Serial.begin(9600); 
    s1.attach(3);
    pinMode(2,INPUT); 
    pinMode(5,OUTPUT);//led pin hijau 
    pinMode(6,OUTPUT);//led pin merah
    }

void loop() {
    val = digitalRead(2); // IR sensor Output Pin Terhubung
    Serial.println(val); // nilai dalam serial mpnitor di Arduino IDE/Droid
    delay(1);
    
    if(val == 1 ) {
        digitalWrite(5,HIGH); // PIN 5 ON
        digitalWrite(6,LOW); // PIN 6 OFF
        s1.write(90); 
        delay(2000);//Delay 2 detik  
    
        }
    else 
        {
        digitalWrite(5,LOW); // PIN 5 OFF
        digitalWrite(6,HIGH); // PIN 6 ON
        s1.write(0);
        }
    }
        
