#include <iostream>
using namespace std;

// deklaracja
struct Kot {
    string imie;
    int ilosc_lap;

    // konstruktor dla pustego obiektu
    Kot() {}

    // lista inicjalizacyjna
    Kot(string nowe_imie, int nowa_ilosc_lap) : imie(nowe_imie), ilosc_lap(nowa_ilosc_lap){}
    
};

int main() {
    // stworzenie obiektu z poczatkowymi wartosciami
    Kot tomek = Kot("Tomek", 3);

    // zamiana wartosci
    tomek.ilosc_lap = 4;

    // odczyywanie wartosci
    cout << "Kot " << tomek.imie << " ma " << tomek.ilosc_lap << " lapy" << endl;
}