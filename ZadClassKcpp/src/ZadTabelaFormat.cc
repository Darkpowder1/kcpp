#include "ZadTabelaFormat.h"
#include <ios>
#include <iostream>
#include <iomanip>
using namespace std;

void ZadTabelaFormat::run() {

    // nazwa
    cout 
    << "|" << " "
    << left << setw(15) << "Nazwa"
    << "|" << " "
    << left << setw(8) << "Cena"
    << "|" << " "
    << left << setw(6) << "Ilosc"
    << "|"
    << "\n";

    // kreski
    cout << "|" << setfill('-') << setw(16) << ""; 
    cout << "|" << setw(9) << ""; 
    cout << "|" << setw(7) << "" << "|" << "\n"; 

    cout << setfill(' ');

    // chleb
    double cena_chleba = 4.99;
    double ilosc_chleba = 5;
    
    cout 
    << "|" << " "
    << left << setw(15) << "Chleb"
    << "|"
    << right << setw(7) << setprecision(3) << showpoint << cena_chleba
    << setw(3) << "|"
    << right << setw(5) << noshowpoint << ilosc_chleba
    << setw(3) << "|"
    << "\n";

    // mleko
    double cena_mleka = 3.20;
    double ilosc_mleka = 10;
    
    cout 
    << "|" << " "
    << left << setw(15) << "Mleko"
    << "|"
    << right << setw(7) << setprecision(3) << showpoint << cena_mleka
    << setw(3) << "|"
    << right << setw(5)<< noshowpoint << ilosc_mleka
    << setw(3) << "|"
    << "\n";

    // jajka
    double cena_jejek = 8.50;
    double ilosc_jajek = 3;
    
    cout 
    << "|" << " "
    << left << setw(15) << "Jajka (10 szt)"
    << "|"
    << right << setw(7) << setprecision(3) << showpoint << cena_jejek
    << setw(3) << "|"
    << right << setw(5) << noshowpoint << ilosc_jajek
    << setw(3) << "|"
    << "\n";
}
