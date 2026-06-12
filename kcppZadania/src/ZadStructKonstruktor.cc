#include <iostream>
using namespace std;


struct KolejnyStruct {
    // zmienne domyslnie sa publiczne
    string nazwa;
    int liczba;
    // nie jest potrzebny blok public

    void desc() {cout << "nazwa: " << nazwa << " liczba: " << liczba << endl;}

    // konstruktor
    KolejnyStruct(){};
    
    // dekonstruktor
    ~KolejnyStruct(){
        cout << "struct " << nazwa << " zostal zniszczony!" << endl;
    }
    
    // konstrukotr przyjmujacy zmienne
    KolejnyStruct(string nnazwa, int nliczba) {
        nazwa = nnazwa;
        liczba = nliczba;
    }
    
    // konstruktor przez liste inicjalizacyjna
    KolejnyStruct(int l, string s) : nazwa(s), liczba(l){};
};


void inny_scope() {
    KolejnyStruct s1("a", 1);
    s1.desc();
}

int main() {
    KolejnyStruct s1(2, "ccc");
    s1.desc();

    inny_scope();

    KolejnyStruct s2;
    s2.desc();

    

}


