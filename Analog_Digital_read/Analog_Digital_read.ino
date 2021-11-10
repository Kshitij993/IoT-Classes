int s = 5;              //initializing sensor pin with 5   
void setup() {
  pinMode(s,INPUT);     //setting up the mode in which the pin will be used
  Serial.begin(115200); // starting the serial monitor to see the results
}

void loop() 
{
  int v = digitalRead(s);   //if want to input in digital format that is 1 and 0
  //int v= analogRead(s);   //if want to input in analog format 
  Serial.print("value : ");
  Serial.print(v);           //printing the value.
  Serial.println();
}
