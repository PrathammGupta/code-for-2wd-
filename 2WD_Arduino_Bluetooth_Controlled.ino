/****
 * Software Engineering 1 : Robotics Project
 * Team : PIPEBOT
 * Student Name : Ereena Bagga
 * Student ID : 2010993040
 ****/

// Motor Driver Control Pins
const int LeftForwardMotor = 7;
const int LeftBackwardMotor = 6;
const int RightForwardMotor = 4;
const int RightBackwardMotor = 5;
char input;

void setup()
{
  // put your setup code here, to run once:
  // Configures all the motor driver control pins as output
  pinMode(LeftForwardMotor, OUTPUT); // [1]
  pinMode(LeftBackwardMotor, OUTPUT);
  pinMode(RightForwardMotor, OUTPUT);
  pinMode(RightBackwardMotor, OUTPUT);
  Serial.begin(9600); // [2]
}

void loop()
{
  // put your main code here, to run repeatedly:
  while (Serial.available() > 0) // [3] While the number of characters being read from the Serial port are greater than 0
  {
    input = Serial.read(); // [4] We read the incoming serial data
    Serial.println(input); // [5] and print it
  }
  if (input == 'S') // Input given to stop
  {
    // Configures the voltage of all the pins as LOW (i.e., 0V)
    digitalWrite(LeftForwardMotor, LOW); // [6]
    digitalWrite(LeftBackwardMotor, LOW);
    digitalWrite(RightForwardMotor, LOW);
    digitalWrite(RightBackwardMotor, LOW);
  }
  else if ( input == 'F') // Input given to move forward
  {
    // Configures the voltage of Forward Motor pins as HIGH (i.e., 5V) and Backward Motor pins as LOW (i.e., 0V)
    digitalWrite(LeftForwardMotor, HIGH); 
    digitalWrite(LeftBackwardMotor, LOW);
    digitalWrite(RightForwardMotor, HIGH);
    digitalWrite(RightBackwardMotor, LOW);
  }
  else if (input == 'B') // Input given to move backward
  {
    // Configures the voltage of Backward Motor pins as HIGH (i.e., 5V) and Forward Motor pins as LOW (i.e., 0V)
    digitalWrite(LeftForwardMotor, LOW); 
    digitalWrite(LeftBackwardMotor, HIGH);
    digitalWrite(RightForwardMotor, LOW);
    digitalWrite(RightBackwardMotor, HIGH);
  }

  else if (input == 'L') // Input given to turn left
  {
    // Configures the voltage of Left Forward Motor pin as HIGH (i.e., 5V) and remaining pins as LOW (i.e., 0V)
    digitalWrite(LeftForwardMotor, HIGH); 
    digitalWrite(LeftBackwardMotor, LOW);
    digitalWrite(RightForwardMotor, LOW);
    digitalWrite(RightBackwardMotor, HIGH);
  }
  else if (input == 'R') // Input given to turn right
  {
    // Configures the voltage of Right Forward Motor pin as HIGH (i.e., 5V) and remaining pins as LOW (i.e., 0V)
    digitalWrite(LeftForwardMotor, LOW); 
    digitalWrite(LeftBackwardMotor, HIGH);
    digitalWrite(RightForwardMotor, HIGH);
    digitalWrite(RightBackwardMotor, LOW);
  }
  else if (input == 'I') // Input given to turn right forwardly
  {
    // Configures the voltage of Right Forward Motor pin as HIGH (i.e., 5V) and remaining pins as LOW (i.e., 0V)
    digitalWrite(LeftForwardMotor, LOW); 
    digitalWrite(LeftBackwardMotor, LOW);
    digitalWrite(RightForwardMotor, HIGH);
    digitalWrite(RightBackwardMotor, LOW);
  }
  else if (input == 'J') // Input given to turn right backwardly
  {
    // Configures the voltage of Right Backward Motor pin as HIGH (i.e., 5V) and remaining pins as LOW (i.e., 0V)
    digitalWrite(LeftForwardMotor, LOW); 
    digitalWrite(LeftBackwardMotor, LOW);
    digitalWrite(RightForwardMotor, LOW);
    digitalWrite(RightBackwardMotor, HIGH);
  }
  else if (input == 'G') // Input given to turn left forwardly
  {
    // Configures the voltage of Left Forward Motor pin as HIGH (i.e., 5V) and remaining pins as LOW (i.e., 0V)
    digitalWrite(LeftForwardMotor, HIGH); 
    digitalWrite(LeftBackwardMotor, LOW);
    digitalWrite(RightForwardMotor, LOW);
    digitalWrite(RightBackwardMotor, LOW);
  }
  else if (input == 'H') // Input given to turn left backwardly
  {
    // Configures the voltage of Left Backward Motor pin as HIGH (i.e., 5V) and remaining pins as LOW (i.e., 0V)
    digitalWrite(LeftForwardMotor, LOW); 
    digitalWrite(LeftBackwardMotor, HIGH);
    digitalWrite(RightForwardMotor, LOW);
    digitalWrite(RightBackwardMotor, LOW);
  }
}
/****
 * [1] Reference for pinMode(pin,mode) Function: https://www.arduino.cc/reference/en/language/functions/digital-io/pinmode/
 * [2] Reference for Serial.begin(speed) Function: https://www.arduino.cc/reference/en/language/functions/communication/serial/begin/
 * [3] Reference for Serial.available() Function: https://www.arduino.cc/reference/en/language/functions/communication/serial/available/
 * [4] Reference for Serial.read() Function: https://www.arduino.cc/reference/en/language/functions/communication/serial/read/
 * [5] Reference for Serial.println(value) Function: https://www.arduino.cc/reference/en/language/functions/communication/serial/println/
 * [6] Reference for digitalWrite(pin,value) Function: https://www.arduino.cc/reference/en/language/functions/digital-io/digitalwrite/
****/
