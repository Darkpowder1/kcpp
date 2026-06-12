#include <iostream>
#include <sstream>
using namespace std;

void przyklad_oss() {
    cout << "biblioteka pozwala korzystac ze stringa jak ze strumienia" << endl;

    cout << "--- ostringstream"  << endl;
    cout << "--- pisanie " << endl;
    int jakas_liczba = 10;
    
    // tworzenie stringa
    ostringstream oss;

    // pisanie do stringa
    oss << "Jakas liczba: " << jakas_liczba;

    // wypisywanie oss
    cout << "zawartosc oss: " << oss.str() << endl;

    // mozna tez wyczyscic, zeby wykorzystac pozniej
    oss.str(""); 
}

void przyklad_iss() {
    cout << endl << "--- istringstream " << endl;
    cout << "--- czytanie i przypisywanie" << endl << endl;
    
    cout << "iss splituje string na spacji, podaje po jeden wyraz na raz (uzycie >>)" << endl;
    cout << "w zasadzie troche dziala jak iterator" << endl;
    
    // iss trzeba stworzyc z jakiegos stringa
    string jakisString = "133 2 3 4324 5 6 237 8 9 0 a bbbbb c";
    istringstream iss(jakisString);

    while (!iss.fail() && !iss.eof()) { // fail to error, eof to end of file
        string out;
        iss >> out;
        cout << "iss: " << out << endl;
    }
    cout << endl;
} 

void przyklad_ss() {
    cout << "--- stringstream " << endl;
    cout << "--- polaczenie oss i iss" << endl << endl;
    
    cout << "mozna korzystac z obu operatorow" << endl;

    stringstream stream;

    // mozna zapisywac 
    float jakasLiczba = 132.2354;
    stream << jakasLiczba;


    // mozna odczytywac (zapisujac do stringa)
    string odczytana_liczba;
    stream >> odczytana_liczba;

    cout << "Wpisana liczba to: " << odczytana_liczba << endl;

    
}

int main() {

    przyklad_oss();

    przyklad_iss();

    przyklad_ss();


    
}