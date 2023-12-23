
#include "pitches.h"  // 音階
#include "temp_118.h"  // 1分間に四分音符118のテンポ

#define BLUE 9
#define GREEN 10
#define RED 11
#define BUTTON_START 4 //Yellow Harnes
#define BUTTON_STOP 2 //Orange Harnes

uint8_t  PinNumber = 6; 
volatile int iB_START;   //start button
volatile int iB_STOP;    //stop button

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

void APMMarch_Melody(){
  //32 bar 118temp
    tone(PinNumber, NOTE_E5, HalfNote118_t);
    delay(HalfNote118);
    tone(PinNumber, NOTE_D5, HalfNote118_t);
    delay(HalfNote118);

    //33 bar 118temp
    tone(PinNumber, NOTE_E5, EighthNote118);
    delay(EighthNote118);
    tone(PinNumber, NOTE_D5, EighthNote118);
    delay(EighthNote118); 
    tone(PinNumber, NOTE_E5, EighthNote118);
    delay(EighthNote118);
    tone(PinNumber, NOTE_F5, EighthNote118);
    delay(EighthNote118);
    tone(PinNumber, NOTE_D5, QuarterNote118);
    delay(QuarterNote118); 
    tone(PinNumber, NOTE_B4, QuarterNote118);
    delay(QuarterNote118);

    //34 bar 118temp
    tone(PinNumber, NOTE_C5, QuarterNote118);
    delay(QuarterNote118);
    tone(PinNumber, NOTE_G4, QuarterNote118);
    delay(QuarterNote118); 
    tone(PinNumber, NOTE_A4, QuarterNote118); 
    delay(QuarterNote118);
    tone(PinNumber, NOTE_B4, QuarterNote118); 
    delay(QuarterNote118);

    //35 bar 118temp
    tone(PinNumber, NOTE_C5, HalfNoteDot118);
    delay(WholeNote118);

    //1 bar 118temp
    tone(PinNumber, NOTE_B3, EighthNote118);
    delay(EighthNote118);
    tone(PinNumber, NOTE_C4, EighthNote118);
    delay(EighthNote118);
    tone(PinNumber, NOTE_D4, EighthNote118);
    delay(EighthNote118); 
    tone(PinNumber, NOTE_E4, EighthNote118);
    delay(EighthNote118); 
    tone(PinNumber, NOTE_F4, QuarterNote118);
    delay(QuarterNote118);
    tone(PinNumber, NOTE_B4, QuarterNote118);
    delay(QuarterNote118);
    
    //2 bar 118temp
    tone(PinNumber, NOTE_G4, QuarterNote118);
    delay(QuarterNote118);
    tone(PinNumber, NOTE_F4, EighthNote118);
    delay(EighthNote118); 
    tone(PinNumber, NOTE_E4, EighthNote118);
    delay(EighthNote118);
    tone(PinNumber, NOTE_F4, HalfNote118); 
    delay(HalfNote118);
    
    //3 bar 118temp
    tone(PinNumber, NOTE_E4, QuarterNote118);
    delay(QuarterNote118);
    tone(PinNumber, NOTE_D4, EighthNote118);
    delay(EighthNote118); 
    tone(PinNumber, NOTE_C4, EighthNote118);
    delay(EighthNote118);
    tone(PinNumber, NOTE_D4, QuarterNote118); 
    delay(QuarterNote118);
    tone(PinNumber, NOTE_B3, QuarterNote118);
    delay(QuarterNote118);
    
    //4 bar 118temp
    tone(PinNumber, NOTE_C4, EighthNote118);
    delay(EighthNote118);
    tone(PinNumber, NOTE_C4, EighthNote118);
    delay(EighthNote118); 
    tone(PinNumber, NOTE_C4, EighthNote118);
    delay(EighthNote118);
    tone(PinNumber, NOTE_D4, EighthNote118); 
    delay(EighthNote118);
    tone(PinNumber, NOTE_C4, HalfNote118_t);  //二分音符仮置き
    delay(HalfNote118);

    //5 bar 118temp
    tone(PinNumber, NOTE_B3, EighthNote118);
    delay(EighthNote118);
    tone(PinNumber, NOTE_C4, EighthNote118);
    delay(EighthNote118);
    tone(PinNumber, NOTE_D4, EighthNote118);
    delay(EighthNote118); 
    tone(PinNumber, NOTE_E4, EighthNote118);
    delay(EighthNote118); 
    tone(PinNumber, NOTE_F4, QuarterNote118);
    delay(QuarterNote118);
    tone(PinNumber, NOTE_B4, QuarterNote118);
    delay(QuarterNote118);

    //6 bar 118temp
    tone(PinNumber, NOTE_G4, QuarterNote118);
    delay(QuarterNote118);
    tone(PinNumber, NOTE_F4, EighthNote118);
    delay(EighthNote118); 
    tone(PinNumber, NOTE_E4, EighthNote118);
    delay(EighthNote118);
    tone(PinNumber, NOTE_F4, HalfNote118_t);   //二分音符仮置き
    delay(HalfNote118);

    //7 bar 118temp
    tone(PinNumber, NOTE_E4, QuarterNote118);
    delay(QuarterNote118);
    tone(PinNumber, NOTE_D4, EighthNote118);
    delay(EighthNote118); 
    tone(PinNumber, NOTE_C4, EighthNote118);
    delay(EighthNote118);
    tone(PinNumber, NOTE_D4, QuarterNote118); 
    delay(QuarterNote118);
    tone(PinNumber, NOTE_B3, QuarterNote118);
    delay(QuarterNote118);

    //8 bar 118temp
    tone(PinNumber, NOTE_C4, QuarterNoteDot118);
    delay(QuarterNoteDot118);
    tone(PinNumber, NOTE_F4, EighthNote118);
    delay(EighthNote118); 
    tone(PinNumber, NOTE_B3, HalfNote118_t);   //二分音符仮置き
    delay(HalfNote118);

}

