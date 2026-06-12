#ifndef ZADKSZTALT_H
#define ZADKSZTALT_H

#include "ZadKcpp.h"

class ZadKsztalt : public ZadKcpp {
    void rownoramienny(int dlugosc_boku);
    void piramida(int rozmiar);
public:
    void run() override;
};

#endif
