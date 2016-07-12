int led = 3;
int sensor = A0;
String url = "https://";

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(led, OUTPUT);
  pinMode(sensor, INPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  Serial.println(analogRead(sensor));
  delay(100);
  
  if(analogRead(sensor) > 1000){
    Serial.println(url);
    digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(1000);              // wait for a second
    digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
    delay(1000);              // wait for a second
  }
  
}
