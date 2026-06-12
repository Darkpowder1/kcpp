#include <iomanip>
#include <iostream>
using namespace std;

bool parzysta_1(int liczba) {
    // wszystkie nieparzyste liczby maja ustawiony ostatni bit
    // 1 = 0b00000001
    // zadna, nawet najmniejsza liczba parzysta nie ma go ustawionego
    // 2 = 0b00000010
    // wykonanie operacji and (&) zwraca true, jesli obie liczby maja ustawione te same bity
    // 0 0 0 0 0 1 1 0 // 6
    // 0 0 0 0 0 0 0 1 // 1 
    // ----------------
    // 0 0 0 0 0 0 0 0 <- false, bo nie maja zadnych ustawionych tak samo
    // 
    // 0 0 0 0 0 1 1 1 // 7
    // 0 0 0 0 0 0 0 1 // 1 
    // ----------------
    // 0 0 0 0 0 0 0 1 <- true, pierwszy bit jest ustawiony
    return !(liczba & 0b00000001);
}

bool parzysta_2(int liczba) {
    return (liczba % 2 == 0);
}

bool parzysta_3(int liczba) {
    // jesli 0, zwraca true
    return (liczba % 2 ? 0 : 1);
    // true : false
}

int main() {

    for (int i = -5; i < 6; i++) {
        cout << "czy liczba " << setw(2) << i << " jest parzysta? (funkcja 1): " << (parzysta_1(i) ? "TRUE" : "FALSE") << endl;
        cout << "czy liczba " << setw(2) << i << " jest parzysta? (funkcja 2): " << (parzysta_2(i) ? "TRUE" : "FALSE") << endl;
        cout << "czy liczba " << setw(2) << i << " jest parzysta? (funkcja 3): " << (parzysta_3(i) ? "TRUE" : "FALSE") << endl;
        cout << setw(30) << setfill('-') << " ";
        cout << setfill(' ') << "\n";
    }
    
}