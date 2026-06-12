#ifndef ZADMETODYABSTRAKCYJNE_H
#define ZADMETODYABSTRAKCYJNE_H

#include "ZadKcpp.h"

class ZadMetodyAbstrakcyjne : public ZadKcpp {
    void test_kwadrat();
    void test_trojkat();
    void test_prostokat();
    void test_kola();
public:
    void run() override;
};

#endif
