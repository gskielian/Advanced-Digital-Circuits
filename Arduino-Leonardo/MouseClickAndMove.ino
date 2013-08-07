void setup()
{
 Mouse.begin(); 
 delay(1000);
 
 //this is how you move your mouse
 Mouse.move(500,500,0);
 //This is how you left click
 Mouse.click();
 //This is how you right click
 Mouse.click(MOUSE_RIGHT);
 //This is how you release the clicking
 Mouse.release();
}
void loop()
{
  delay(10);  

}
