#include <iostream>
using namespace std;

bool czy_dodatnia(int liczba){
    if (liczba >= 0) {
        return true;
    } else {
        cout << "liczba " << liczba << " nie jest dodatnia" << endl;
        return false;
    }
}

int main() {
  int liczba, suma, ilosc_wprowadzonych_liczb = 0;

  cout << "Wprowadzaj liczby (0 konczy program):" << endl;
  cin >> liczba;
  czy_dodatnia(liczba);


  while (liczba != 0) {
    suma += liczba;
    cin >> liczba;
    czy_dodatnia(liczba);
    ilosc_wprowadzonych_liczb += 1;
  }

  cout << "Suma wprowadzonych liczb: " << suma << endl;
  cout << "Ilosc wprowadzonych liczb: " << ilosc_wprowadzonych_liczb << endl;

  return 0;
}
