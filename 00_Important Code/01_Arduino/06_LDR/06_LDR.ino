//                                       http://electronicshobbycorner.blogspot.in
//                                       Rajeev
void setup()
{
  Serial.begin(9600);
  Serial.println("LDR Inteface");
}

void loop()
{
  int LDR_val;
  LDR_val=analogRead(A0);
  Serial.print("LDR ADC_Val => ");
  Serial.println(LDR_val);
  delay(500);
}
