/*************************************************
 * AnPanMan March's Score arry 
 *************************************************/
#include "pitches.h"  // 音階
#include "temp_118.h"  // 1分間に四分音符118のテンポ

const PROGMEM int NotePitchMelody[] = {   //音符の高さをフラッシュメモリに書き込み
  NOTE_E5, NOTE_D5, 
  NOTE_E5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_D5, NOTE_B4,
  NOTE_C5, NOTE_G4, NOTE_A4, NOTE_B4,
  NOTE_C5,
  NOTE_B3, NOTE_C4, NOTE_D4, NOTE_E4, NOTE_F4, NOTE_B4, 
  NOTE_G4, NOTE_F4, NOTE_E4, NOTE_F4, 
  NOTE_E4, NOTE_D4, NOTE_C4, NOTE_D4, NOTE_B3, 
  //4 bar 118temp
  NOTE_C4, NOTE_C4, NOTE_C4, NOTE_D4, NOTE_C4, 
  //5 bar 118temp
  NOTE_B3, NOTE_C4, NOTE_D4, NOTE_E4, NOTE_F4, NOTE_B4, 
  //6 bar 118temp
  NOTE_G4, NOTE_F4, NOTE_E4, NOTE_F4, 
  //7 bar 118temp
  NOTE_E4, NOTE_D4, NOTE_C4, NOTE_D4, NOTE_B3,
  //8 bar 118temp
  NOTE_C4, NOTE_F4, NOTE_B3 //OK
};

const PROGMEM int NotePitchSabi[] = {   //音符の高さ sabi
  //9 bar 118temp
  NOTE_C4, NOTE_D4, NOTE_C4, NOTE_C4, NOTE_D4, NOTE_C4,
  //10 bar 118temp
  NOTE_C4, NOTE_F4, NOTE_C4, 
    //11 bar 118temp
  NOTE_D4, NOTE_E4, NOTE_D4, NOTE_D4, NOTE_E4, NOTE_D4,
    //12 bar 118temp
  NOTE_D4, NOTE_G4, NOTE_D4,
    //13 bar 118temp
  NOTE_F4, NOTE_G4, NOTE_F4, NOTE_F4, NOTE_G4, NOTE_F4, 
    //14 bar 118temp
  NOTE_F4, NOTE_B4, NOTE_F4, NOTE_D5,
    //14 bar 118temp
  NOTE_C5, NOTE_G4, NOTE_A4, NOTE_G4, 
    //15 bar 118temp
  NOTE_F4,
    //16 bar 118temp
  NOTE_D5, NOTE_D5, NOTE_B4, 
    //17 bar 118temp
  NOTE_G4, NOTE_FS4, NOTE_G4, NOTE_A4, NOTE_B4, NOTE_G4,
    //18 bar 118temp
  NOTE_C5, NOTE_D5, NOTE_C5, NOTE_B4,
    //19 bar 118temp
  NOTE_A4, NOTE_G4, NOTE_F4, 
    //20 bar 118temp
  NOTE_D5, NOTE_D5, NOTE_B4,
    //21 bar 118temp
  NOTE_G4, NOTE_FS4, NOTE_G4, NOTE_A4, NOTE_B4, NOTE_G4,
    //22 bar 118temp
  NOTE_C5, NOTE_D5, NOTE_C5, NOTE_A4, 
    //23 bar 118temp
  NOTE_B4,
    //24 bar 118temp
  NOTE_D5, NOTE_B4,
    //25 bar 118temp
  NOTE_G4, NOTE_FS4, NOTE_G4, NOTE_A4, NOTE_B4, NOTE_G4, 
    //26 bar 118temp
  NOTE_C5, NOTE_D5, NOTE_C5, NOTE_B4, 
    //27 bar 118temp
  NOTE_A4, NOTE_G4, NOTE_F4,
    //28 bar 118temp
  NOTE_D5, NOTE_B4,
    //29 bar 118temp
  NOTE_G4, NOTE_FS4, NOTE_G4, NOTE_A4, NOTE_B4, NOTE_G4,
    //30 bar 118temp
  NOTE_C5, NOTE_D5, NOTE_C5, NOTE_A4,
    //31 bar 118temp
  NOTE_B4  //OK
};

const PROGMEM int NotePitchAida[] = {   //音符の高さ Aida 
    //71 bar 118temp
  NOTE_B4, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_B5,
    //72 bar 118temp
  NOTE_G5, NOTE_F5, NOTE_E5, NOTE_F5, NOTE_B4,
    //73 bar 118temp
  NOTE_E5, NOTE_D5, NOTE_C5, NOTE_D5, NOTE_B4,
  //73 bar 118temp
  NOTE_C5, NOTE_D5, NOTE_B4  //OK
};

