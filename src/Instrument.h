//
// Created by Francis Lavoie on 2016-12-15.
//

#ifndef CLASSES_INSTRUMENT_H
#define CLASSES_INSTRUMENT_H


#include <string>

class Instrument {
private:
    int centerLa = 440;
public:
    std::string italianNotation(int frequence);
    void setCenterLa(int frequence);
    int getCenterLa();
};

#endif //CLASSES_INSTRUMENT_H
