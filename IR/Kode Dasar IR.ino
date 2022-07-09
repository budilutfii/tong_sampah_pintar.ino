//Copy From dmdhrumilmistry


#include <IRremote.h>

int RECV_PIN = 3; IRrecv ir_recv(RECV_PIN); decode_results results;

void setup() { 
    Serial.begin(9600);
    
     // start recevier   
    ir_recv.enableIRIn(); 
}

void loop() {
    if (ir_recv.decode(&results))
    {
        // print HEX value of key pressed in serial monitor
        Serial.println(results.value, HEX); ir_recv.resume(); 
        } 
    }
