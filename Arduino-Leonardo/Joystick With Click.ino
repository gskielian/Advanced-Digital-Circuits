int xPos = 0;
int yPos = 0;

int xCal;
int yCal;

void setup()
{
 Mouse.begin(); 
 delay(1000);
 Serial.begin(9600);
 
 xCal = analogRead(A0);
 yCal = analogRead(A1);
}
void loop()
{
  delay(10);  
  xPos = analogRead(A0);
  yPos = analogRead(A1);
  Serial.println(xPos - xCal);
  Serial.println(yPos - yCal);
  Mouse.move((xPos-xCal)/10,(yPos-yCal)/10,0);
  Serial.println(digitalRead(5));
  if (digitalRead(5) == LOW)
  {
    Mouse.click();
    delay(100);
    Mouse.release();
  }
}
