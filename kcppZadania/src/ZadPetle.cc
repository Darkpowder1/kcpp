#include <iomanip>
#include <iostream>
using namespace std;

void przyklad_while(){
    cout << "petla while dla i = 0 dla i < 5 z inkrementacja i++: " << endl;

    int i = 0;
    while (i < 5) {
        cout << i++ << ", ";
    }
    cout << endl;

    
    cout << "petla while dla j = 0 dla j < 5 z inkrementacja ++j: " << endl;

    int j = 0;
    while (j < 5) {
        cout << ++j << ", ";
    }
    cout << endl;

    cout << endl << "roznica pomiedzy tymi dwoma sposobami inkrementacji jest drobna - w ++j, najpierw dodawanie, potem wypisanie," << endl << "a w i++, najpierw wypisanie, potem dodanie" << endl << endl;

    
}

void przyklad_do_while(){
    cout << "petla do while dla i = 0 dla i > 5 z inkrementacja i++: " << endl;

    int i = 0;
    do {
        cout << i++ << ", ";
    } while (i > 5);
    cout << endl;

    cout << "petla do while dla j = 0 dla j > 5 z inkrementacja ++j: " << endl;

    int j = 0;
    do {
        cout << ++j << ", ";
    } while (j > 5);
    
    cout << endl;
}

void przyklad_for(){
    cout << "petla for dla i = 0 dopoki i < 50 z inkrementacja i++" << endl;
    cout << "pomija parzyste liczby, przy uzyciu continue" << endl;
    cout << "silowo konczy petle kiedy i = 21 (break)" << endl;
    
    for (int i = 0; i < 50; i++) {

        if (i % 2 == 0) {
            continue; // pomija ta iteracje
        } 
        
        if (i == 21) {
            break; // konczy petle
        }
        
        cout << i << ", ";
    }

    cout << endl << endl << "druga petla for. poniewaz wykorzystana jest return dla i == 2, cala metoda zostanie zakonczona i zaden kod dalej (nawet poza petla), nie wykona sie" << endl;
    for (int i = 0; i < 50; i++) {

       if (i == 2) {
           return; // konczy cala metode
       }
        
        cout << i << ", ";
    }

    cout << "nikt nie zobaczy tego tekstu z konsoli!";
    
}

int main() {

    przyklad_for();

    cout << endl << setw(30) << setfill('-') << " ";
    cout << setfill(' ') << "\n";
    cout << endl ;

    przyklad_while();

    cout << endl << setw(30) << setfill('-') << " ";
    cout << setfill(' ') << "\n";
    cout << endl ;

    przyklad_do_while();

    cout << endl << "te dwie petle nie roznia sie od siebie za bardzo";
    cout << endl << "glowna roznica jest taka, ze do while wykona sie przynajmniej raz, wiec zadziala nawet dla nie spelnionego warunku";

    
}