void APMMarch_Sabi(){
    //9 bar 118temp
    tone(PinNumber, NOTE_C4, EighthNote118);
    delay(EighthNote118);
    tone(PinNumber, NOTE_D4, EighthNote118);
    delay(EighthNote118); 
    tone(PinNumber, NOTE_C4, QuarterNote118);
    delay(QuarterNote118);
    tone(PinNumber, NOTE_C4, EighthNote118); 
    delay(EighthNote118);
    tone(PinNumber, NOTE_D4, EighthNote118);
    delay(EighthNote118);
    tone(PinNumber, NOTE_C4, QuarterNote118);
    delay(QuarterNote118);
    
    //10 bar 118temp
    tone(PinNumber, NOTE_C4, QuarterNote118);
    delay(QuarterNote118);
    tone(PinNumber, NOTE_F4, QuarterNote118);
    delay(QuarterNote118); 
    tone(PinNumber, NOTE_C4, QuarterNote118); 
    delay(HalfNote118);

    //11 bar 118temp
    tone(PinNumber, NOTE_D4, EighthNote118);
    delay(EighthNote118);
    tone(PinNumber, NOTE_E4, EighthNote118);
    delay(EighthNote118); 
    tone(PinNumber, NOTE_D4, QuarterNote118);
    delay(QuarterNote118);
    tone(PinNumber, NOTE_D4, EighthNote118); 
    delay(EighthNote118);
    tone(PinNumber, NOTE_E4, EighthNote118);
    delay(EighthNote118);
    tone(PinNumber, NOTE_D4, QuarterNote118);
    delay(QuarterNote118);
    
    //12 bar 118temp
    tone(PinNumber, NOTE_D4, QuarterNote118);
    delay(QuarterNote118);
    tone(PinNumber, NOTE_G4, QuarterNote118);
    delay(QuarterNote118); 
    tone(PinNumber, NOTE_D4, QuarterNote118); 
    delay(HalfNote118);

    //13 bar 118temp
    tone(PinNumber, NOTE_F4, EighthNote118);
    delay(EighthNote118);
    tone(PinNumber, NOTE_G4, EighthNote118);
    delay(EighthNote118); 
    tone(PinNumber, NOTE_F4, QuarterNote118);
    delay(QuarterNote118);
    tone(PinNumber, NOTE_F4, EighthNote118);
    delay(EighthNote118);
    tone(PinNumber, NOTE_G4, EighthNote118);
    delay(EighthNote118); 
    tone(PinNumber, NOTE_F4, QuarterNote118);
    delay(QuarterNote118);

    //14 bar 118temp
    tone(PinNumber, NOTE_F4, QuarterNote118);
    delay(QuarterNote118);
    tone(PinNumber, NOTE_B4, QuarterNote118);
    delay(QuarterNote118); 
    tone(PinNumber, NOTE_F4, QuarterNote118); 
    delay(QuarterNote118);
    tone(PinNumber, NOTE_D5, QuarterNote118); 
    delay(QuarterNote118);

    //14 bar 118temp
    tone(PinNumber, NOTE_C5, QuarterNote118);
    delay(QuarterNote118);
    tone(PinNumber, NOTE_G4, QuarterNote118);
    delay(QuarterNote118); 
    tone(PinNumber, NOTE_A4, QuarterNoteDot118); 
    delay(QuarterNoteDot118);
    tone(PinNumber, NOTE_G4, EighthNote118); 
    delay(EighthNote118);

    //15 bar 118temp
    tone(PinNumber, NOTE_F4, HalfNoteDot118);
    delay(WholeNote118);
    
    //16 bar 118temp
    tone(PinNumber, NOTE_D5, QuarterNote118);
    delay(QuarterNote118);
    tone(PinNumber, NOTE_D5, QuarterNote118);
    delay(QuarterNote118); 
    tone(PinNumber, NOTE_B4, QuarterNote118); 
    delay(HalfNote118);

    //17 bar 118temp
    tone(PinNumber, NOTE_G4, EighthNote118);
    delay(EighthNote118);
    tone(PinNumber, NOTE_FS4, EighthNote118);
    delay(EighthNote118); 
    tone(PinNumber, NOTE_G4, EighthNote118);
    delay(EighthNote118);
    tone(PinNumber, NOTE_A4, EighthNote118);
    delay(EighthNote118);
    tone(PinNumber, NOTE_B4, QuarterNote118);
    delay(QuarterNote118); 
    tone(PinNumber, NOTE_G4, QuarterNote118);
    delay(QuarterNote118);

    //18 bar 118temp
    tone(PinNumber, NOTE_C5, QuarterNoteDot118);
    delay(QuarterNoteDot118);
    tone(PinNumber, NOTE_D5, EighthNote118);
    delay(EighthNote118); 
    tone(PinNumber, NOTE_C5, QuarterNote118); 
    delay(QuarterNote118);
    tone(PinNumber, NOTE_B4, QuarterNote118); 
    delay(QuarterNote118);

    //19 bar 118temp
    tone(PinNumber, NOTE_A4, QuarterNote118);
    delay(QuarterNote118);
    tone(PinNumber, NOTE_G4, QuarterNote118);
    delay(QuarterNote118); 
    tone(PinNumber, NOTE_F4, QuarterNote118); 
    delay(HalfNote118);

    //20 bar 118temp
    tone(PinNumber, NOTE_D5, QuarterNote118);
    delay(QuarterNote118);
    tone(PinNumber, NOTE_D5, QuarterNote118);
    delay(QuarterNote118); 
    tone(PinNumber, NOTE_B4, QuarterNote118); 
    delay(HalfNote118);

    //21 bar 118temp
    tone(PinNumber, NOTE_G4, EighthNote118);
    delay(EighthNote118);
    tone(PinNumber, NOTE_FS4, EighthNote118);
    delay(EighthNote118); 
    tone(PinNumber, NOTE_G4, EighthNote118);
    delay(EighthNote118);
    tone(PinNumber, NOTE_A4, EighthNote118);
    delay(EighthNote118);
    tone(PinNumber, NOTE_B4, QuarterNote118);
    delay(QuarterNote118); 
    tone(PinNumber, NOTE_G4, QuarterNote118);
    delay(QuarterNote118);

    //22 bar 118temp
    tone(PinNumber, NOTE_C5, QuarterNoteDot118);
    delay(QuarterNoteDot118);
    tone(PinNumber, NOTE_D5, EighthNote118);
    delay(EighthNote118); 
    tone(PinNumber, NOTE_C5, QuarterNote118); 
    delay(QuarterNote118);
    tone(PinNumber, NOTE_A4, QuarterNote118); 
    delay(QuarterNote118);

    //23 bar 118temp
    tone(PinNumber, NOTE_B4, HalfNoteDot118);
    delay(WholeNote118);

    //24 bar 118temp
    tone(PinNumber, NOTE_D5, QuarterNoteDot118);
    delay(HalfNote118);
    tone(PinNumber, NOTE_B4, QuarterNoteDot118);
    delay(HalfNote118);

    //25 bar 118temp
    tone(PinNumber, NOTE_G4, EighthNote118);
    delay(EighthNote118);
    tone(PinNumber, NOTE_FS4, EighthNote118);
    delay(EighthNote118); 
    tone(PinNumber, NOTE_G4, EighthNote118);
    delay(EighthNote118);
    tone(PinNumber, NOTE_A4, EighthNote118);
    delay(EighthNote118);
    tone(PinNumber, NOTE_B4, QuarterNote118);
    delay(QuarterNote118); 
    tone(PinNumber, NOTE_G4, QuarterNote118);
    delay(QuarterNote118);

    //26 bar 118temp
    tone(PinNumber, NOTE_C5, QuarterNoteDot118);
    delay(QuarterNoteDot118);
    tone(PinNumber, NOTE_D5, EighthNote118);
    delay(EighthNote118); 
    tone(PinNumber, NOTE_C5, QuarterNote118); 
    delay(QuarterNote118);
    tone(PinNumber, NOTE_B4, QuarterNote118); 
    delay(QuarterNote118);

    //27 bar 118temp
    tone(PinNumber, NOTE_A4, QuarterNote118);
    delay(QuarterNote118);
    tone(PinNumber, NOTE_G4, QuarterNote118);
    delay(QuarterNote118); 
    tone(PinNumber, NOTE_F4, QuarterNote118); 
    delay(HalfNote118);

    //28 bar 118temp
    tone(PinNumber, NOTE_D5, QuarterNote118);
    delay(HalfNote118);
    tone(PinNumber, NOTE_B4, QuarterNote118);
    delay(HalfNote118);

    //29 bar 118temp
    tone(PinNumber, NOTE_G4, EighthNote118);
    delay(EighthNote118);
    tone(PinNumber, NOTE_FS4, EighthNote118);
    delay(EighthNote118); 
    tone(PinNumber, NOTE_G4, EighthNote118);
    delay(EighthNote118);
    tone(PinNumber, NOTE_A4, EighthNote118);
    delay(EighthNote118);
    tone(PinNumber, NOTE_B4, QuarterNote118);
    delay(QuarterNote118); 
    tone(PinNumber, NOTE_G4, QuarterNote118);
    delay(QuarterNote118);

    //30 bar 118temp
    tone(PinNumber, NOTE_C5, QuarterNoteDot118);
    delay(QuarterNoteDot118);
    tone(PinNumber, NOTE_D5, EighthNote118);
    delay(EighthNote118); 
    tone(PinNumber, NOTE_C5, QuarterNote118); 
    delay(QuarterNote118);
    tone(PinNumber, NOTE_A4, QuarterNote118); 
    delay(QuarterNote118);

    //31 bar 118temp
    tone(PinNumber, NOTE_B4, HalfNoteDot118);
    delay(WholeNote118);
}

