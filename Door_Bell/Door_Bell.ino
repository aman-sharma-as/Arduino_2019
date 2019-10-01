int buttonPin=13;
int speakerPin=12;
int button;

void setup(){
pinMode(buttonPin,INPUT);
}

void loop(){
button=digitalRead(buttonPin);
if (button==HIGH){
tone(speakerPin,440,100);
delay(100);
tone(speakerPin,4699,100);
delay(100);
}else{
noTone(speakerPin);
}
delay(1);
}
