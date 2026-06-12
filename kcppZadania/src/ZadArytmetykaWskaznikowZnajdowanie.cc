using namespace std;
#include <iostream>

int* maxElement(int* tablica, int rozmiar){
    int* najwieksza = tablica;
    
    for (int i=0; i < rozmiar; i++) {
        if (*najwieksza < *tablica) {
            najwieksza = tablica;
        };
        
        tablica++;
    }

    return najwieksza;
}


int main(){
    int jakisArray[5] = {1, 2, 3, 2, 1};

    cout << "Najwieksza liczba w tablicy: " << *maxElement(jakisArray, 5) << endl;
}
