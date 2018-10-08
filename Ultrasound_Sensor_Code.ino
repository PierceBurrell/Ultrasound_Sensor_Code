int triggerPin = 11; // Initialising Pin 11
int echoPin = 12 ; // Initialising Pin 12

long duration;
long cm;
long inches;



void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(9600); // Start Serial Monitor

  pinMode(triggerPin, OUTPUT); // Set PinMode To Output
  pinMode(echoPin, INPUT); // Set PinMode To Input

  
}

void loop() 
{
  // put your main code here, to run repeatedly:
  digitalWrite(triggerPin, LOW); // Turn Off Trigger Pin
  delayMicroseconds(5); // Wait 5 ms

  digitalWrite(triggerPin, HIGH); // Turn On Trigger Pin
  delayMicroseconds(10); // Wait 10 ms

  digitalWrite(triggerPin, LOW); // Turn Off Trigger Pin
  

}
