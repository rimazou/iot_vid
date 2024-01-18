const int yellowPin = 12;
const int magentaPin = 13;
const int cyanPin = 15;

void setup() {
  pinMode(magentaPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(cyanPin, OUTPUT);
}

void loop() {
  delay(500);

   analogWrite(yellowPin, 255);
   analogWrite(magentaPin, 255);
   analogWrite(cyanPin, 255);
   delay(2000);//BLUE
   analogWrite(yellowPin, 0);
   analogWrite(magentaPin, 0);
   analogWrite(cyanPin, 0);
   analogWrite(magentaPin, 255);
   analogWrite(cyanPin, 255);
   delay(2000);//GREEN
   analogWrite(yellowPin, 0);
   analogWrite(magentaPin, 0);
   analogWrite(cyanPin, 0);
   analogWrite(yellowPin, 255);
   analogWrite(cyanPin, 255);
   delay(2000);//RED
   analogWrite(yellowPin, 0);
   analogWrite(magentaPin, 0);
   analogWrite(cyanPin, 0);
   analogWrite(yellowPin, 255);
   analogWrite(magentaPin, 255);
   delay(2000);
  //  delay(500);
  //  analogWrite(yellowPin, 0);
  //  delay(5);  // Adjust delay for fading speed
  //  analogWrite(magentaPin, 255);
  //  delay(500);
  //  analogWrite(magentaPin, 0);
  //  delay(5);

  //  analogWrite(cyanPin, 255);
  //  delay(500);
  //  analogWrite(cyanPin, 0);
  //  delay(5);
}
