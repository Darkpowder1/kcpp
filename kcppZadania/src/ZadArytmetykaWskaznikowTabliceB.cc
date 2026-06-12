using namespace std;
#include <iostream>

void wypelnij_1(double* tablica, int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        cout << "Podaj liczbe " << i+1 << ": ";
        cin >> *tablica;
        tablica++;
    }
}

void wypelnij_2(double* tablica1, double* tablica2, int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        *tablica2 = *tablica1 * 2;
        tablica1++;
        tablica2++;
    }
}

void wypelnij_3(double* tablica1, double* tablica2, double* tablica3, int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        *tablica3 = *tablica1 + *tablica2;
        tablica1++;
        tablica2++;
        tablica3++;
    }
}

void print_tablica(double* tablica, int rozmiar) {
    for (int i=0; i < rozmiar; i++) {
        cout << *tablica << ", ";

        tablica++;
    }

    cout << endl;
    cout << endl;
}


int main() {
    double tab1[5];
    wypelnij_1(tab1, 5);
    cout << "tablica 1: " << endl;
    print_tablica(tab1, 5);
    
    double tab2[5];
    wypelnij_2(tab1, tab2, 5);
    cout << "tablica 2: " << endl;
    print_tablica(tab2, 5);

    double tab3[5];
    wypelnij_3(tab1, tab2, tab3, 5);
    cout << "tablica 3: " << endl;
    print_tablica(tab3, 5);
}