//initialize colors 
int RedLED = 13;  
int GreenLED = 12;  
int BlueLED = 11;  

int ledState = LOW; 

unsigned long previousMillis = 0; 

//constant won't change
const long interval = 1000; //interval at which to blink 



 
void setup(){
  pinMode(RedLED, OUTPUT);
  pinMode(GreenLED, OUTPUT);
  pinMode(BlueLED, OUTPUT);
}
 
void loop(){
  
  unsigned long currentMillis = millis(); 
  
  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis; 
    
    if (ledState == LOW) {
      ledState = HIGH; 
    } else {
      ledState = LOW; 
    } 
    

    

    digitalWrite(GreenLED, ledState);

 
  

    digitalWrite(BlueLED, ledState);
    

 
  
    digitalWrite(RedLED, ledState);



  
  

}
}