#include <iostream>
using namespace std;

class KolejnaKlasa {
    // zmienne domyslnie sa prywatne
    string nazwa;
    int liczba;

    public: 
        void desc() {cout << "nazwa: " << nazwa << " liczba: " << liczba << endl;}

        // konstruktor
        KolejnaKlasa() {
            nazwa = "brak";
            liczba = -1;
        };
        
        // dekonstruktor
        ~KolejnaKlasa() {
            cout << "Kolejna klasa ("<< nazwa <<") zostala zniszczona, ta akcja przyniesie konsekwencje..." << endl;
        }
        
        // konstrukotr przyjmujacy zmienne
        KolejnaKlasa(string n, int l) {
            nazwa = n;
            liczba = l;
        }
        
        // konstruktor przez liste inicjalizacyjna
        KolejnaKlasa(int ll, string nn) : nazwa(nn), liczba(ll) {
            cout << "Uzyto liste inicjalizacyjna!" << endl;
        }
    
};

void inny_scope() {
    KolejnaKlasa k1("a", 1);
    k1.desc();
}

int main() {
    KolejnaKlasa k1(2, "ccc");
    k1.desc();

    inny_scope();

    KolejnaKlasa k2;
    k2.desc();

    

}