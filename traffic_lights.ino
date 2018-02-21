byte red=13;
byte yellow=12;
byte green=11;
void setup() {
  // put your setup code here, to run once:
pinMode(red,OUTPUT);
pinMode(yello,OUTPUT);
pinMode(green,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(13,1);
delay(1000);
digitalWrite(13,0);
delay(1000);
digitalWrite(12,1);
delay(1000);
digitalWrite(12,0);
delay(1000);
digitalWrite(11,1);
delay(1000);
digitalWrite(11,0);
delay(1000);
}
