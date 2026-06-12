using namespace std;
#include<iostream>

int dodaj(int l1, int l2) {
    return l1 + l2;
}

double dodaj(double l1, double l2) {
    return l1 + l2;
}

string dodaj(string s1, string s2) {
    return s1.append(s2);
}

int main() {

    int l1 = 5;
    int l2 = 10;

    cout << "dowawanie liczb calkowitych: " << dodaj(l1, l2) << endl;

    double l3 = 12.3124;
    double l4 = 432.5643;
    cout << "dowawanie liczb zmiennoprzecinkowych: " << dodaj(l3, l4) << endl;

    string s1 = "to jest jakis string";
    string s2 = ", a to jest jego kontynucja";

    cout << "konkatynacja stringow daje: " << dodaj(s1, s2) << endl;
    
}