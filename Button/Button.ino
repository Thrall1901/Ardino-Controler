#define INPIN 7
#define OUTPIN 13
void setup() {
  // put your setup code here, to run once:
pinMode(OUTPIN, OUTPUT);
pinMode(INPIN, INPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
bool button;
button = digitalRead(INPIN);
digitalWrite(OUTPIN, button);
}
