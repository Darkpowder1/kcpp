#include <iostream>
using namespace std;

// unia ma specyficzny problem - wszystkie jej wartosci wspoldziela ten sam fragment w pamieci
// jej wielkosc jest rowna najwiekszemu elementowi

union zlaUnia { // duzo roznych typow
    int liczba;
    char nazwa[5];
    double zdecydowanieInnaLiczba;
};

int main() {

    cout << "Przyklad korzystania ze zlej uni: " << endl;
    cout << "---------------------------------------" << endl;
    
    zlaUnia unia;

    //cout << "liczba: " << unia.liczba << " nazwa: " << unia.nazwa << " inna liczba: " << unia.zdecydowanieInnaLiczba << endl;
    unia.liczba = 5; // narazie ok
    
    cout << "liczba: " << unia.liczba << " nazwa: " << unia.nazwa << " inna liczba: " << unia.zdecydowanieInnaLiczba << endl;
    unia.zdecydowanieInnaLiczba = 10.35; // juz badzo zle, cos sie nadpisalo
    
    cout << "liczba: " << unia.liczba << " nazwa: " << unia.nazwa << " inna liczba: " << unia.zdecydowanieInnaLiczba << endl;
    unia.nazwa[0]= 'a';
    unia.nazwa[1]= 'd';
    unia.nazwa[2]= 'c';
    unia.nazwa[3]= 'b';
    unia.nazwa[4]= 'e';
    // dalej juz nic nie jest do zrozumienia
    
    cout << "liczba: " << unia.liczba << " nazwa: " << unia.nazwa << " inna liczba: " << unia.zdecydowanieInnaLiczba << endl;

}