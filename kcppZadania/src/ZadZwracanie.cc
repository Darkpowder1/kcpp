using namespace std;
#include<iostream>

int zwracaniePrzezWartosc(int jakasWartosc) {
    int innaWartosc = jakasWartosc + 10;
    return innaWartosc;
};

int* zwracaniePrzezWskaznik(int* wskaznik) {
    *wskaznik = 10;
    return wskaznik;
};

int& zwracaniePrzezReferencje(int& referencja) {
    referencja  += 10;
    return referencja;
};

int* zwracanieTablicy() {
    // jesli ustawi sie tablice jako static
    // to nie zniknie po wyjsciu ze scope
    // mozna zwrocic do niej pointer

    static int arr[5] = {10, 20, 30, 40, 50};

    return arr;
}


int main() {

    int startowaWartosc = 5;

    cout << "Zwracanie wartosci: " << zwracaniePrzezWartosc(startowaWartosc) << endl;

    cout << "Zwracanie przez referencje: " << zwracaniePrzezReferencje(startowaWartosc) << endl;

    // jak tu nie dam * to zwroci adres, w koncu to pointer
    cout << "Zwracanie przez wskaznik: " << *zwracaniePrzezWskaznik(&startowaWartosc) << endl;

    int* pointerNaTablice = zwracanieTablicy();

    cout << "Pierwszy element tablicy: " << *pointerNaTablice << endl;
    pointerNaTablice++;

    cout << "Drugi element tablicy: " << *pointerNaTablice << endl;
    pointerNaTablice++;

    cout << "Trzeci element tablicy: " << *pointerNaTablice << endl;


}
