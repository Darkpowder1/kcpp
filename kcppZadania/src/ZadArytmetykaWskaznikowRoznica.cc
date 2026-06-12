using namespace std;
#include <iostream>

ptrdiff_t roznica(int* p1, int* p2) {
    return p2 - p1;
    
}

// jednak chyba nie chodzi o wartosci, tylko o ptrdiff
/*
int roznica(int* p1, int* p2) {
    // roznica musi byc abs
    int val1 = *p1;
    int val2 = *p2;

    if ((val1 > 0 && val2 > 0) || (val1 < 0 && val2 < 0)) {
        return abs(val1 - val2);
    } else {
        val1 = abs(val1);
        val2 = abs(val2);
        return val1 + val2;
    }
    
}
*/


int main(){
    int tab[10] = {1, -2, 3, -4, 5, -6, 7, -8, 9, -10};

    int* idx1 = &tab[0];
    int* idx2 = &tab[9];

    cout << "roznica pomiedzy pointerami: " << roznica(idx1, idx2);

    
    
    
    
}