#include <iostream>
using namespace std;

int main() {
  int liczba;
  long long silnia = 1; // long long, aby uniknąć przepełnienia
  long long suma = 0; // long long, aby uniknąć przepełnienia

  cout << "Podaj liczbe do obliczenia sumy silni: ";
  cin >> liczba;

  if (liczba <= 0) {
      cout << endl << "nie mozna policzyc silni dla tej liczby";
      return 0;
  }

  for (int i = 1; i <= liczba; i++) {
    silnia *= i;
    suma += silnia;
  }

  cout << "Silnia z " << liczba << " wynosi: " << silnia << endl;
  cout << "Suma silni od 1 do " << liczba << " wynosi: " << suma << endl;

  return 0;
}
