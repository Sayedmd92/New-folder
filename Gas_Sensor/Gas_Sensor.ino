void setup() {
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
int data= analogRead(A0);
int mapper=map(data,0,1023,0,255);
if(mapper>200)
{
  Serial.println("Gas Detected");
 
}
else if(mapper<200)
{
  Serial.println("No Gas Detected");
}

}
