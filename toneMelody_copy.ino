#include "pitches.h"

int melody[] = {
  DS1, E5, FS5, 0, B5
};

int noteDurations[] = {
  16, 16, 16, 16, 16
};

int noteCount = sizeof(melody) / sizeof(int);

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  for (int thisNote = 0; thisNote < noteCount; thisNote++) {
    digitalWrite(LED_BUILTIN, HIGH);
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(8, melody[thisNote], noteDuration);

    int pauseBetweenNotes = noteDuration * 1.3;
    digitalWrite(LED_BUILTIN, LOW);
    delay(pauseBetweenNotes);
    noTone(8);
  }
}
