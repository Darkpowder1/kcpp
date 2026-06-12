#include <iostream>
using namespace std;

void OperatoryArytmetyczne(){
    cout << "Operatory arytmetyczne" << endl;

    int a = 10;
    int b = 5;
    cout << "a: " << a << " b: " << b << endl << endl;

    cout << "a + b: " << a+b << endl;
    cout << "a - b: " << a-b << endl;
    cout << "a * b: " << a*b << endl;
    cout << "a / b: " << a/b << endl;
    cout << "a % b: " << a%b << endl;

    a++;
    cout << "a++: " << a << endl;
    a = 10;

    b--;
    cout << "b--: " << b << endl;
    b = 5;
    
    cout << "-a: " << -a << endl;
    
    cout << endl << endl;
};


void OperatoryPrzypisania(){
    cout << "Operatory przypisania" << endl << endl;

    int a = 10;
    int b = 5;
    cout << "a: " << a << " b: " << b << endl << endl;

    cout << "a = 10, daje a: " << a << endl;

    a += b;
    cout << "a += b, daje a: " << a << endl;
    a = 10;

    a -= b;
    cout << "a -= b, daje a: " << a << endl;
    a = 10;

    a *= b;
    cout << "a *= b, daje a: " << a << endl;
    a = 10;

    
    a /= b;
    cout << "a /= b, daje a: " << a << endl;
    a = 10;

    
    a %= b;
    cout << "a %= b, daje a: " << a << endl;
    

    cout << endl << "sa tez operatory do operacji bitowych" << endl << endl;

    // and
    a = 11;
    b = 5;
    cout << "a: " << a << " b: " << b << endl << endl;

    // or
    a &= b;
    cout << "a &= b, daje a: " << a << endl;
    a = 11;

    // xor
    a |= b;
    cout << "a |= b, daje a: " << a << endl;
    a = 11;

    // przesuniecie w lewo
    a ^= 2;
    cout << "a ^= 2, daje a: " << a << endl;
    a = 11;

    a <<= 1;
    cout << "a <<= 1, daje a: " << a << endl;
    a = 11;

    a >>= 1;
    cout << "a >>= 1, daje a: " << a << endl;
    a = 11;
    
};

int main() {
    OperatoryArytmetyczne();

    OperatoryPrzypisania();
}

