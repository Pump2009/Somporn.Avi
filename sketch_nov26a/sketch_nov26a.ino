int soil =A0;

void setup() {
  // put your setup code here, to run once:
  pinMode(soil,INPUT);
  pinMode(LED,OUTPUT);
  Serial .begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(analogRead(soil));
  if(analogRead(soil)>500){
     digitalWrite(LED,HIGH);
  }else{
      digitalWrite(LED,LOW);
  }
}
