#include "ZadTemperaturaFormat.h"
#include <ios>
#include <iostream>
#include <iomanip>
using namespace std;

double ZadTemperaturaFormat::konwertuj(double celsjusz) {
    return (celsjusz * 1.8) + 32;
}

void ZadTemperaturaFormat::konwertuj_tablice(double* celsjusz, double* fahrenheit) {
    for (int i = 0; i < 5; i++) {
        *fahrenheit = konwertuj(*celsjusz);
        fahrenheit++;
        celsjusz++;
    }
}

void ZadTemperaturaFormat::wypisz_tablice(double* celsjusz, double* fahrenheit) {
    cout << "Celsjusz"
    << right << setw(13) << "Fahrenheit"
    << "\n";

    cout << setfill('-') << setw(7) << "";
    cout << setfill(' ') << setw(4) << "";
    cout << setfill('-') << setw(9) << "";
    cout << setfill(' ') << "\n";
    
    for (int j = 0; j < 5; j++) {
        // defaultfloat czysci fixed, inaczej w stopniach celsjusza ciagle sa zera
        cout << setw(5) << defaultfloat << noshowpoint << right << *celsjusz;

        cout << setw(13) << right << fixed  << setprecision(2) << showpoint << *fahrenheit << "\n";


        celsjusz++;
        fahrenheit++;
    }
}

void ZadTemperaturaFormat::run() {
    double liczby_celsjusz[5] = {-10, -5, 0, 5, 10};
    double liczby_fahrenheit[5];

    konwertuj_tablice(liczby_celsjusz, liczby_fahrenheit);

    wypisz_tablice(liczby_celsjusz, liczby_fahrenheit);
}
