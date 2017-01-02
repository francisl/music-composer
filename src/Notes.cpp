//
// Created by Francis Lavoie on 2016-12-16.
//

#include <iostream>
#include <stdio.h>
#include <cmath>
#include "Notes.h"

using namespace std;

Notes::Notes(){
    cout << "=========================" << endl;
}

float Notes::getFrequency(int position){
    cout << "setting freq for : " << position << " compared to : " << A4POSITION << " base is : " << la4Frequency << endl;
    return this->la4Frequency * pow(1.059463094359f, position - A4POSITION);
};

void Notes::setNotes(float a4Frequency) {
    this->la4Frequency = a4Frequency;
    for (int i=0; i < NUMBER_OF_NOTES; i++) {
    	int position = i % NOTES_PER_SCALE;
    	Note* note = new Note(roundf(this->getFrequency(i) * 100) / 100, position);
        this->notes[i] = note;
    }
}

Note* Notes::getNote(float frequency) {
    for (int i=0; i < NUMBER_OF_NOTES; i++) {
    	if ( this->notes[i]->isInRange(frequency) ){
    		cout << "Found note " << this->notes[i]->getName() << endl;
    		return this->notes[i];
    	}
    }
    return new Note(0.0f, -1);
}

void Notes::printNotes() {
    for (int i=0; i < NUMBER_OF_NOTES; i++) {
        printf("note %s : %.2f hz\n", this->notes[i]->getName(), this->notes[i]->getFrequency());
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
