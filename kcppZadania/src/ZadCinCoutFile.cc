#include <fstream>
#include <iostream>
#include <string>
using namespace std;

void cout_cerr_example() {
    cout << "wypisywanie na ekran odbyrwa sie przy uzyciu cout, ";
    cout << "ale cout jest buforowane i musi czekac na endl lub zakonczenie programu" << endl;

    cerr << "do errorow sluzy cerr, nie jest buforowany";
}

void zapisywanie_do_pliku() {
    //cout_cerr_example();

    cout << endl << endl << "przy zapisywaniu do pliku, korzysta sie z niego jak ze strumienia" << endl;

    string file_name = "jakisplik.txt";

    ofstream outfile(file_name);

    outfile << "jakis tekst\n";
    outfile << "wiecej";
    outfile << " tekstu";

    outfile.close();

    cout << "zapisano tekst do: " << file_name << endl;
}

void odczytywanie_z_pliku() {

    cout << endl << "przy czytaniu z pliku, korzysta sie z getline" << endl;

    string file_name = "jakisplik.txt";

    fstream infile(file_name);

    string line;

    cout << "zawartosc pliku: " << endl;
    while (getline(infile, line)) { // z infile do line
        cout << line << endl;
    } 

    infile.close();


    cout << endl << "odczytano tekst z: " << file_name << endl;
}

int main() {

    cout_cerr_example();

    zapisywanie_do_pliku();

    odczytywanie_z_pliku();
    
    
}