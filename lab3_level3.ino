// C++ code
// Emre YILMAZ
// Date 16.06.2021
int data;
int rotationPin =A0; // The rotation sensor is plugged into pin A0
int RGBRedPin = 9; // The Red Led is set to pin 9
int RGBBluePin = 10; // The Blue Led is set to pin 10
int RGBGreenPin = 11; // The Green Led is set to pin 11
int waitTime;


void setup(){
  Serial.begin(9600); // Sets the data rate to 9600 bps
  pinMode(rotationPin, INPUT);
  pinMode(RGBRedPin, OUTPUT); // Sets the RGBRed Led pin as an OUTPUT
  pinMode(RGBGreenPin, OUTPUT); // Sets the RGBGreen Led pin as an output
  pinMode(RGBBluePin, OUTPUT); // Sets the RGBBlue Led pin as an output
}

void loop(){
  waitTime = analogRead(rotationPin);
  data = analogRead(rotationPin);
  Serial.print("Rotation Value = ");
  Serial.println(data);
  
  // Display The Rainbow Colors
  if(data >= 0 && data < 170) // The condition for RED color to be displayed
  { 
    // Displays the Red
    digitalWrite(RGBRedPin, HIGH); // RGBRed Led is On
    delay(waitTime);
    digitalWrite(RGBRedPin, LOW); // RGBRed Led is Off
  } 
  else if(data >= 170 && data < 340) // The condition for Orange color to be displayed
  { 
	// Displays the Orange
    analogWrite(RGBRedPin, 255);
    analogWrite(RGBGreenPin, 128);
    analogWrite(RGBBluePin, 0);
  } 
  else if(data >= 340 && data < 510) // The condition for Yellow color to be displayed
  { 
    // Displays the Yellow
    digitalWrite(RGBRedPin, HIGH); // RGBRed Led is On
    digitalWrite(RGBGreenPin, HIGH); // RGBGreen Led is On
    delay(waitTime);
    digitalWrite(RGBRedPin, LOW); // RGBRed Led is Off
    digitalWrite(RGBGreenPin, LOW); // RGBGreen Led is Off
  } 
  else if(data >= 510 && data < 680) // The condition for Green color to be displayed
  { 
    // Displays the Green
    digitalWrite(RGBGreenPin, HIGH); // RGBGreen Led is On
    delay(waitTime);
    digitalWrite(RGBGreenPin, LOW); // RGBGreen Led is Off   
  } 
  else if(data >= 680 && data < 850) // The condition for Blue color to be displayed
  { 
  	// Displays the Blue
    digitalWrite(RGBBluePin, HIGH); // RGBBlue Led is On
    delay(waitTime);
    digitalWrite(RGBBluePin, LOW); // RGBBlue led is Off
  } else if(data >= 850 && data < 1024) // The condition for  Purple color to be displayed
  { 
  	// Displays the Purple
    digitalWrite(RGBRedPin, HIGH); // RGBRed Led is On
    digitalWrite(RGBBluePin, HIGH); // RGBBlue Led is On
    delay(waitTime);
    digitalWrite(RGBRedPin, LOW); // RGBRed LEd is Off
    digitalWrite(RGBBluePin, LOW); // RGBBlue Led is Off  
  } 

}
