int sensorPin = 13; //choose any digital pin
int sensorVal = 1; 

void setup ()
{
pinMode(13, INPUT);

Serial.begin(9600);
}

void loop ()
{

sensorVal = digitalRead(sensorPin);

Serial.println(sensorVal);

delay(10);

}
