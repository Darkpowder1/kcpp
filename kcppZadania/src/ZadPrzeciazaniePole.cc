using namespace std;
#include<iostream>

// kwadrat
float pole(float bok) {return bok*bok;};

// prostokat
float pole(float bok1, float bok2) {
    return bok1 * bok2;
}

// kolo
float pole(double promien) {
    // promien musi byc innego typu niz bok w kwadracie
    // inaczej beda mialy po jeden parametr i bedzie error
    double pi = 3.14;

    return pi*(promien*promien);
}

int main() {
    float bok = 5;
    
    cout << "pole kwadratu o boku: " << bok << " , to: " << pole(bok) << endl; 

    float bok2 = 10;
    cout << "pole prostokatu o bokach: " << bok << ", " << bok2 <<  " , to: " << pole(bok, bok2) << endl;

    double promien = static_cast<double>(bok);
    cout << "pole kola o promieniu: " << promien << " , to: " << pole(promien) << endl; 
}