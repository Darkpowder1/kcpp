#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;

int main() {

    cout << setw(10) << "Jezyk C" 
    << setw(30) << "Jezyk C++" << "\n";

    // 1
    cout << setfill('-') << setw(49) << "" << "\n"; 
    cout << setfill(' ');

    //cout << setw(6) << "";

    printf("%i", 19);

    cout << setw(23) << '|';
    
    cout << 19 << "\n";


    
    // 2
    cout << setfill('-') << setw(49) << "" << "\n"; 
    cout << setfill(' ');

    printf("%x", 19);

    cout << setw(23) << '|';
    
    cout << hex << 19 << "\n";



    
    // 3
    cout << setfill('-') << setw(49) << "" << "\n"; 
    cout << setfill(' ');

    printf("%f", 19.0);

    cout << setw(16) << '|';
    
    cout << 19.0 << "\n";


    
    // 4
    cout << setfill('-') << setw(49) << "" << "\n"; 
    cout << setfill(' ');


    double var = 19.0;
    printf("%f", var);

    cout << setw(16) << '|';
    
    cout << var << "\n";



    
    // 5
    cout << setfill('-') << setw(49) << "" << "\n"; 
    cout << setfill(' ');

    printf("%9f", 3.0);

    cout << setw(16) << '|';
    
    cout << setw(11) << 19.0 << "\n";


    
    // 6
    cout << setfill('-') << setw(49) << "" << "\n"; 
    cout << setfill(' ');



    printf("%11.3f", 3.1234);

    cout << setw(14) << '|';
    
    cout << setw(11) << setprecision(3) << 7.0 << "\n";


    
    // 7
    cout << setfill('-') << setw(49) << "" << "\n"; 
    cout << setfill(' ');


    printf("Napis%f%c", 9.0, 'z');

    cout << setw(11) << '|';
    
    cout << "Napis" << 9.0 << 'z' << "\n";
}