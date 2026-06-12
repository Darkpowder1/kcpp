// include to tez jest dyrektywa preprocesora
#include <iostream>
using namespace std;

// bloki dyrektyw mozna pisac poza funkcjami

// define zastepuje wszystkie wystapienia BEST_OS na "linux"
#define BEST_OS "linux"
// mozna zakomentowac powyzsza linijke, zeby wykonac blok else w test_def()

// jesli nie zdefiniowano HORRIBLE_OS wczesniej, stanie sie to tutaj przez if not def
#ifndef HORRIBLE_OS
    #define HORRIBLE_OS "windows"
#endif

void test_def() {

    #ifdef BEST_OS // jesli jest zdefiniowane
        cout << "najlepszy system to: " << BEST_OS << endl; // zostanie zastapione
    #else // nie wykona sie, bo BEST_OS jest zdefiniowane
        cout << "nie wiem jaki system jest najlepszy, pewnie " << HORRIBLE_OS << endl;
    #endif
}


// mozna definiowac makra ze zmiennymi
#define PODWOJENIE(x) x+x
// tak naprawde dokladnie jak wszystkie define wyzej, to po prostu zastepuje tekst


// ten zapis moglby byc rownowazny z makro, ale obsluguje tylko int, a makro w zasadzie wszystkie typy liczbowe
int podwojenie(int x) {
    return x + x;
}
// trzeba by napisac kilka funkcji, overloadowac, trwa dluzej niz pisanie makra

void test_makro(){
    int x = 10;
    double y = 10.5;
    cout << "x to: " << x << endl;
    cout << "y to: " << y << endl;
    cout << "x podwojony to: " << PODWOJENIE(x) << endl;
    cout << "x podwojony przez funkcje to: " << podwojenie(x) << endl; // zadziala tylko dla int
    cout << "y podwojony to: " << PODWOJENIE(y) << endl;
}

void test_hash_no_macro() {
    cout << endl;
    int zmienna_10 = 10;
    cout << zmienna_10 << endl; // cala definicja jest w makro

    int zmienna_100 = 100;
    cout << zmienna_100 << endl; // cala definicja jest w makro
    
}


// korzystanie z ## powoduje sklejenie prawej i lewej czesci
// mozna to na przyklad wykorzystac do nieskonczonego tworzenia nowych zmiennych
#define TWORZENIE_ZMIENNEJ(numer) int zmienna_ ## numer = numer
// tak w zasadzie mozna w ten sam sposob tworzyc nawet funkcje albo cokolwiek innego
// # = zamiana tekstu
// ## = laczenie 

void test_hash(){
    TWORZENIE_ZMIENNEJ(10);
    cout << zmienna_10 << endl; // cala definicja jest w makro

    TWORZENIE_ZMIENNEJ(100);
    cout << zmienna_100 << endl; // cala definicja jest w makro

    // ten sam efekt mozna osiagnac po prostu piszac je recznie 
    test_hash_no_macro();
}


int main() {

    test_def();

    test_makro();

    test_hash();
}