#ifndef ZADTEMPERATURAFORMAT_H
#define ZADTEMPERATURAFORMAT_H

#include "ZadKcpp.h"

class ZadTemperaturaFormat : public ZadKcpp {
    double konwertuj(double celsjusz);
    void konwertuj_tablice(double* celsjusz, double* fahrenheit);
    void wypisz_tablice(double* celsjusz, double* fahrenheit);
public:
    void run() override;
};

#endif
