#include <ios>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << left << setw(15) << "Stala" <<
    left << setw(23) << "Wartosc (domyslnie)" <<
    left << setw(19) << "Notacja stala" <<
    left << setw(15) << "Notacja naukowa" <<
    "\n";

    cout << setfill('-') << setw(8) << " ";
    cout << setfill(' ') << setw(6) << " ";

    cout << setfill('-') <<  setw(18) << " ";
    cout << setfill(' ') << setw(5) << " ";


    cout << setfill('-') <<  setw(14) << " ";
    cout << setfill(' ') << setw(5) << " ";

    cout << setfill('-') <<  setw(15) << " ";
    cout << setfill(' ') << setw(6) << " ";


    cout << "\n";

    double pi = 3.141593;
    double e = 2.718282;
    double golden_ratio = 1.618034;

    cout << setprecision(6);

    cout << left << setw(15) << "Pi" <<
     setw(23) << pi <<
    setw(19) << fixed << pi <<
    setw(15) << scientific << pi  <<
    "\n";

    cout << setw(15) << "e" <<
    setw(23) << defaultfloat<< e <<
    setw(19) << fixed << e <<
    setw(15) << scientific << e  <<
    "\n";

    cout << setw(15) << "Zloty podzial" <<
    setw(23) << defaultfloat<< golden_ratio <<
    setw(19) << fixed << golden_ratio <<
    setw(15) << scientific << golden_ratio <<
    "\n";
}