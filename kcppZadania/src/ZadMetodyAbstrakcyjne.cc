#include <cmath>
#include <iostream>
#include <iomanip>
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

void test_kwadrat(){
    double bok = 5.55;
    Kwadrat k(bok);

    cout << "--- Kwadrat ---" << endl;
    cout << left << setw(10) << "bok:" << bok << endl;
    cout << left << setw(10) << "obwod:" << k.obwod() << endl;
    cout << left << setw(10) << "pole:" << k.pole_powierzchni() << endl;
    cout << endl;
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

void test_trojkat(){
    double ba = 5.55;
    double bb = 3;
    double bc = 4.76;
    Trojkat t(ba, bb, bc);

    cout << "--- Trojkat ---" << endl;
    cout << left << setw(10) << "boki:" << ba << ", " << bb << ", " << bc << endl;
    cout << left << setw(10) << "obwod:" << t.obwod() << endl;
    cout << left << setw(10) << "pole:" << t.pole_powierzchni() << endl;
    cout << endl;
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

void test_prostokat(){
    double boka = 5.55;
    double bokb = 3;
    Prostokat p(boka, bokb);

    cout << "--- Prostokat ---" << endl;
    cout << left << setw(10) << "boki:" << boka << ", " << bokb << endl;
    cout << left << setw(10) << "obwod:" << p.obwod() << endl;
    cout << left << setw(10) << "pole:" << p.pole_powierzchni() << endl;
    cout << endl;
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


void test_kola(){
    double promien = 100;
    Kolo k(promien);

    cout << "--- Kolo ---" << endl;
    cout << left << setw(10) << "promien:" << promien << endl;
    cout << left << setw(10) << "obwod:" << k.obwod() << endl;
    cout << left << setw(10) << "pole:" << k.pole_powierzchni() << endl;
    cout << endl;

    cout << "Dystans do nastepnej osoby w zaleznosci od metrow na obywatela:" << endl;
    cout << left << setw(20) << "metry/obywatel" << right << setw(10) << "dystans" << endl;
    cout << setfill('-') << setw(30) << "" << setfill(' ') << endl;

    double metry[3] = {5, 10, 20};
    for (int i = 0; i < 3; i++) {
        cout << left << setw(20) << metry[i] << right << setw(10) << k.dystans(metry[i]) << endl;
    }
    cout << endl;
}


int main() {
    cout << fixed << setprecision(2);

    cout << "===== Figury geometryczne (obwod i pole) =====" << endl;
    cout << endl;

    test_kwadrat();

    test_trojkat();

    test_prostokat();

    test_kola();
}