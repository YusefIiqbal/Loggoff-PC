int ldr=7; //setting up ldr sensor 
int logoff=0;
void setup() {
 
  Serial.begin(9600);
  pinMode(ldr,INPUT);

  
}
 
void loop() {
  
  int light = digitalRead(ldr); // detecting light eithir light is on or off
  if(light==HIGH)
  {
   logoff=1;
  Serial.println(logoff);
 }
  else {
  logoff=0;
  Serial.println(logoff);
 
  }
  
  delay(1000);
  
}
