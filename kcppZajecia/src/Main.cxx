#include "Test.h"
#include "Main.h"
#include <cstdlib>
#include <iostream>
#include "Zajecia3.h"
using namespace std;

int main() {
    cout << "whatever\n";
    
    int aa = 2;
    test x1(aa); // wykonuje konstruktor
    test x2(aa);
    
    cout << x2.no_test << endl; // 2 alive
        
    x1.~test();
    
    cout << x2.no_test << endl; // 1 left
    
    cout << endl;
    
    cout << x2.matchAnimalToNumber(test::Cat) << endl; // cat is 0
    cout << x2.matchAnimalToNumber(test::Dog) << endl;
   
   test::Confusion c1 = test::Confusion::b; 
    
    cout << static_cast<char>(c1)  << endl;
    // dla dokladniejszych informacji o castach: 
    // LStaticCast.cc
}