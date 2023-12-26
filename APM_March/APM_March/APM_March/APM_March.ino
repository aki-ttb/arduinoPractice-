//groundは一番長い脚、red,ground,green,blueの順
#include "score.h"  // 音符の高さ、長さ、音符と音符の間隔
#include <avr/pgmspace.h> //音符の配列をフラッシュメモリに書き込むのに必要
#define BUTTON_START 4 //Yellow Harnes
//#define BUTTON_STOP 2 //Orange Harnes
#define SCORE_MELODY_NOTES 51 //Melodyの音符数
#define SCORE_SABI_NOTES 91 //SABIの音符数
#define SCORE_AIDA_NOTES 19 //Melodyの音符数
#define PinNumber 6

void setup() {
  // put your setup code here, to run once:
  for(int i = 9; i <= 11;i ++ ) 
  {
  pinMode(i, OUTPUT);
  digitalWrite(i, LOW);
  }
  pinMode(BUTTON_START, INPUT_PULLUP);
  //pinMode(BUTTON_STOP, INPUT_PULLUP);
}

void LED_Light(int RedValue, int GreenValue, int BlueValue){
  analogWrite(11, RedValue);
  analogWrite(10, GreenValue);
  analogWrite(9, BlueValue);
}

void LED_Paturn(int Note_Pitch){    //  音の高さによってLEDの色を変える
  switch(Note_Pitch)
  {
    case NOTE_C4:
    case NOTE_C5:
    //LED_Light(165, 0, 65);   //Purple
    LED_Light(0, 255, 255);   //aqua
    break;
    case NOTE_D4: 
    case NOTE_D5:
    //LED_Light(0, 0, 255);   //blue
    LED_Light(0, 128, 0);   //green
    break;
    case NOTE_E4:
    case NOTE_E5:
    //LED_Light(0, 255, 255);   //aqua
    LED_Light(255, 255, 0);   //yellow
    break;
    case NOTE_F4:
    case NOTE_FS4:
    case NOTE_F5:
    //LED_Light(0, 128, 0);   //green
    LED_Light(255, 65, 0);   //orange
    break;
    case NOTE_G4: 
    case NOTE_G5:
    //LED_Light(255, 255, 0);   //yellow
    LED_Light(255, 0, 0);   //red
    break;
    case NOTE_A4:
    case NOTE_A5:
    //LED_Light(255, 65, 0);   //orange
    LED_Light(165, 0, 65);   //Purple
    break;
    case NOTE_B3:
    case NOTE_B4:
    case NOTE_B5:
    //LED_Light(255, 0, 0);   //red
    LED_Light(0, 0, 255);   //blue
    break;
  }
}

void StopAct(){
  int Restart = 0;  //一時停止解除
  int iB_START = digitalRead(BUTTON_START);;     //黄色配線のpush buttonの出力を代入
  //int iB_STOP = digitalRead(BUTTON_STOP);     //オレンジ配線のpush buttonの出力を代入 
  
  LED_Light(0,0,0); //LED消灯
  if(iB_START == LOW)
  {
    delay(500);          
    while(Restart == 0)
    {
      iB_START = digitalRead(BUTTON_START);
      if(iB_START == LOW)
      Restart = 1;
    }
    Restart = 0;
  }
}

void APMMarch(int pitch, long time, long interval, int M_len){    //play array NoteMelody
    LED_Paturn(pitch);
    tone(PinNumber, pitch, time);
    delay(interval);
    StopAct();
}

void loop() {
  int iB_START = digitalRead(BUTTON_START);    //黄色配線のpush buttonの出力を代入
  int pitch;
  long time;
  long interval;

  // AnPanManMarch start
  if(iB_START == LOW)
  {
    for(int i = 0;i < 2; i++){
      for (int j = 0;  j < SCORE_MELODY_NOTES; j++)
      {
        // 2バイトのデータを読む。
        pitch = pgm_read_word(NotePitchMelody + j);
        time = pgm_read_dword(NoteTimeMelody + j);
        interval = pgm_read_dword(NoteIntervalMelody + j);
        APMMarch(pitch, time, interval, SCORE_MELODY_NOTES);
      }
      for (int j = 0;  j < SCORE_SABI_NOTES; j++)
      {
        // 2バイトのデータを読む。
        pitch = pgm_read_word(NotePitchSabi + j);
        time = pgm_read_dword(NoteTimeSabi + j);
        interval = pgm_read_dword(NoteIntervalSabi + j);
        APMMarch(pitch, time, interval, SCORE_SABI_NOTES);
      }
      //APMMarch(NotePitchMelody, NoteTimeMelody, NoteIntervalMelody, SCORE_MELODY_NOTES);
      //APMMarch(NotePitchSabi, NoteTimeSabi, NoteIntervalSabi, SCORE_SABI_NOTES);
    }
    for (int j = 0; j < SCORE_AIDA_NOTES; j++)
    {
      // 2バイトのデータを読む。
      pitch = pgm_read_word(NotePitchAida + j);
      time = pgm_read_dword(NoteTimeAida + j);
      interval = pgm_read_dword(NoteIntervalAida + j);
      APMMarch(pitch, time, interval, SCORE_AIDA_NOTES);
    }
    
    for (int j = 0; j < SCORE_SABI_NOTES; j++)
    {
      // 2バイトのデータを読む。
      pitch = pgm_read_word(NotePitchSabi + j);
      time = pgm_read_dword(NoteTimeSabi + j);
      interval = pgm_read_dword(NoteIntervalSabi + j);
      APMMarch(pitch, time, interval, SCORE_SABI_NOTES);
    }
      
    //APMMarch(NotePitchAida, NoteTimeAida, NoteIntervalAida, SCORE_AIDA_NOTES);
    //APMMarch(NotePitchSabi, NoteTimeSabi, NoteIntervalSabi, SCORE_SABI_NOTES);
  }
}
