#include "pitches.h"

//Connect speaker terminals to pin 9 and ground. Don't forget
//to add a resistor in series!!

//For some reason the last block of notes don't seem to be
//playing. You can try and debub it if you want but I think it's
//likely that I've hit some kind of limit to the number of
//objects in an array.


// notes in the melody:
int melody[] = {
  NOTE_DS5, NOTE_E5,  NOTE_FS5, NOTE_B5,  NOTE_DS5, NOTE_E5, 
  NOTE_FS5, NOTE_B5,  NOTE_CS6, NOTE_DS6, NOTE_CS6, NOTE_AS5, 
  NOTE_B5,  
  NOTE_FS5, NOTE_DS5, NOTE_E5,  NOTE_FS5, NOTE_B5, 
  NOTE_CS6, NOTE_AS5, NOTE_B5,  NOTE_CS6, NOTE_E6,  
  NOTE_DS6, NOTE_E6,  NOTE_CS6,
  //Total of 26
  NOTE_FS5, NOTE_GS5, NOTE_DS5, NOTE_DS5,0,NOTE_B4,  NOTE_D5, 
  NOTE_CS5, NOTE_B4,0,NOTE_B4,  NOTE_CS5,  NOTE_D5,  NOTE_D5, 
  NOTE_CS5, NOTE_B4,  NOTE_CS5, NOTE_DS5,  NOTE_FS5, NOTE_GS5, 
  NOTE_DS5, NOTE_FS5, NOTE_CS5, NOTE_DS5,  NOTE_B4,  NOTE_CS5, 
  NOTE_B4,  NOTE_DS5, NOTE_FS5, NOTE_FS5,  NOTE_DS5, NOTE_FS5, 
  NOTE_CS5, NOTE_DS5, NOTE_B4,  NOTE_D5,   NOTE_DS5, NOTE_D5, 
  NOTE_CS5, NOTE_B4,  NOTE_CS5, NOTE_D5, 0,NOTE_B4,  NOTE_CS5, 
  NOTE_DS5, NOTE_FS5, NOTE_CS5, NOTE_DS5,  NOTE_CS5, NOTE_B4, 
  NOTE_CS5, NOTE_B4,  NOTE_CS5,
  //Total of 54
  NOTE_FS5, NOTE_GS5, NOTE_DS5, NOTE_DS5,0,NOTE_B4,  NOTE_D5, 
  NOTE_CS5, NOTE_B4,0,NOTE_B4,  NOTE_CS5,  NOTE_D5,  NOTE_D5, 
  NOTE_CS5, NOTE_B4,  NOTE_CS5, NOTE_DS5,  NOTE_FS5, NOTE_GS5, 
  NOTE_DS5, NOTE_FS5, NOTE_CS5, NOTE_DS5,  NOTE_B4,  NOTE_CS5, 
  NOTE_B4,  NOTE_DS5, NOTE_FS5, NOTE_FS5,  NOTE_DS5, NOTE_FS5, 
  NOTE_CS5, NOTE_DS5, NOTE_B4,  NOTE_D5,   NOTE_DS5, NOTE_D5, 
  NOTE_CS5, NOTE_B4,  NOTE_CS5, NOTE_D5, 0,NOTE_B4,  NOTE_CS5, 
  NOTE_DS5, NOTE_FS5, NOTE_CS5, NOTE_DS5,  NOTE_CS5, NOTE_B4, 
  NOTE_CS5, NOTE_B4,  NOTE_CS5,
  //Total of 54
  NOTE_B4, NOTE_FS4, NOTE_GS4, NOTE_B4, NOTE_FS4, NOTE_GS4, 
  NOTE_B4, NOTE_CS5, NOTE_DS5, NOTE_B4, NOTE_E5,  NOTE_DS5,
  NOTE_E5, NOTE_FS5, NOTE_B4,  NOTE_B4, NOTE_FS4, NOTE_GS4,
  NOTE_B4, NOTE_FS4, NOTE_E5,  NOTE_DS5,NOTE_CS5, NOTE_B4,
  NOTE_FS4,NOTE_DS4, NOTE_E4,  NOTE_FS4,NOTE_B4,  NOTE_FS4,
  NOTE_GS4,NOTE_B4,  NOTE_FS4, NOTE_GS4,NOTE_B4,  NOTE_B4,
  NOTE_CS5,NOTE_DS5, NOTE_B4,  NOTE_FS4,NOTE_GS4, NOTE_FS4,
  NOTE_B4, NOTE_B4,  NOTE_AS4, NOTE_B4, NOTE_FS4, NOTE_GS4,
  NOTE_B4, NOTE_E5,  NOTE_DS5, NOTE_E5, NOTE_FS6, NOTE_B4,
  NOTE_AS4,
  //Total of 55
  NOTE_B4, NOTE_FS4, NOTE_GS4, NOTE_B4, NOTE_FS4, NOTE_GS4, 
  NOTE_B4, NOTE_CS5, NOTE_DS5, NOTE_B4, NOTE_E5,  NOTE_DS5,
  NOTE_E5, NOTE_FS5, NOTE_B4,  NOTE_B4, NOTE_FS4, NOTE_GS4,
  NOTE_B4, NOTE_FS4, NOTE_E5,  NOTE_DS5,NOTE_CS5, NOTE_B4,
  NOTE_FS4,NOTE_DS4, NOTE_E4,  NOTE_FS4,NOTE_B4,  NOTE_FS4,
  NOTE_GS4,NOTE_B4,  NOTE_FS4, NOTE_GS4,NOTE_B4,  NOTE_B4,
  NOTE_CS5,NOTE_DS5, NOTE_B4,  NOTE_FS4,NOTE_GS4, NOTE_FS4,
  NOTE_B4, NOTE_B4,  NOTE_AS4, NOTE_B4, NOTE_FS4, NOTE_GS4,
  NOTE_B4, NOTE_E5,  NOTE_DS5, NOTE_E5, NOTE_FS6, NOTE_B4,
  NOTE_CS5,
  //Total of 55
  NOTE_FS5, NOTE_GS5, NOTE_DS5, NOTE_DS5,0,NOTE_B4,  NOTE_D5, 
  NOTE_CS5, NOTE_B4,0,NOTE_B4,  NOTE_CS5,  NOTE_D5,  NOTE_D5, 
  NOTE_CS5, NOTE_B4,  NOTE_CS5, NOTE_DS5,  NOTE_FS5, NOTE_GS5, 
  NOTE_DS5, NOTE_FS5, NOTE_CS5, NOTE_DS5,  NOTE_B4,  NOTE_CS5, 
  NOTE_B4,  NOTE_DS5, NOTE_FS5, NOTE_FS5,  NOTE_DS5, NOTE_FS5, 
  NOTE_CS5, NOTE_DS5, NOTE_B4,  NOTE_D5,   NOTE_DS5, NOTE_D5, 
  NOTE_CS5, NOTE_B4,  NOTE_CS5, NOTE_D5, 0,NOTE_B4,  NOTE_CS5, 
  NOTE_DS5, NOTE_FS5, NOTE_CS5, NOTE_DS5,  NOTE_CS5, NOTE_B4, 
  NOTE_CS5, NOTE_B4,  NOTE_CS5};

  

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  8, 8, 4, 4, 8, 8, 
  8, 8, 8, 8, 8, 8, 
  4, 
  4, 8, 8, 4, 4, 
  8, 8, 8, 8, 8, 
  8, 8, 8,
  
  4, 4,  8, 8,8,8, 8, 
  8, 8,8,4, 4,  4, 8, 
  8, 8,  8, 8,  8, 8,
  8, 8,  8, 8,  8, 8,
  8, 4,  4, 8,  8, 8, 
  8, 8,  8, 8,  8, 8,
  8, 8,  8, 8,8,8, 8, 
  8, 8,  8, 8,  8, 8,
  4, 4,  4,
  
  4, 4,  8, 8,8,8, 8, 
  8, 8,8,4, 4,  4, 8, 
  8, 8,  8, 8,  8, 8,
  8, 8,  8, 8,  8, 8,
  8, 4,  4, 8,  8, 8, 
  8, 8,  8, 8,  8, 8,
  8, 8,  8, 8,8,8, 8, 
  8, 8,  8, 8,  8, 8,
  4, 4, 4,

  4, 8, 8, 4, 8, 8,
  8, 8, 8, 8, 8, 8,
  8, 8, 4, 4, 8, 8,
  8, 8, 8, 8, 8, 8,
  8, 8, 8, 8, 4, 8,
  8, 4, 8, 8, 8, 8,
  8, 8, 8, 8, 8, 8,
  4, 8, 8, 8, 8, 8,
  8, 8, 8, 8, 8, 4,
  4,

  4, 8, 8, 4, 8, 8,
  8, 8, 8, 8, 8, 8,
  8, 8, 4, 4, 8, 8,
  8, 8, 8, 8, 8, 8,
  8, 8, 8, 8, 4, 8,
  8, 4, 8, 8, 8, 8,
  8, 8, 8, 8, 8, 8,
  4, 8, 8, 8, 8, 8,
  8, 8, 8, 8, 8, 4,
  4,
  
  4, 4,  8, 8,8,8, 8, 
  8, 8,8,4, 4,  4, 8, 
  8, 8,  8, 8,  8, 8,
  8, 8,  8, 8,  8, 8,
  8, 4,  4, 8,  8, 8, 
  8, 8,  8, 8,  8, 8,
  8, 8,  8, 8,8,8, 8, 
  8, 8,  8, 8,  8, 8,
  4, 4,  4};
  


void setup() {
  // iterate over the notes of the melody:
  for (int thisNote = 0; thisNote < 244; thisNote++) {

    // to calculate the note duration, take one second 
    // divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000/noteDurations[thisNote];
    
    tone(9, melody[thisNote],noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(244);
    //if (thisNote == 27) thisNote = 0;
  }
  
  

  
}

void loop() {

}
