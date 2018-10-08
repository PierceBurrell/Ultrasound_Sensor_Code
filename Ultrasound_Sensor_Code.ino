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
  
  // Read Signal From Sensor
  // Duration = t(time) In Microseconds From The Sender
  // Of The Ping To The Reception Of The Echo Off Of The Object <-- Paraphrase

  pinMode(echoPin, INPUT); // Set echoPin As Input To Take Readings
  duration = pulseIn(echoPin, HIGH); // duration = pulseIn From echPin set to HIGH

  // Convert Time Into Distance, Distance = Speed / Time
  // Distance = (Travel Time/2) x Speed Of Sound

  // The Speed Of Sound Is: 343m/s = 0.0343 Cm/uS = 1/29.1 Cm/uS
  // Or In Inches: 13503.9In/s = 0.0135In/uS = 1/74In/u
  
  cm = (duration/2) / 29.1; // Divided by 29.1 To Give Value In Cms
  inches = (duraction/2) / 74; // Divide by 74 To Give Value In Inches

  Serial.print(inches); // Prints Out Value For Inches Calculated
  Serial.print(" inches\n"); // Prints Out Text

  Serial.print(cm); // Prints Out Value For Cm Calculated
  Serial.print(" Cms\n"); // Prints Out Text

  Serial.println(); // Prints Out Serial Port In Readable Format

  delay(150); // Wait 150 ms
  
}
