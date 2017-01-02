#include <iostream>
#include "Instrument.h"
#include "Notes.h"


using namespace std;

void playInstrument(Instrument instrument, string name){
    cout << "playing instrument " << name << endl;
    for (int f=100; f <= 800; f++){
        string cNote = instrument.italianNotation(f);
        if (cNote != ""){
            cout << "Playing " << cNote << " at " << f << " hertz" << endl;
        }
    }
}

void queryFreq(Notes* notes){
    cout << "Frequency : " << flush;
    string freq;
    cin >> freq;
    if (freq == "q"){
        return;
    }
    Note* note = notes->getNote(stof(freq));

    if (note->getName() == ""){
        cout << "Can't find the note " << endl;
    } else {
    	cout << note->getName() << endl;
    }

    queryFreq(notes);
}

int main() {
    Instrument piano440;
    Instrument piano438;

    cout << "start instrument 440" << endl;
    playInstrument(piano440, "440");


    piano438.setCenterLa(438);
    playInstrument(piano440, "440");
    cout << "start instrument 438" << endl;
    cout << "Center La" << piano438.getCenterLa() << endl;
    playInstrument(piano438, "438");

    Notes* notes = new Notes();
    notes->setNotes(440.0);
    notes->printNotes();

    cout << "before queryFreq" << endl;
    queryFreq(notes);
    cout << "after queryFreq" << endl;
    delete notes;

    return 0;
}
