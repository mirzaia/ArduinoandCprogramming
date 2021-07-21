float val=0.0;

void setup(){
  Serial.begin(9600);
}

void loop()
{
  val=analogRead(A0);
  val=(0.4887*val);
  Serial.println("TEMPERATUR ADALAH : " + String(val));
  delay(1500);
}

