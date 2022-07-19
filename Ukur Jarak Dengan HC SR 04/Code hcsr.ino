int Trig_Pin = 13; 
int echo_Pin = 12; 
void setup() {
  pinMode(Trig_Pin, OUTPUT);
  pinMode(echo_Pin, INPUT);
     } 
void loop() { 
    int pulse, inches, cm; digitalWrite(Trig_Pin,LOW); delayMicroseconds(2); digitalWrite(Trig_Pin, HIGH); delayMicroseconds(10); digitalWrite(Trig_Pin, LOW);
    pulse = pulseIn(echo_Pin, HIGH); 
    cm = pulse * 0.034 / 2; 
    inches = cm * 2.54; 
    
    Serial.print("Jarak (cm) :");
    Serial.println(cm);
    Serial.print("Jarak (inch) : ");
    Serial.println(inches); delay(500);
    } 