void APMMarch(){
  // AnPanManMarch start

  for(int i = 0; i < 2; i++)
  {
    APMMarch_Melody();
    APMMarch_Sabi();
  }

  //71 bar 118temp
  tone(PinNumber, NOTE_B4, EighthNote118);
  delay(EighthNote118);
  tone(PinNumber, NOTE_C5, EighthNote118);
  delay(EighthNote118); 
  tone(PinNumber, NOTE_D5, EighthNote118);
  delay(EighthNote118);
  tone(PinNumber, NOTE_E5, EighthNote118);
  delay(EighthNote118);
  tone(PinNumber, NOTE_F5, QuarterNote118);
  delay(QuarterNote118); 
  tone(PinNumber, NOTE_B5, QuarterNote118);
  delay(QuarterNote118);

  //72 bar 118temp
  tone(PinNumber, NOTE_G5, QuarterNote118);
  delay(QuarterNote118);
  tone(PinNumber, NOTE_F5, EighthNote118);
  delay(EighthNote118); 
  tone(PinNumber, NOTE_E5, EighthNote118);
  delay(EighthNote118);
  tone(PinNumber, NOTE_F5, QuarterNote118);
  delay(QuarterNote118);
  tone(PinNumber, NOTE_B4, QuarterNote118);
  delay(QuarterNote118); 
  
  //73 bar 118temp
  tone(PinNumber, NOTE_E5, QuarterNote118);
  delay(QuarterNote118);
  tone(PinNumber, NOTE_D5, EighthNote118);
  delay(EighthNote118); 
  tone(PinNumber, NOTE_C5, EighthNote118);
  delay(EighthNote118);
  tone(PinNumber, NOTE_D5, QuarterNote118);
  delay(QuarterNote118);
  tone(PinNumber, NOTE_B4, QuarterNote118);
  delay(QuarterNote118);

  //73 bar 118temp
  tone(PinNumber, NOTE_C5, QuarterNoteDot118);
  delay(QuarterNoteDot118);
  tone(PinNumber, NOTE_D5, EighthNote118);
  delay(EighthNote118); 
  tone(PinNumber, NOTE_B4, HalfNote118_t);
  delay(HalfNote118);
  
  APMMarch_Sabi();  //sabi

}


void loop() {
  
  iB_START = digitalRead(BUTTON_START);     //黄色配線のpush buttonの出力を代入
  iB_STOP = digitalRead(BUTTON_STOP);     //オレンジ配線のpush buttonの出力を代入

  if(iB_START == LOW)   //スタートボタン押下
  {
    APMMarch();
  }
}
