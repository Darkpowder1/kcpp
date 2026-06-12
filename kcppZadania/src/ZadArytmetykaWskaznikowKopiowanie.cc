using namespace std;
#include <iostream>

void kopiujTablice(int* tab1, int* tab2, int rozmiar) {
    // pointer na ostatnia wartosc
    int *koniec = tab1 + rozmiar;

    while (tab1 < koniec) {
        *tab2 = *tab1;
        tab2++;
        tab1++;
    }
}

void print_tablica(int* tablica, int rozmiar) {
    for (int i=0; i < rozmiar; i++) {
        cout << *tablica << ", ";

        tablica++;
    }

    cout << endl;
    cout << endl;
}

int main() {
    int tab1[10] = {1, -2, 3, -4, 5, -6, 7, -8, 9, -10};
    int tab2[10];

    cout << "oryginalna tablica: " << endl;
    print_tablica(tab1, 10);

    cout << "nowa 'pusta' tablica: " << endl;
    print_tablica(tab2, 10);

    kopiujTablice(tab1, tab2, 10);

    cout << "po kopiowaniu:" << endl;
    cout << "oryginalna tablica: " << endl;
    print_tablica(tab1, 10);

    cout << "nowa 'pusta' tablica: " << endl;
    print_tablica(tab2, 10);
}