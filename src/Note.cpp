//
// Created by Francis Lavoie on 2016-12-16.
//
#include <cmath>
#include <string>
#include "Note.h"

void Note::setFrequency() {

}

void Note::setNote(std::string name, float baseFrequency) {
    this->name = name;
    this->frequency = baseFrequency * pow(1.059463094359, 3);
    this->setFrequency();
}