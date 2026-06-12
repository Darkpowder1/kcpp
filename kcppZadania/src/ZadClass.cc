#include <iostream>
using namespace std;

class jakasKlasa {
    private: // dostep do private tylko wewnatrz klasy
        int x, y;

    
    // deklarowane i definiowane w klasie
    public: 
        int a, b;
        int dodawanie() {
            return x + y;};

        int odejmowanie(); // deklarowane w klasie

        void set_private_zmienne(int n_x, int n_y) {x = n_x; y = n_y;}
        int get_private_x(){return x;}
        int get_private_y(){return x;}

        void set_protected_zmienne(int n_i, int n_j) {i = n_i; j = n_j;}
        int get_private_i(){return i;}
        int get_private_j(){return j;}

        inline bool czy_mniejsze_od_zera(int l){return l < 0;} // inline funkcja
        // w zasadzie wszystkie funkcje zdefiniowane wewnatrz klasy sa inline, ale mozna dopisac slowo recznie

    // protected dziala jak private, ale dostep jest tez wsrod dzieci przez dziedziczenie
    protected:
        int i, j;

    
};

// definiowane poza klasa
int jakasKlasa::odejmowanie() {
    return x - y;
}

void print_public(jakasKlasa o) {
    cout << "a: " << o.a << ", b: " << o.b << endl;
}

int main() {
    jakasKlasa obiektKlasy;
    obiektKlasy.a = 5;
    obiektKlasy.b = -50;

    cout << "a < 0?: " << obiektKlasy.czy_mniejsze_od_zera(obiektKlasy.a) << endl;
    cout << "b < 0?: " << obiektKlasy.czy_mniejsze_od_zera(obiektKlasy.b) << endl;

    obiektKlasy.set_private_zmienne(-2, 4);
    obiektKlasy.set_protected_zmienne(1, 3);

    print_public(obiektKlasy);

    cout << "odejmowanie private zmiennych: " << obiektKlasy.odejmowanie() << endl; 
    cout << "dodawanie private zmiennych: " << obiektKlasy.dodawanie() << endl;
    
}