#include <iostream>
using namespace std;

void fill_tablica_2d(int* tablica, int rzedy, int kolumny) {
    for (int i=0; i< rzedy; i++) {
        for (int j=0; j< kolumny; j++) {

            *tablica = (i * kolumny + j);
            tablica++;
            
        }
    } 
}

void print_tablica_2d(int* tablica, int rzedy, int kolumny) {
    for (int i=0; i< rzedy; i++) {
        for (int j=0; j< kolumny; j++) {

            cout << *tablica << "  ";
            tablica++;
            
        }
        cout << endl;
    }
}


void print_tablica_2d_adresy(int* tablica, int rzedy, int kolumny) {
    for (int i=0; i< rzedy; i++) {
        for (int j=0; j< kolumny; j++) {

            cout << tablica << "  ";
            tablica++;
            
        }
        cout << endl;
    }
}


int main() {
    int tab[3][3];

    // trzeba wpisac [0][0], bo inaczej nie wie gdzie zaczac
    fill_tablica_2d(&tab[0][0], 3, 3);

    cout << "tablica 2d 3x3 wypelniona po kolei: " << endl;
    print_tablica_2d(&tab[0][0], 3, 3);
    cout << "wzor: (rzad * ilosc_kolumn) + kolumna" << endl;
    cout << endl;
    
    cout << "tablica 2d adresy w pamieci: " << endl;
    print_tablica_2d_adresy(&tab[0][0], 3, 3);
    cout << "tablica dwuwymiarowa to zwykla tablica o wielkosci rzedy*kolumny";

}