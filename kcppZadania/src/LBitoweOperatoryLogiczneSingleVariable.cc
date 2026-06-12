#include <iostream>
using namespace std;


int main(int argc, char* argv[]) {
    int liczba = 0;
    
    // liczby musza byc podane po spacji
    for (int i = 1; i <= 8; i++) {
        int bit = argv[i][0] - '0';
        // poniewaz przyjete charactery maja numeryczna wartosc ascii
        // trzeba odjac zero (48 w ascii), wtedy zostanie 0 albo 1 (49 w ascii)
        
        cout << "bit " << i << ": " << bit << endl;

        if (bit == 1) {
            int shift = 8  - i;

            liczba |= (1 << shift);
        }
        
    }

    cout << endl << "wynik: " << liczba << endl;
}