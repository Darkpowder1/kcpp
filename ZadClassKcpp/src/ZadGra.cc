#include "ZadGra.h"
#include <iostream>
#include <cstdlib>  // dla rand()
#include <ctime>    // dla time()
using namespace std;


void ZadGra::run() {
    srand(time(0));

    cout << "Wybierz poziom trudnosci od 1 do 4 (1 = latwy, 4 = impossible): ";
    int wybor;
    int max_num;

    cin >> wybor;

    if (wybor > 0 && wybor < 5) {
        switch (wybor) {
            case 1: max_num = 50; break;
            case 2: max_num = 500; break;
            case 3: max_num = 5000; break;
            case 4: max_num = 1000000; break;
        }
    }


    int wylosowana = rand() % max_num + 1; // liczba od 1 do 100
    int proba, licznik = 0;

    cout << "Zgadnij liczbe (1-" << max_num << "):" << endl;

    while (true) {
        cin >> proba;
        licznik++;

        if (proba < wylosowana) {
            cout << "Za malo! Probuj dalej." << endl;
        } else if (proba > wylosowana) {
            cout << "Za duzo! Probuj dalej." << endl;
        } else {
            cout << "Brawo! Zgadles w " << licznik << " probach." << endl;
            break;  // przerywa pętlę
        }

        if (licznik == 10) {
            cout << "wykorzystano 10 prob, koniec! prawidlowa liczba to: " << wylosowana << endl;
            return;
        }
    }
}
