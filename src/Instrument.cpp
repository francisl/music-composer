//
// Created by Francis Lavoie on 2016-12-15.
//

#include "Instrument.h"
using namespace std;


void Instrument::setCenterLa(int frequence) {
    this->centerLa = frequence;
}

int Instrument::getCenterLa() {
    return this->centerLa;
}

string Instrument::italianNotation(int frequence) {
	if (frequence > this->centerLa-0.5 && frequence < this->centerLa+0.5 ) {
		return "la";
	}
	return "";
}