#include <iostream>
#include <string>
using namespace std;

int main() {
    int dziesietna;
    cout << "Podaj liczbe dziesietna: ";
    cin >> dziesietna;

    if (dziesietna == 0) {
        cout << "Binarnie: 0" << endl;
        return 0;
    }

    string binarna = "";

    while (dziesietna > 0) {
        int reszta = dziesietna % 2;
        binarna = to_string(reszta) + binarna;
        dziesietna = dziesietna / 2;
    }

    cout << "Binarnie: " << binarna << endl;
}
