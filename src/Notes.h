//
// Created by Francis Lavoie on 2016-12-16.
//

#ifndef CLASSES_NOTES_H
#define CLASSES_NOTES_H

#include <map>
#include "Note.h"

// enum NOTESNAME { do, re, mi, fa, sol, la, si };
const int A4POSITION = 12*4-2-1; // 4 * 12 = si - 2 half note -1 for index 0
const int NUMBER_OF_NOTES = 8*12;

class Notes {
private:
    float notes[NUMBER_OF_NOTES];
    float la4Frequency;
    float getFrequency(int position);

public:
    void setNotes(float la4Frequency);
    void printNotes();
};


#endif //CLASSES_NOTES_H
