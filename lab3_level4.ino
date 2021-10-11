// C++ code
// Emre YILMAZ
// 16.06.2021
int RGBRedPin = 9; // The Red Led is set to pin 9
int RGBBluePin = 10; // The Green Led is set to pin 10
int RGBGreenPin = 11; // The Blue Led is set to pin 11
int incomingByte = 0;
int waitTime = 2000;
void setup()
{
  Serial.begin(9600); // Opens serial port, sets data rate to 9600 bps
  pinMode(RGBRedPin, OUTPUT);
  pinMode(RGBGreenPin, OUTPUT);
  pinMode(RGBBluePin, OUTPUT);
  Serial.println("Please Type Combination of R, G, B Letters"); // It will be display on the Serial Monitor
}

void loop()
{
    // Sends data only when you receive data:
  if (Serial.available() > 0) {
    // Reads the incoming byte:
    incomingByte = Serial.read();

    // Prints what we get:
    Serial.print("I received: ");
    Serial.println(incomingByte, DEC);
    
  if(incomingByte == 82){ // The condition for Red Led to be displayed
    digitalWrite(RGBRedPin, HIGH); // RGBRed Led is On
    delay(waitTime);			   // Waits for 2 sec
    digitalWrite(RGBRedPin, LOW); // RGBRed led is Off
  } else if(incomingByte == 71){ // The condition for Green Led to be displayed
   	digitalWrite(RGBGreenPin, HIGH); // RGBGreen led is On
    delay(waitTime);		         // Waits for 2 sec
    digitalWrite(RGBGreenPin, LOW); // RGBGreen Led is Off
  } else if(incomingByte == 66){ // The condition for Blue Led to be displayed
    digitalWrite(RGBBluePin, HIGH); // RGBBlue Led is On
    delay(waitTime);				// Waits for 2 sec
    digitalWrite(RGBBluePin, LOW); // RGBBLue led is Off
  } else {  					   // The condition for invalid inputs
     Serial.println("Invalid Input!");
   }
  }
   
}
