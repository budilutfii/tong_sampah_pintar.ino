//servo1 pin 3,servo2 pin 2
#include <SoftwareSerial.h> 
#include <Servo.h>
SoftwareSerial module_bluetooth(0, 1);
Servo servo1; 
Servo servo2;

char data = 0;             
void setup() 
{
  Serial.begin(9600);         
  pinMode(8, OUTPUT);  //inisialisasi LED menjadi output
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  servo1.attach(3);
  servo2.attach(2);

    
}
void loop()
{
  if(Serial.available() > 0)  
  {
    data = Serial.read();Serial.print(data);    //Pembacaan dan ditampilkan data yang masuk   
    Serial.print("\n"); 
    //Data yang masuk      
    if(data == '0'){
    servo1.write(180);
    delay(1000);
    servo1.write(0);
    }
    else if(data == '1'){      
    servo2.write(180);
    delay(1000);
    servo2.write(0);
    } 
                            
 
}}
