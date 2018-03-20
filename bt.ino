char data;                
void setup() 
{
Serial.begin(9600);         
pinMode(11, OUTPUT); 
pinMode(10, OUTPUT); 
}
void loop()
{ 
if(Serial.available() > 0)  
{ Serial.print("\nbluetooth connected\n");
data = Serial.read();
 

 Serial.print("BLUETOOTH VALUE = ");
Serial.print(data)
;if(data=='0')
{
digitalWrite(11, LOW);
digitalWrite(10, LOW);
Serial.print("LED 1 OFF\nLED 2 OFF\n");  
  
}
if(data=='1')
{
digitalWrite(11, HIGH);
digitalWrite(10, HIGH);
Serial.print("LED 1 ON\nLED 2 ON\n");  
  
}
if(data=='2')
{
digitalWrite(11, LOW);
digitalWrite(10, HIGH);
 Serial.print("LED 1 ON \nLED 2 OFF\n"); 
}
if(data=='3')
{
digitalWrite(11, HIGH);
digitalWrite(10, LOW);
   Serial.print("LED 1 OFF \nLED 2 ON\n");
}
}

}
