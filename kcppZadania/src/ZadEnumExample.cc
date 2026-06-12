// scoped i unscped enum z miesiacami
#include <iostream>;
using namespace std;

// scoped
enum class e_months{
  Styczen,
  Luty,
  Marzec,
  Kwiecien,
  Maj,
  Czerwiec,
  Lipiec,
  Sierpien,
  Wrzesien,
  Pazdziernik,
  Listopad,
  Grudzien
};

// unscoped
enum e_favourite_months {
  Marzec,
  Sierpien = 13 // mozna recznie przypisywac wartosci
};
// poniewaz nie jest zawarty w swojej klasie, wszystkie unscoped enumy musza miec unikalne wartosci


int main() {

  e_months bday_month = e_months::Marzec;

  e_favourite_months some_other_month = e_favourite_months::Sierpien;


  if (bday_month == e_months::Marzec) {
      // to nie zadziala - jest domyslnie konwertowane na liczbe
    // cout << "it is already: " << bday_month << endl;

    // trzeba recznie castowac na liczbe, inaczej zglasza error
    cout << "it is already: " << static_cast<int>(bday_month) << endl;

    // cast na liczbe dzieje sie automatycznie
    cout << "happy bday!, im glad the month is not: " << some_other_month << endl;
  }

}
