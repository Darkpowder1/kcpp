using namespace std;
#include <iostream>

int main (){

    int jakasZmienna1 = 5;
    int jakasZmienna2 = 50;
    int jakasZmienna3 = 500;
    int jakasZmienna4 = 5000;

    cout << "Adres 1: " << &jakasZmienna1 << endl;
    cout << "Adres 2: " << &jakasZmienna2 << endl;
    cout << "Adres 3: " << &jakasZmienna3 << endl;
    cout << "Adres 4: " << &jakasZmienna4 << endl;

    // zmienna sa zapisywane na stacku, 
    // adresy kolejnych wartosci zmniejszaja sie o 4 bajty
    // oznacza to, ze stack rosnie w dol
}