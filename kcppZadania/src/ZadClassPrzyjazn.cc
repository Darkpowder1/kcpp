#include <iostream>
using namespace std;

// przyjazn oznacza ze jakas klasa ma dostep do prywatnych zmiennych innej klasy

class A {
    int prywatna_liczba = 5;

    // nie da sie nawet zdefiniowac, przyjazn nie jest dwustronna
    //void readB(B klasaB){};

    public:
        friend class B; // deklaracja


        
};
class B {
    int prywatna_liczba = 50;

    public: 
        void readA(A klasaA) {
            cout << "oto sekrety A: " << klasaA.prywatna_liczba << endl;
        }
};

int main() {
    A klasA;
    B klasB;

    klasB.readA(klasA); // klasa B czyta z A
}