const PROGMEM int NoteTimeMelody[] = {  //音符の長さ melody
    //32 bar 118temp
  HalfNote118_t, HalfNote118_t,
    //33 bar 118temp
  EighthNote118, EighthNote118, EighthNote118, EighthNote118, QuarterNote118, QuarterNote118,
    //34 bar 118temp
  QuarterNote118, QuarterNote118, QuarterNote118, QuarterNote118,
    //35 bar 118temp
  HalfNoteDot118,
    //1 bar 118temp
  EighthNote118, EighthNote118, EighthNote118, EighthNote118, QuarterNote118, QuarterNote118,
    //2 bar 118temp
  QuarterNote118, EighthNote118, EighthNote118, HalfNote118,
    //3 bar 118temp
  QuarterNote118, EighthNote118, EighthNote118, QuarterNote118, QuarterNote118, 
    //4 bar 118temp
  EighthNote118, EighthNote118, EighthNote118, EighthNote118, HalfNote118_t, 
    //5 bar 118temp
  EighthNote118, EighthNote118, EighthNote118, EighthNote118, QuarterNote118, QuarterNote118, 
    //6 bar 118temp
  QuarterNote118, EighthNote118, EighthNote118, HalfNote118_t, 
  //7 bar 118temp
  QuarterNote118, EighthNote118, EighthNote118, QuarterNote118, QuarterNote118,
    //8 bar 118temp
  QuarterNoteDot118, EighthNote118, HalfNote118_t
};

const PROGMEM long NoteTimeSabi[] = {  //音符の長さ Sabi
    //9 bar 118temp
  EighthNote118, EighthNote118, QuarterNote118, EighthNote118, EighthNote118, QuarterNote118,
    //10 bar 118temp
  QuarterNote118, QuarterNote118, QuarterNote118,
    //11 bar 118temp
  EighthNote118, EighthNote118, QuarterNote118, EighthNote118, EighthNote118, QuarterNote118, 
    //12 bar 118temp
  QuarterNote118, QuarterNote118, QuarterNote118,
    //13 bar 118temp
  EighthNote118, EighthNote118, QuarterNote118, EighthNote118, EighthNote118, QuarterNote118,
    //14 bar 118temp
  QuarterNote118, QuarterNote118, QuarterNote118, QuarterNote118,
    //14 bar 118temp
  QuarterNote118, QuarterNote118, QuarterNoteDot118, EighthNote118,
    //15 bar 118temp
  HalfNoteDot118,
    //16 bar 118temp
  QuarterNote118, QuarterNote118, QuarterNote118,
    //17 bar 118temp
  EighthNote118, EighthNote118, EighthNote118, EighthNote118, QuarterNote118, QuarterNote118,
    //18 bar 118temp
  QuarterNoteDot118, EighthNote118, QuarterNote118, QuarterNote118,
    //19 bar 118temp
  QuarterNote118, QuarterNote118, QuarterNote118,
    //20 bar 118temp
  QuarterNote118, QuarterNote118, QuarterNote118, 
    //21 bar 118temp
  EighthNote118, EighthNote118, EighthNote118, EighthNote118, QuarterNote118, QuarterNote118,
    //22 bar 118temp
  QuarterNoteDot118, EighthNote118, QuarterNote118, QuarterNote118,
    //23 bar 118temp
  HalfNoteDot118,   //OK
    //24 bar 118temp
  QuarterNoteDot118, QuarterNoteDot118,
    //25 bar 118temp
  EighthNote118, EighthNote118, EighthNote118, EighthNote118, QuarterNote118, QuarterNote118,
    //26 bar 118temp
  QuarterNoteDot118, EighthNote118, QuarterNote118, QuarterNote118,
    //27 bar 118temp
  QuarterNote118, QuarterNote118, QuarterNote118,
    //28 bar 118temp
  QuarterNote118, QuarterNote118, //OK
    //29 bar 118temp
  EighthNote118, EighthNote118, EighthNote118, EighthNote118, QuarterNote118, QuarterNote118,
    //30 bar 118temp
  QuarterNoteDot118, EighthNote118, QuarterNote118, QuarterNote118,
  //31 bar 118temp
  HalfNoteDot118 //OK
};

const PROGMEM long NoteTimeAida[] = {  //音符の長さ Aida
  //71 bar 118temp
  EighthNote118, EighthNote118, EighthNote118, EighthNote118, QuarterNote118, QuarterNote118,
  //72 bar 118temp
  QuarterNote118, EighthNote118, EighthNote118, QuarterNote118, QuarterNote118,
  //73 bar 118temp
  QuarterNote118, EighthNote118, EighthNote118, QuarterNote118, QuarterNote118,
  //73 bar 118temp
  QuarterNoteDot118, EighthNote118, HalfNote118_t
};

