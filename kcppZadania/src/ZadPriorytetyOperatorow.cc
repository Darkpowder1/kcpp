#include <iostream>
using namespace std;

int main() {
    // mnozenie ma wyzszy priorytet niz dodawanie
    cout << "2 + 3 * 4   = " << 2 + 3 * 4 << endl;
    cout << "(2 + 3) * 4 = " << (2 + 3) * 4 << endl;

    // dzielenie i modulo przed dodawaniem
    cout << "10 + 20 / 5 = " << 10 + 20 / 5 << endl;
    cout << "10 % 3 + 1  = " << 10 % 3 + 1 << endl;

    // && ma wyzszy priorytet niz || (najpierw liczy sie f && f, potem t || ...)
    int t = 1;
    int f = 0;
    cout << "t || f && f = " << (t || f && f) << endl;

    // inkrementacja wykonuje sie przed mnozeniem
    int a = 5;
    cout << "++a * 2     = " << ++a * 2 << endl;

    // arytmetyka wykonuje sie przed porownaniem
    cout << "2 + 2 == 4  = " << (2 + 2 == 4) << endl;
}
