//www.elegoo.com
//2016.12.08

int buzzer = 12;//the pin of the active buzzer
#define FrequencyA 4    //Aの周波数
#define FrequencyB 12    //Bの周波数
#define BuzzerTimeA 400 //Aがなる時間
#define BuzzerTimeB 200 //Bがなる時間

void setup()
{
 pinMode(buzzer,OUTPUT);//initialize the buzzer pin as an output
 Serial.begin(115200);
}
void loop()
{
 unsigned long i;
 unsigned long FA =FrequencyA;
 unsigned long FB =FrequencyB;
 //while(1)
 //{
   //output an frequency
   for(i=0;i<BuzzerTimeA;i++)
    {
    digitalWrite(buzzer,HIGH);
    delay(FrequencyA);//wait for 1ms
    digitalWrite(buzzer,LOW);
    delay(FrequencyA);//wait for 1ms
    Serial.println(FA);    //
    }
    //output another frequency
     for(i=0;i<BuzzerTimeB;i++)
      {
        digitalWrite(buzzer,HIGH);
        delay(FrequencyB);//wait for 2ms
        digitalWrite(buzzer,LOW);
        delay(FrequencyB);//wait for 2ms
        Serial.println(FB);
      }
  //}
} 