const PROGMEM long NoteIntervalMelody[] = {   //   音符と音符の間 Melody
    //32 bar 118temp
  HalfNote118, HalfNote118,
    //33 bar 118temp
  EighthNote118, EighthNote118, EighthNote118, EighthNote118, QuarterNote118, QuarterNote118,
    //34 bar 118temp
  QuarterNote118, QuarterNote118, QuarterNote118, QuarterNote118,
    //35 bar 118temp
  WholeNote118,
    //1 bar 118temp
  EighthNote118, EighthNote118, EighthNote118, EighthNote118, QuarterNote118, QuarterNote118,
    //2 bar 118temp
  QuarterNote118, EighthNote118, EighthNote118, HalfNote118,
    //3 bar 118temp
  QuarterNote118, EighthNote118, EighthNote118, QuarterNote118, QuarterNote118, 
    //4 bar 118temp
  EighthNote118, EighthNote118, EighthNote118, EighthNote118, HalfNote118, 
    //5 bar 118temp
  EighthNote118, EighthNote118, EighthNote118, EighthNote118, QuarterNote118, QuarterNote118, 
    //6 bar 118temp
  QuarterNote118, EighthNote118, EighthNote118, HalfNote118, 
    //7 bar 118temp
  QuarterNote118, EighthNote118, EighthNote118, QuarterNote118, QuarterNote118,
    //8 bar 118temp
  QuarterNoteDot118, EighthNote118, HalfNote118
};

const PROGMEM long NoteIntervalSabi[] = {   //   音符と音符の間 Sabi
    //9 bar 118temp
  EighthNote118, EighthNote118, QuarterNote118, EighthNote118, EighthNote118, QuarterNote118,
    //10 bar 118temp
  QuarterNote118, QuarterNote118, HalfNote118, 
      //11 bar 118temp
  EighthNote118, EighthNote118, QuarterNote118, EighthNote118, EighthNote118, QuarterNote118, 
    //12 bar 118temp
  QuarterNote118, QuarterNote118, HalfNote118,
    //13 bar 118temp
  EighthNote118, EighthNote118, QuarterNote118, EighthNote118, EighthNote118, QuarterNote118,
    //14 bar 118temp
  QuarterNote118, QuarterNote118, QuarterNote118, QuarterNote118,
    //14 bar 118temp
  QuarterNote118, QuarterNote118, QuarterNoteDot118, EighthNote118,
    //15 bar 118temp
  WholeNote118,
    //16 bar 118temp
  QuarterNote118, QuarterNote118, HalfNote118,
    //17 bar 118temp
  EighthNote118, EighthNote118, EighthNote118, EighthNote118, QuarterNote118, QuarterNote118,
    //18 bar 118temp
  QuarterNoteDot118, EighthNote118, QuarterNote118, QuarterNote118,
    //19 bar 118temp
  QuarterNote118, QuarterNote118, HalfNote118,
    //20 bar 118temp
  QuarterNote118, QuarterNote118, HalfNote118, 
    //21 bar 118temp
  EighthNote118, EighthNote118, EighthNote118, EighthNote118, QuarterNote118, QuarterNote118,
    //22 bar 118temp
  QuarterNoteDot118, EighthNote118, QuarterNote118, QuarterNote118,
    //23 bar 118temp
  WholeNote118, 
    //24 bar 118temp
  HalfNote118, HalfNote118,
    //25 bar 118temp
  EighthNote118, EighthNote118, EighthNote118, EighthNote118, QuarterNote118, QuarterNote118,
    //26 bar 118temp
  QuarterNoteDot118, EighthNote118, QuarterNote118, QuarterNote118,
    //27 bar 118temp
  QuarterNote118, QuarterNote118, HalfNote118,
    //28 bar 118temp
  HalfNote118, HalfNote118,
    //29 bar 118temp
  EighthNote118, EighthNote118, EighthNote118, EighthNote118, QuarterNote118, QuarterNote118,
    //30 bar 118temp
  QuarterNoteDot118, EighthNote118, QuarterNote118, QuarterNote118,
  //31 bar 118temp
  WholeNote118 //OK
};

const PROGMEM long NoteIntervalAida[] = {   //   音符と音符の間 Aida
    //71 bar 118temp
  EighthNote118, EighthNote118, EighthNote118, EighthNote118, QuarterNote118, QuarterNote118,
  //72 bar 118temp
  QuarterNote118, EighthNote118, EighthNote118, QuarterNote118, QuarterNote118, 
  //73 bar 118temp
  QuarterNote118, EighthNote118, EighthNote118, QuarterNote118, QuarterNote118,
  //73 bar 118temp
  QuarterNoteDot118, EighthNote118, HalfNote118
};