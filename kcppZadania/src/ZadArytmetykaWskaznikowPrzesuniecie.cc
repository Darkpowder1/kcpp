using namespace std;
#include <iostream>


void przesun(int* tablica, int rozmiar) {
    // zapisac ostatni element, od konca przesuwac w prawo az dotre do pierwszego
    // wpisac ostatni element na pierwsze miejsce

    tablica += rozmiar-1;

    int lastElement = *tablica;

    for (int x = rozmiar-1; x > 0; x--) {
        tablica --;
        int prevVal = *tablica;
        tablica ++;
        
        *tablica = prevVal;
        tablica--;
    }

    *tablica = lastElement;
}

void print_tablica(int* tablica, int rozmiar) {
    for (int i=0; i < rozmiar; i++) {
        cout << *tablica << ", ";

        tablica++;
    }

    cout << endl;
    cout << endl;
}

int main() {

    int jakisArray[5] = {1, 2, 3, 4, 5};

    print_tablica(jakisArray, 5);

    przesun(jakisArray, 5);

    cout << "przesunieta: " << endl;
    print_tablica(jakisArray, 5);
    
}