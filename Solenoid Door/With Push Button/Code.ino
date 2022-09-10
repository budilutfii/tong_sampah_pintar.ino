int relay=2;
int button1=3;
int button2=4;
void setup() {
pinMode(relay,OUTPUT);
pinMode(button1,INPUT_PULLUP);
pinMode(button2,INPUT_PULLUP);
}

void loop() {
int button1Data=digitalRead(button1);
int button2Data=digitalRead(button2);
if(button1Data==LOW)
{
digitalWrite(relay,LOW);
}
if(button2Data==LOW)
{
digitalWrite(relay,HIGH);
}
}
