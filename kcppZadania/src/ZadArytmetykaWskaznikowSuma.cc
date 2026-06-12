using namespace std;
#include <iostream>

int suma(int* tablica, int rozmiar){
    int suma = 0;
    for (int i=0; i < rozmiar; i++) {
        suma += *tablica;
        tablica++;
    }

    return suma;
}


int main(){
    int jakisArray[5] = {1, 1, 1, 1, 1};
                                // array decay
    cout << "Suma tablicy: " << suma(jakisArray, 5) << endl;
}
