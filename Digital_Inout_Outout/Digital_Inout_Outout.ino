#define BLUE_BUTTON 9    //push switch. Push LED ON
#define YELLOW_BUTTON 8  //push switch. Push LED OFF
#define RED_LED 5         //LED Light

void setup()
{
pinMode(RED_LED, OUTPUT);   
pinMode(YELLOW_BUTTON, INPUT_PULLUP);
pinMode(BLUE_BUTTON, INPUT_PULLUP);
digitalWrite(RED_LED, LOW);   //LED is initialize Light OFF
Serial.begin(115200);     //Sireal monitor initialize
}

void loop() {
  // put your main code here, to run repeatedly:
int iBB;   //BLUE_BUTTONの出力
int iYB ;  //YELLOW_BUTTONの出力

iBB = digitalRead(BLUE_BUTTON);     //iBBに青色配線のpush buttonの出力を代入
iYB = digitalRead(YELLOW_BUTTON);   //iYBに黄色配線のpush buttonの出力を代入

if(iBB == HIGH && iYB == LOW){   //黄色配線ボタンのみ押されている時
    digitalWrite(RED_LED, LOW);     //LED OFF
  }else if(iBB == LOW && iYB == HIGH){   //青色配線ボタンのみ押されている時
    digitalWrite(RED_LED, HIGH);     //LED ON
  }
}
