int LM35 = A0;  
int nilaiLM35= 0;    
int LED1= 2;         
int LED2= 3;        
int LED3= 4;        
int LED4= 5;
int LED5= 6;
int LED6= 7;

void setup(){
Serial.begin(9600);      
pinMode(LED1, OUTPUT);    
pinMode(LED2, OUTPUT);    
pinMode(LED3, OUTPUT);
pinMode(LED4, OUTPUT);
pinMode(LED5, OUTPUT);
pinMode(LED6, OUTPUT);    
}

void loop(){
nilaiLM35 = analogRead(LM35);    
nilaiLM35 = nilaiLM35 * 0.488;   
Serial.println(nilaiLM35);       
delay(500);                      

if (nilaiLM35 <= 150)        
{
  digitalWrite(LED1, HIGH);  
  digitalWrite(LED2, HIGH);   
  digitalWrite(LED3, LOW); 
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  digitalWrite(LED6, LOW);
    
}
else if (nilaiLM35 >= 150 && nilaiLM35 <=200)    
{
  digitalWrite(LED1, LOW);  
  digitalWrite(LED2, LOW);   
  digitalWrite(LED3, HIGH); 
  digitalWrite(LED4, HIGH);
  digitalWrite(LED5, LOW);
  digitalWrite(LED6, LOW);
}

else if (nilaiLM35 >= 200)   
{
  digitalWrite(LED1, LOW);  
  digitalWrite(LED2, LOW);   
  digitalWrite(LED3, LOW); 
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, HIGH);
  digitalWrite(LED6, HIGH); 
}

else                        
{
  digitalWrite(LED1, LOW);  
  digitalWrite(LED2, LOW);   
  digitalWrite(LED3, LOW); 
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  digitalWrite(LED6, LOW); 
}

}
