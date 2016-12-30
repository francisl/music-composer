//
// Created by Francis Lavoie on 2016-12-16.
//

#ifndef CLASSES_NOTE_H
#define CLASSES_NOTE_H


class Note {
private:
    void setFrequency();
    float frequency;
    std::string name;

public:
    void setNote(std::string name, float baseFrequency);
};


#endif //CLASSES_NOTE_H
