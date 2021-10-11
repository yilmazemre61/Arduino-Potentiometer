// C++ code
// Emre YILMAZ
// Date 16.06.2021

int rotationPin = A0; // The rotation sensor is plugged into pin A0
int RGBRedPin = 9; // The Red Led is set to pin 9
int RGBBluePin = 10; // The Blue Led is set to pin 10
int RGBGreenPin = 11; // The Green Led is set to pin 11
int waitTime; // It it the time that the Led will be wait
int data = 0; // Stores the data from the rotation pin

void setup(){
  Serial.begin(9600); // Sets the data rate to 9600 bps
  pinMode(rotationPin, INPUT);
  pinMode(RGBRedPin, OUTPUT); // Setup the RGBRed Led pin as an output
  pinMode(RGBGreenPin, OUTPUT); // Setup the RGBGreen Led pin as an output
  pinMode(RGBBluePin, OUTPUT); // Setup the RGBBlue Led pin as an output 
}

void loop(){
  waitTime = analogRead(rotationPin); // Reads the value from the A0 pin
  data = analogRead(rotationPin); // Reads the value from the A0 pin
  Serial.print("Rotation Value = ");
  Serial.println(data); // Prints the data to the serial monitor
  
  // Display Red
  digitalWrite(RGBRedPin, HIGH); // RGBRed Led is On
  delay(waitTime);
  digitalWrite(RGBRedPin, LOW); // RGBRed Led is Off
  
  // Display Green
  digitalWrite(RGBGreenPin, HIGH); // RGBGreen Led is On
  delay(waitTime);
  digitalWrite(RGBGreenPin, LOW); // RGBGreen Led is Off
  
  // Display Blue
  digitalWrite(RGBBluePin, HIGH); // RGBBlue Led is On
  delay(waitTime);
  digitalWrite(RGBBluePin, LOW); // RGBBlue Led is Off
  
}