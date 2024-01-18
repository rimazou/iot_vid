
const int sensorPin = 15;
const int ledPin = 21;
//Set up some global variables for the light level an initial value.
int lightInit;  // initial value
int lightVal;   // light reading
void setup()
{
  // We'll set up the LED pin to be an output.
  Serial.begin(921600);
  pinMode(ledPin, OUTPUT);
  lightInit = analogRead(sensorPin);
  //we will take a single reading from the light sensor and store it in the lightCal        //variable. This will give us a prelinary value to compare against in the loop
}

void loop()
{
  lightVal = analogRead(sensorPin); // read the current light levels
  Serial.println(lightVal);
  //if lightVal is less than our initial reading withing a threshold then it is dark.
  if(lightVal - lightInit <  50)
  {
      digitalWrite (ledPin, HIGH); // turn on light
  }
  //otherwise, it is bright
  else
  {
    digitalWrite (ledPin, LOW); // turn off light
  }
}

