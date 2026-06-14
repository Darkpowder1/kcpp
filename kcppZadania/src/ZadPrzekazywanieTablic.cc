#include <iostream>
using namespace std;

// da sie zachowac rozmiar - przekazujemy przez referencje do tablicy [5]
// dzieki temu w srodku funkcji sizeof dalej widzi cala tablice
void wypisz(int (&tablica)[5]) {
    // sizeof tablicy / sizeof jednego elementu = liczba elementow
    int rozmiar = sizeof(tablica) / sizeof(tablica[0]);
    cout << "rozmiar w srodku funkcji: " << rozmiar << endl;

    for (int i = 0; i < rozmiar; i++) {
        cout << tablica[i] << ", ";
    }
    cout << endl;
}

// dla porownania: zwykle przekazanie gubi rozmiar (tablica staje sie wskaznikiem)
void wypiszWskaznik(int* tablica) {
    // tu sizeof zwroci rozmiar wskaznika, a nie tablicy
    cout << "sizeof wskaznika: " << sizeof(tablica) << " (rozmiar tablicy zgubiony)" << endl;
}

int main() {
    int tablica[5] = {1, 2, 3, 4, 5};

    wypisz(tablica);

    wypiszWskaznik(tablica);
}
