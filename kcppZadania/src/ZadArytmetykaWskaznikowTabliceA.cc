using namespace std;
#include <iostream>

void zamien(int* a, int* b) {
    int temp_a = *a;
    int temp_b = *b;

    *a = temp_b;
    *b = temp_a;
}

// odwrocic kolejnosc elementow w tablicy uzywajac tylko wskasnikow
void odwroc(int* tablica, int rozmiar) {

    int* lewa = tablica;
    int* prawa = tablica + (rozmiar - 1);

    while (lewa < prawa) {
        zamien(lewa, prawa);
        lewa++;
        prawa--;
    }
    
}


// znalezc i wyswietlic najwyzszy element (arytmetyka wskaznikow)
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

// obliczyc i wyswietlic sume elementow tablicy (wskaznikami)
int suma(int* tablica, int rozmiar){
    int suma = 0;
    for (int i=0; i < rozmiar; i++) {
        suma += *tablica;
        tablica++;
    }

    return suma;
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
    // statyczna tablica 10 liczb calkowitych
    static int tablica[10];
    int* tab_poninter = tablica;
    
    // wypelnienie jej wartosciami od 1 do 10
    for (int i = 1; i <= 10; i++) {
        *tab_poninter = i;
        tab_poninter++;
    }
    cout << "tablica: " << endl;
    print_tablica(tablica, 10);

    cout << "suma: " << suma(tablica, 10) << endl;
    cout << "najwiekszy element: " << *maxElement(tablica, 10) << endl;

    odwroc(tablica,10);
    cout << "odwrocona tablica: " << endl;
    print_tablica(tablica, 10);

    
     
    
}

