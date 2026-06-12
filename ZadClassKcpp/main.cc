#include <iostream>
#include "ZadStringExample.h"
#include "ZadArytmetykaWskaznikow.h"
#include "ZadTabelaFormat.h"
#include "ZadTemperaturaFormat.h"
#include "ZadDaneNaukoweFormat.h"
#include "ZadPetle.h"
#include "ZadSilnia.h"
#include "ZadKsztalt.h"
#include "ZadGra.h"
#include "ZadMetodyAbstrakcyjne.h"
using namespace std;

void wyswietl_menu(){
    cout << "---------- PODSUMOWANIE ZADAN ----------" << endl;
    cout << "Witaj w programie, wybierz akcje: " << endl;
    cout << " 1. Sekcja 1 - 1.2  Operacje na stringach" << endl;
    cout << " 2. Sekcja 3 - 3.11 Arytmetyka wskaznikow" << endl;
    cout << " 3. Sekcja 4 - 4.4  Tabela produktow (setw)" << endl;
    cout << " 4. Sekcja 4 - 4.5  Konwersja temperatur" << endl;
    cout << " 5. Sekcja 4 - 4.6  Stale w notacji naukowej" << endl;
    cout << " 6. Sekcja 4 - 4.9  Petle while/do-while/for" << endl;
    cout << " 7. Sekcja 4 - 4.12 Suma silni" << endl;
    cout << " 8. Sekcja 4 - 4.13 Ksztalty i piramida liczb" << endl;
    cout << " 9. Sekcja 4 - 4.15 Gra w zgadywanie liczby" << endl;
    cout << "10. Sekcja 5 - 5.6  Metody abstrakcyjne (figury)" << endl;
    cout << "11. Wyjście z programu" << endl;
    cout << "-----------------------------------------" << endl;
}


void dopasuj_akcje(int akcja){

    cout << endl;
    cout << ">>>>>>>>>> POCZATEK ZADANIA <<<<<<<<<<" << endl;
    cout << endl;

    switch (akcja) {
        case 1: {
            ZadStringExample zad;
            zad.run();
            break;
        }
        case 2: {
            ZadArytmetykaWskaznikow zad;
            zad.run();
            break;
        }
        case 3: {
            ZadTabelaFormat zad;
            zad.run();
            break;
        }
        case 4: {
            ZadTemperaturaFormat zad;
            zad.run();
            break;
        }
        case 5: {
            ZadDaneNaukoweFormat zad;
            zad.run();
            break;
        }
        case 6: {
            ZadPetle zad;
            zad.run();
            break;
        }
        case 7: {
            ZadSilnia zad;
            zad.run();
            break;
        }
        case 8: {
            ZadKsztalt zad;
            zad.run();
            break;
        }
        case 9: {
            ZadGra zad;
            zad.run();
            break;
        }
        case 10: {
            ZadMetodyAbstrakcyjne zad;
            zad.run();
            break;
        }
            
    }

    cout << endl;
    cout << ">>>>>>>>>> KONIEC ZADANIA <<<<<<<<<<" << endl;
    cout << endl;
}

int main() {
    int akcja;
    
    while (true) {
        wyswietl_menu();

        while (!(cin >> akcja)) {
            cout << "Wybrano niepoprawna akcje, sprobuj ponownie!" << endl;
            cin.clear(); // czysci failed state
            cin.ignore(100, '\n'); // niszczy wszystko az do newline character, 100 na iteracje (wyzszy numer = wiecej znakow na raz?)
        }

        if (akcja > 0 && akcja < 11) {
            dopasuj_akcje(akcja);
        } else if (akcja == 11) {
            return 0;
        } else {
            cout << "Wybrano niepoprawna akcje, sprobuj ponownie!" << endl;

        }
        
        
    }
    
}
