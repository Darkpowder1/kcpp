#include "ZadKsztalt.h"
#include <iostream>
using namespace std;

void ZadKsztalt::rownoramienny(int dlugosc_boku) {
    cout << "\nTrojkat rownoramienny:" << endl;
    // w zasadzie trojkat prostokatny juz jest trojkatem rownoramiennym
    // zrobie wiec taki ktory nie jest prostokatny

    int wysokosc = dlugosc_boku * 2;
    int srodek = dlugosc_boku / 2;

    bool is_first = false; // omijanie parzystych
        
    for (int x = wysokosc ; x > 0; x--) {

        // przerwy
        for (int y = srodek + x; y > 0; y = y-2) {
            if (!is_first) {break;};
            cout << " ";
        }

        // gwiazdki
        for (int i = wysokosc - x; i > 0; i--) {
            if (!is_first) {break;};
            cout << "*";
        }

        if (is_first) {
            cout << endl;
        }
        
        is_first = !is_first;
    }

    
}

void ZadKsztalt::piramida(int rozmiar) {
    cout << "\nPiramida:" << endl;

    // w zasadzie trojkat prostokatny juz jest trojkatem rownoramiennym
    // zrobie wiec taki ktory nie jest prostokatny

    int wysokosc = rozmiar * 2;
    int srodek = rozmiar / 2;

    bool is_first = false; // omijanie parzystych

    int rzad = 1;
        
    for (int x = wysokosc ; x > 0; x--) {

        // przerwy
        for (int y = srodek + x; y > 0; y--) {
            if (!is_first) {break;};
            cout << " ";
        }

        // gwiazdki
        for (int i = wysokosc - x; i > 0; i--) {
            if (!is_first) {break;};

            // dziala dla 0 < rzad < 100
            if (rzad < 10) {
                cout << rzad << " ";
            } else {
                cout << rzad;
        }
            
        }

        if (is_first) {
            cout << endl;
            rzad++;
        }
        
        is_first = !is_first;
    }

    
}


void ZadKsztalt::run() {
  int rozmiar;
  cout << "Podaj rozmiar kształtów: ";
  cin >> rozmiar;

  cout << "\nKwadrat:" << endl;
  for (int i = 0; i < rozmiar; i++) {
    for (int j = 0; j < rozmiar; j++) {
      cout << "* ";
    }
    cout << endl;
  }

  cout << "\nTrojkat prostokatny:" << endl;
  for (int i = 0; i < rozmiar; i++) {
    for (int j = 0; j <= i; j++) {
      cout << "* ";
    }
    cout << endl;
  }

  rownoramienny(rozmiar);

  piramida(rozmiar);
}
