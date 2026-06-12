#include "ZadMetodyAbstrakcyjne.h"
#include <cmath>
#include <iostream>
using namespace std;

class Figura {
    public: 
        // virtual pozwala na nadpisywanie
        virtual double obwod()=0;
        virtual double pole_powierzchni()=0; // bez defaultowej wartosci jest error
    
};

// --- kwadrat ---
class Kwadrat : public Figura {
    double bok;

    public:
        Kwadrat(double b) : bok(b){};
    
        // override nadpisuje funkcje rodzica
        double obwod() override {
            return bok * 4;
        }
    
        double pole_powierzchni() override {
            return bok * bok;
        }
};

void ZadMetodyAbstrakcyjne::test_kwadrat(){
    double bok = 5.55;
    Kwadrat k(bok);
    cout << "Kwadrat ma bok: "<< bok << " obwod: " << k.obwod() << " i pole: " << k.pole_powierzchni() << endl << endl; 
}

// --- trojkat ---
class Trojkat : public Figura {
    double bok_a;
    double bok_b;
    double bok_c;

    public:
        Trojkat(double ba, double bb, double bc) : bok_a(ba), bok_b(bb), bok_c(bb){};
    
        double obwod() override {
            return bok_a + bok_b + bok_c;
        }
    
        double pole_powierzchni() override {
            double p = obwod() / 2;
            double x = p * (p-bok_a) * (p-bok_b) * (p-bok_c); 
            return sqrt(x);
        }
};

void ZadMetodyAbstrakcyjne::test_trojkat(){
    double ba = 5.55;
    double bb = 3;
    double bc = 4.76;
    Trojkat t(ba, bb, bc);
    
    cout << "Trojkat ma boki: "<< ba << ", " << bb << ", " << bc << ". obwod: " << t.obwod() << " i pole: " << t.pole_powierzchni() << endl << endl; 
}

// --- prostokat ---
class Prostokat : public Figura {
    double bok_a;
    double bok_b;

    public:
        Prostokat(double ba, double bb) : bok_a(ba), bok_b(bb){};
    
        double obwod() override {
            return (bok_b * 2) + (bok_a * 2);
        }
    
        double pole_powierzchni() override {
            return bok_a * bok_b;
        }
};

void ZadMetodyAbstrakcyjne::test_prostokat(){
    double boka = 5.55;
    double bokb = 3;
    Prostokat p(boka, bokb);
    cout << "Prostokat ma boki: "<< boka << ", " << bokb << " obwod: " << p.obwod() << " i pole: " << p.pole_powierzchni() << endl << endl; 
}


// --- kolo ---
class Kolo : public Figura {
    double r;
    double pi = 3.14;
    
    public:

        double obwod() override {
            return 2 * pi * r;
        }
    
        double pole_powierzchni() override {
            return pi * (r*r);
        }

    
        double dystans(double metry_na_obywatela) {
            return sqrt(metry_na_obywatela / pi); // chyba?
        }
        
        Kolo(double promien) : r(promien){};
};


void ZadMetodyAbstrakcyjne::test_kola(){
    double promien = 100;
    Kolo k(promien);
    cout << "Kolo ma promien: "<< promien << " obwod: " << k.obwod() << " i pole: " << k.pole_powierzchni() << endl; 

    double metry_na_obywatela = 5;
    cout << "Dla kazdego obywtela jest: " << metry_na_obywatela << " metrow. To daje dystans: " << k.dystans(metry_na_obywatela) << " metrow" << endl;
    
}


void ZadMetodyAbstrakcyjne::run() {
    test_kwadrat();

    test_trojkat();

    test_prostokat();

    test_kola();
}
