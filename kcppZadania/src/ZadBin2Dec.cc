#include <iostream>
#include <string>
using namespace std;

int main() {
    string binarna;
    cout << "Podaj liczbe binarna: ";
    cin >> binarna;

    int dziesietna = 0;

    // kazdy krok to wynik * 2 + biezaca cyfra
    for (int i = 0; i < binarna.length(); i++) {
        dziesietna = dziesietna * 2 + (binarna[i] - '0');
    }

    cout << "Dziesietnie: " << dziesietna << endl;
}
