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
  digitalWrite(RED, HIGH);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);
  Serial.begin(115200);
  pinMode(BUTTON_START, INPUT_PULLUP);
  pinMode(BUTTON_STOP, INPUT_PULLUP);
}

void StopAct(){
  int Restart = 0;  //一時停止解除
  iB_START = digitalRead(BUTTON_START);     //黄色配線のpush buttonの出力を代入
  iB_STOP = digitalRead(BUTTON_STOP);     //オレンジ配線のpush buttonの出力を代入 
  
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
    tone(PinNumber, NotePitchMelody[i], NoteTimeMelody[i]);
    delay(NoteIntervalMelody[i]);
    StopAct();
  }
}

void APMMarchSabi(){    //play array NoteMelody
  for(int i = 0; i < SCORE_SABI_NOTES; i++)
  {
    tone(PinNumber, NotePitchSabi[i], NoteTimeSabi[i]);
    delay(NoteIntervalSabi[i]);    
    StopAct();
  }
}

void APMMarchAida(){    //play array NoteMelody
  for(int i = 0; i < SCORE_AIDA_NOTES; i++)
  {
    tone(PinNumber, NotePitchAida[i], NoteTimeAida[i]);
    delay(NoteIntervalAida[i]);
    StopAct();
  }
}

void LED_Paturn(){
  
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
