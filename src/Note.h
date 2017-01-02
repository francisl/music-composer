//
// Created by Francis Lavoie on 2016-12-16.
//

#ifndef CLASSES_NOTE_H
#define CLASSES_NOTE_H

enum NotesEnum {
    Do=0,
    Re=2,
    Mi=4,
    Fa=5,
    Sol=7,
    La=9,
    Si=11,
    OUT_OF_RANGE
};

const std::string NotesName[] = {
	    "do",
		"",
	    "Re",
		"",
	    "Mi",
	    "Fa",
		"",
	    "Sol",
		"",
	    "La",
		"",
	    "Si",
};

class Note {
private:
    // Variable
    float frequency;
    NotesEnum name;
    // Method
    void setFrequency(float frequency);

public:
    Note(float frequency, int position);
    float getFrequency();
    void setName(int position);
    std::string getName();
    bool isInRange(float frequency);
};


#endif //CLASSES_NOTE_H
