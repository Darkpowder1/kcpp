using namespace std;
#include<iostream>

double potega(double liczba, int stopien) {
    if (stopien == 0) {
        return 1;
    } else if (stopien == 1) {
        return liczba;
    }

    // jesli potega jest negatywna, 
    // zamieniam na pozytywna i zapamietuje to
    // inaczej mi sie petla zepsuje
    bool is_negative = false;
    if (stopien < 0) {
        is_negative = true;
        stopien = -stopien;
    }

    double sum = liczba;

    for (int x = 1; x < stopien; x++) {
        sum *= liczba;
        //cout << sum << endl;
    }

    if (is_negative) {
        return 1.0 / sum;
    }
    return sum;
}

int potega(int liczba, int stopien) {
    double dLiczba = static_cast<double>(liczba);

    double wynik = potega(dLiczba, stopien);

    // static cast nie utraci tutaj zadnych danych, bo i tak
    // wczesniej konwertuje liczby na int 
    return static_cast<int>(wynik);
}


int main() {
    cout << "zmiennoprzecinkowe: " <<endl;
    cout << "5.23^4: " << potega(5.23, 4) << endl;
    cout << "3.543^2: " << potega(3.543, 12) << endl;
    cout << "2.11^-3: " << potega(2.11, -3) << endl;

    cout << "pelne liczby:" << endl;
    cout << "6^8: " << potega(6, 8) << endl;
    cout << "4^5: " << potega(4, 5) << endl;
    // zalozylem, ze obsluga liczb calkowitych oznacza, ze zwraca tez liczbe calkowita
    // w takim wypdaku, przy ujemnej potedze zaokragla do 0
    cout << "4^-5: " << potega(4, -5) << endl;
}