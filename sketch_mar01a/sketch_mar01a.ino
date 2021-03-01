int soil = A1;   //connect soil to A0
int value= 0; //define value 0
const int ldr = 7;
const int led = 13;
void setup() 
{
  pinMode(8,OUTPUT);
  pinMode(A1,INPUT);
   pinMode(ldr,INPUT);//define pin as input sensor
  pinMode(led,OUTPUT);//define pin as output sensor
 Serial.begin(9600); //this is not necessary-but to show value to pc

}
void loop()
{
 value = analogRead(soil );  //read value-analog from A0
 Serial.println(value);    
 delay(10);
 int y =digitalRead(ldr);//read the sensor
if (y==1){
  digitalWrite(led,HIGH);//turn on led
}else{digitalWrite(led,LOW);//turn off led
}
delay(500);
 if(value>590)  //change the value as you wish
 {
   digitalWrite(8, LOW);   
   delay(100);    
 }
 else
 {
     digitalWrite(8,HIGH);   
   delay(100);
 }
}

  
