#include <iostream>
using namespace std;

bool parzysta_1(int liczba) {return !(liczba & 0b00000001);}

bool parzysta_2(int liczba) {return (liczba % 2 == 0);}

bool parzysta_3(int liczba) {return (liczba % 2 ? 0 : 1);}

enum class WybranaFunkcja {
    Parzysta1,
    Parzysta2,
    Parzysta3,
    Err
};

// tlumaczenie slowa na enum
WybranaFunkcja match_string(string slowo) {
    if (slowo == "parzysta1") {
        return WybranaFunkcja::Parzysta1;
    } else if (slowo == "parzysta2") {
        return WybranaFunkcja::Parzysta2;
    } else if (slowo == "parzysta3") {
        return WybranaFunkcja::Parzysta3;
    } else {
        return WybranaFunkcja::Err;
    }
}



void match_funkcja(string slowo, int i) {
    
    switch (match_string(slowo)) {
        case WybranaFunkcja::Parzysta1:
            cout << "wybrano funkcje 1 dla liczby:  " << i << ", czy jest parzysta?: " << parzysta_1(i) << endl;
            break;
        case WybranaFunkcja::Parzysta2:
            cout << "wybrano funkcje 2 dla liczby:  " << i << ", czy jest parzysta?: " << parzysta_2(i) << endl;
            break;
        case WybranaFunkcja::Parzysta3:
            cout << "wybrano funkcje 3 dla liczby:  " << i << ", czy jest parzysta?: " << parzysta_3(i) << endl;
            break;
        case WybranaFunkcja::Err:
            cout << "blad! nie ma takiej opcji" << endl;
    }
}

int main() {
    cout << "nie da sie zrobic tak, zeby switch bezposrednio przyjmowal stringa" << endl;
    cout << "mozna natomaist dopasowac string do jakiegos enuma i dopasowywac tego enuma" << endl << endl;


    match_funkcja("parzysta1", 10);
    match_funkcja("parzysta2", 9);
    match_funkcja("parzysta3", 7);
    match_funkcja("parkdsfngdrklfgsnj", 10);

    
    
}