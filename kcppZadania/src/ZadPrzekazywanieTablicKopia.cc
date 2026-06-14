#include <iostream>
using namespace std;

// zwyklej tablicy nie da sie przekazac przez kopie - rozpada sie na wskaznik
// ale jak schowamy ja w strukturze, to struktura kopiuje sie razem z tablica
struct Tablica {
    int dane[5];
};

// przekazanie przez wartosc => funkcja dostaje kopie
void zmienKopie(Tablica kopia) {
    // zmieniamy tylko kopie, oryginal zostaje nietkniety
    for (int i = 0; i < 5; i++) {
        kopia.dane[i] = 0;
    }
    cout << "wewnatrz funkcji (kopia) pierwszy element: " << kopia.dane[0] << endl;
}

void wypisz(Tablica t) {
    for (int i = 0; i < 5; i++) {
        cout << t.dane[i] << ", ";
    }
    cout << endl;
}

int main() {
    Tablica oryginal = {{1, 2, 3, 4, 5}};

    cout << "przed: ";
    wypisz(oryginal);

    zmienKopie(oryginal);

    cout << "po: ";
    wypisz(oryginal);
}
