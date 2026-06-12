#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

int main() {

    // liczenie wartosci
    double val_base = 10.0 / 3.0;
    
    double x0 = val_base * 5.6;
    double t0 = val_base * 0.8;
        
    double x1 = val_base * 2.1;
    double t1 = val_base * 4.1;
        
    double x2 = val_base * 2.3;
    double t2 = val_base * 3.9;

    double avg_x = (x0 + x1 + x2) / 3.0;
    double avg_t = (t0 + t1 + t2) / 3.0;

    // ustawianie wartosci
    cout << setfill('=') << setw(49) << "" << "\n"; // linia o szerokosci 48 wypelniona =
    cout << setfill(' ');

    // zawsze wyswietla liczby po przecinku, 5 znakow
    cout << "Wynik naszego działania: " << std::fixed << std::setprecision(5) << val_base << " jest niepoprawny ale:\n";

    cout << setw(10) << "output:"
         << setw (9)<< setprecision(3) << x0
         << setw(6) << "T:"
         << setw(7) << setprecision(3) << t0
        << "\n";

    cout << setw(11) << "output1:"
        << setw (9)<< setprecision(4) << x1
        << setw(5) << "T:"
        << setw(9) << setprecision(5) << t1
        << "\n";


    cout << setw(11) << "output2:"
        << setw (9)<< setprecision(4) << x2
        << setw(5) << "T:"
        << setw(10) << setprecision(6) << t2
        << "\n";

    cout << setw(3) << "" << setfill('-') << setw(34) << "\n";
    cout << setfill(' ');

    cout << setw(11) << "average:"
        << setw(9) << setprecision(4) << avg_x
        << setw(5) << "T:"
        << setw(9) << setprecision(6) << avg_t
        << "\n";

    cout << setfill('=') << setw(49) << "" << "\n"; 
    cout << setfill(' ');
}