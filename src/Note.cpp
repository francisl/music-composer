//
// Created by Francis Lavoie on 2016-12-16.
//
#include <cmath>
#include <string>
#include <iostream>

#include "Note.h"

using namespace std;

Note::Note(float frequency, int position){
	this->setFrequency(frequency);
	this->setName(position);
}

std::string Note::getName(){
	return NotesName[this->name];
}

void Note::setName(int position) {
    this->name = NotesEnum(position);
}

float Note::getFrequency(){
	return this->frequency;
}

void Note::setFrequency(float frequency) {
	this->frequency = frequency;
}

bool Note::isInRange(float frequency){
	float variation = this->frequency - frequency;
	cout << "Checking frequency " << frequency << " is closed to : " << this->frequency << "for variation of : " << variation << endl;
	if (variation <= 0.5 && variation >= -0.5){
		return true;
	}
	return false;
}
