using namespace std;
#include <iostream>

void zamien(int* a, int* b) {

    // temp_a = wartosc na ktora wskazuje a
    int temp_a = *a;
    int temp_b = *b;

    // pointer b zaczyna wskazywac na adres a, zle
    //b = a;

    *a = temp_b;
    *b = temp_a;
    
    
}


int main() {
    int liczba1 = 5;
    int liczba2 = 50;

    int* pl1 = &liczba1;
    int* pl2 = &liczba2;

    cout << "Wartosc liczby 1: " << liczba1 << endl;
    cout << "Adres liczby 1: " << &liczba1 << endl;
    cout << "Wartosc liczby 2: " << liczba2 << endl;
    cout << "Adres liczby 2: " << &liczba2 << endl;

    zamien(pl1, pl2);
    cout << "--- zamieniono ---" << endl;
    cout << "Wartosc liczby 1: " << liczba1 << endl;
    cout << "Adres liczby 1: " << &liczba1 << endl;
    cout << "Wartosc liczby 2: " << liczba2 << endl;
    cout << "Adres liczby 2: " << &liczba2 << endl;
    
}