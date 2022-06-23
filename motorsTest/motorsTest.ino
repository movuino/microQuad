// the number of the LED pin
const int ledPin = 26;  // 16 corresponds to GPIO16

// setting PWM properties
const int freq = 5000;
const int ledChannel = 0;
const int resolution = 8;

void setup(){
  pinMode(26,OUTPUT);
  pinMode(27,OUTPUT);
  pinMode(14,OUTPUT);
  pinMode(12,OUTPUT);
  // configure LED PWM functionalitites
  ledcSetup(ledChannel, freq, resolution);
  // attach the channel to the GPIO to be controlled
  ledcAttachPin(12, ledChannel);
  ledcAttachPin(14, ledChannel);

}

void loop(){
  digitalWrite(26,LOW);
  digitalWrite(27,LOW);
 // digitalWrite(12,LOW);
 // digitalWrite(14,LOW);
  ledcWrite(0,127);
   delay(500);
  // increase the LED brightness
 /* for(int dutyCycle = 0; dutyCycle <= 255; dutyCycle++){
    // changing the LED brightness with PWM
    ledcWrite(ledChannel, dutyCycle);
    delay(15);
  }

  // decrease the LED brightness
  for(int dutyCycle = 255; dutyCycle >= 0; dutyCycle--){
    // changing the LED brightness with PWM
    ledcWrite(ledChannel, dutyCycle);
    delay(15);
  }*/
  digitalWrite(26,LOW);
  digitalWrite(27,LOW);
  //digitalWrite(12,LOW);
   ledcWrite(0,0);
  //digitalWrite(14,LOW);
   delay(2000);
}
