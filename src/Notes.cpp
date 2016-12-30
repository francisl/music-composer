//
// Created by Francis Lavoie on 2016-12-16.
//

#include <iostream>
#include <cmath>
#include "Notes.h"


float Notes::getFrequency(int position){
    std::cout << "setting freq for : " << position << " compared to : " << A4POSITION << " base is : " << la4Frequency << std::endl;
    return this->la4Frequency * pow(1.059463094359f, position - A4POSITION);
};

void Notes::setNotes(float a4Frequency) {
    this->la4Frequency = a4Frequency;
    for (int i=0; i < NUMBER_OF_NOTES; i++) {
        this->notes[i] = roundf(this->getFrequency(i) * 100) / 100;
    }
}

void Notes::printNotes() {
    for (int i=0; i < NUMBER_OF_NOTES; i++) {
        printf("note %i : %.2f hz\n", i, this->notes[i]);
    }
}
//
//void Notes::setDeclinasions(float a4Frequency) {
//    for (int i=0; i <= 5; i++) {
//        Note *note = new Note();
//        note->setNote(RANGE[i], a4Frequency);
//        this->currentRange.insert( std::pair<std::string, Note*>(RANGE[i], note) );
//    }
//}