//
// Created by Francis Lavoie on 2016-12-16.
//

#ifndef CLASSES_NOTES_H
#define CLASSES_NOTES_H

#include <map>
#include "Note.h"

const int NOTES_PER_SCALE = 12;
const int A4POSITION = (4*NOTES_PER_SCALE)-2-1; // 4 * 12 = si - 2 half note -1 for index 0
const int NUMBER_OF_NOTES = 8*NOTES_PER_SCALE;


class Notes {
private:
    Note* notes[NUMBER_OF_NOTES];
    float la4Frequency;
    float getFrequency(int position);

public:
    Notes();
    void setNotes(float la4Frequency);
    Note* getNote(float frequency);
    float getFrequency(NotesEnum note);
    void printNotes();
};


#endif //CLASSES_NOTES_H
