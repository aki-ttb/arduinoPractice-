//groundは一番長い脚、red,ground,green,blueの順
//#include "pitches.h"  // 音階
//#include "temp_118.h"  // 1分間に四分音符118のテンポ
#include "score.h"  // 音符の高さ、長さ、音符と音符の間隔

#define BLUE 9
#define GREEN 10
#define RED 11
#define BUTTON_START 4 //Yellow Harnes
#define BUTTON_STOP 2 //Orange Harnes
#define SCORE_MELODY_NOTES 51 //Melodyの音符数
#define SCORE_SABI_NOTES 91 //SABIの音符数
#define SCORE_AIDA_NOTES 19 //Melodyの音符数
#define PinNumber 6
int iB_START;   //start button
int iB_STOP;    //stop button

void setup() {
  // put your setup code here, to run once:
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  digitalWrite(RED, LOW);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);
  Serial.begin(115200);
  pinMode(BUTTON_START, INPUT_PULLUP);
  pinMode(BUTTON_STOP, INPUT_PULLUP);
}

void LED_Light(int RedValue, int GreenValue, int BlueValue){
  analogWrite(RED, RedValue);
  analogWrite(GREEN, GreenValue);
  analogWrite(BLUE, BlueValue);
}

void LED_Paturn(int Note_Pitch){    //  音の高さによってLEDの色を変える
  switch(Note_Pitch)
  {
    case NOTE_C4:
    case NOTE_C5:
    LED_Light(128, 0, 128);   //Purple
    break;
    case NOTE_D4: 
    case NOTE_D5:
    LED_Light(0, 0, 255);   //blue
    break;
    case NOTE_E4:
    case NOTE_E5:
    LED_Light(0, 255, 255);   //aqua
    break;
    case NOTE_F4:
    case NOTE_FS4:
    case NOTE_F5:
    LED_Light(0, 128, 0);   //green
    break;
    case NOTE_G4: 
    case NOTE_G5:
    LED_Light(255, 255, 0);   //yellow
    break;
    case NOTE_A4:
    case NOTE_A5:
    LED_Light(255, 165, 0);   //orange
    break;
    case NOTE_B3:
    case NOTE_B4:
    case NOTE_B5:
    LED_Light(255, 0, 0);   //red
    break;
  }
}

void StopAct(){
  int Restart = 0;  //一時停止解除
  iB_START = digitalRead(BUTTON_START);     //黄色配線のpush buttonの出力を代入
  iB_STOP = digitalRead(BUTTON_STOP);     //オレンジ配線のpush buttonの出力を代入 
  
  LED_Light(0,0,0); //LED消灯
  if(iB_STOP == LOW)
  {          
    while(Restart == 0)
    {
      iB_START = digitalRead(BUTTON_START);
      if(iB_START == LOW)
      Restart = 1;
    }
    Restart = 0;
  }
}

void APMMarchMelody(){    //play array NoteMelody
  for(int i = 0; i < SCORE_MELODY_NOTES; i++)
  {
    LED_Paturn(NotePitchMelody[i]);
    tone(PinNumber, NotePitchMelody[i], NoteTimeMelody[i]);
    delay(NoteIntervalMelody[i]);
    StopAct();
  }
}

void APMMarchSabi(){    //play array NoteMelody
  for(int i = 0; i < SCORE_SABI_NOTES; i++)
  {
    LED_Paturn(NotePitchSabi[i]);
    tone(PinNumber, NotePitchSabi[i], NoteTimeSabi[i]);
    delay(NoteIntervalSabi[i]);    
    StopAct();
  }
}

void APMMarchAida(){    //play array NoteMelody
  for(int i = 0; i < SCORE_AIDA_NOTES; i++)
  {
    LED_Paturn(NotePitchAida[i]);
    tone(PinNumber, NotePitchAida[i], NoteTimeAida[i]);
    delay(NoteIntervalAida[i]);
    StopAct();
  }
}

void loop() {
  iB_START = digitalRead(BUTTON_START);    //黄色配線のpush buttonの出力を代入
  
  // AnPanManMarch start
  if(iB_START == LOW)
  {
    for(int i = 0; i < 2; i++)
    {
      APMMarchMelody();
      APMMarchSabi();
    }
    APMMarchAida();
    APMMarchSabi();
  }
}
