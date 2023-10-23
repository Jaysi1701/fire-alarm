
int V_G =0; 
int V_T =0;
void setup ()
{
pinMode (A0, INPUT); 
pinMode (7,OUTPUT); 
pinMode (4,OUTPUT); 
pinMode (A1, INPUT); 
pinMode (2,OUTPUT);
}
void loop ()
{
//Smoke Alarm
V_G = analogRead (A0);
if (V_G >=250){
tone(7,523,1000);// play tone60 (C5 = 523Hz)
digitalWrite (9,HIGH);
}
V_T = -40+0.488155* (analogRead (A1) -20);
if (V_T >=70) {
tone (7,523,1000);// play tone60 (C5 = 523Hz)
digitalWrite (12,HIGH);
}
delay (10);
}