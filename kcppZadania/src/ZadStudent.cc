#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
 * napisalem program sam
 * dodanie innych parametrow to po prostu
 * zamiana stringa na stworzony struct w definicji i referencjach do wektora, 
 * a dostep do tych parametrow jest prosty
 * przykladowo:
 * baza_studentow.at(i).index
 */



// dziala
void dodaj_studenta(vector<string> &baza_studentow, string student){
    baza_studentow.push_back(student);
}


// zwraca index albo -1 jesli nie ma, dziala
int znajdz_studenta(vector<string> &baza_studentow, string student){
    for (int i = baza_studentow.size() - 1; i >= 0; i--) {
        if (baza_studentow.at(i) == student) {
            return i;
        }
    }
    return -1;
}

// po indexie, dziala
void usun_studenta(vector<string> &baza_studentow, int student){
    // trzeba dodac index do poczatku, nie mozna po samym indexie
    baza_studentow.erase(baza_studentow.begin() + student);
}

// po nazwie, dziala
void usun_studenta(vector<string> &baza_studentow, string student){
    int index_studenta = znajdz_studenta(baza_studentow, student);

    if (index_studenta == -1) {
        cout << "Nie znaleziono studenta: " << student << endl << endl;
    } 
    usun_studenta(baza_studentow, index_studenta);
}


// dziala
void wyswietl_liste(vector<string> &baza_studentow){
    cout << "===== ZAWARTOSC BAZY =====" << endl << endl;
    for (size_t i = 0; i < baza_studentow.size(); i++) {
        cout << baza_studentow.at(i) << ", ";
    }
    cout << endl << "======================" << endl << endl;
}

// dziala
void sortuj_liste(vector<string> &baza_studentow){
    sort(baza_studentow.begin(), baza_studentow.end());
}

// dziala
bool sprawdz_czy_istnieje(vector<string> &baza_studentow, string student){
    int index = znajdz_studenta(baza_studentow, student);
    
    if (index == -1) {return false;};
    return true;
}

void wyswietl_menu(){
    cout << "-------------------------------------------------" << endl;
    cout << endl << "witaj w programie zarzadzania baza studentow, wybierz akcje: ";
    cout << endl << "1. dodaj studenta" << endl;
    cout  << "2. usun studenta (nazwa)" << endl;
    cout  << "3. usun studenta (index)" << endl;
    cout  << "4. wyswietl liste" << endl;
    cout  << "5. sortuj liste alfabetycznie" << endl;
    cout  << "6. sprawdz czy student istnieje" << endl;
    cout  << "7. wyjdz" << endl;
    cout << "-------------------------------------------------" << endl;
}

void dopasuj_akcje(vector<string> &baza_studentow, int akcja){
    string user_input;
    int numeric_user_input;
    
    switch (akcja) {
        case 1:
            cout << "Podaj imie studenta: ";

            cin >> user_input;
            
            dodaj_studenta(baza_studentow, user_input);
            break;
        case 2:
            cout << "Podaj imie studenta: ";
            
            cin >> user_input;
            
            usun_studenta(baza_studentow, user_input);
            break;
        case 3:
            cout << "Podaj index studenta: ";
            
            while (!(cin >> numeric_user_input)) {
                cout << "wpisano niepoprawna wartosc, sprobuj ponownie!" << endl;
                cin.clear(); 
                cin.ignore(1, '\n');
            }
            
            usun_studenta(baza_studentow, numeric_user_input);
            break;
        case 4:
            wyswietl_liste(baza_studentow);
            break;
        case 5:
            sortuj_liste(baza_studentow);
            cout << "Posortowano" << endl;
            break;
        case 6:
            cout << "Podaj imie studenta: ";
            
            cin >> user_input;
            
            if (sprawdz_czy_istnieje(baza_studentow, user_input)) {
                cout << "Istnieje" << endl;
            } else {
                cout << "Nie istnieje" << endl;
            }
            break;
            
    }
}

int main() {
    vector<string> studenci; // inicjalizacja

    int akcja;
    
    while (true) {
        wyswietl_menu();

        while (!(cin >> akcja)) {
            cout << "wybrano niepoprawna akcje, sprobuj ponownie!" << endl;

            // bez tego wpada w infinite loop, bo moze przechowywac tylko jedna wartosc
            cin.clear(); // czysci failed state
            cin.ignore(1, '\n'); // niszczy wszystko az do newline character, 1 na iteracje (wyzszy numer = wiecej znakow na raz)
            
        }

        if (akcja > 0 && akcja < 7) {
            dopasuj_akcje(studenci, akcja);
        } else if (akcja == 7) {
            return 0;
        } else {
            cout << "wybrano niepoprawna akcje!" << endl;

        }
        
        
    }
    
}


