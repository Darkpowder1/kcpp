#ifndef ZADARYTMETYKAWSKAZNIKOW_H
#define ZADARYTMETYKAWSKAZNIKOW_H

#include "ZadKcpp.h"

class ZadArytmetykaWskaznikow : public ZadKcpp {
    void print_tablica(int* tablica, int rozmiar);
    void reset_tablicy(int* tablica, int rozmiar);
    void Funkcja1(int* tablica, int rozmiar);
    void Funkcja2();
public:
    void run() override;
};

#endif
