#include "Zajecia3.h"
#include <iostream>
#include <cstring>
using namespace std;


// namespace nowyNamespace {
//     int w = 3;
// };

void testStrings() {
    char str1[] = "To be or not to be";
    char str11[] = "T0 be or not to be";
    char str2[10]; // Small buffer
    char str3[40]; // Larger buffer
        
    cout << "strcmp 'To' vs 'T0'" << strcmp(str1, str11);
    //cout << "strxfrm: " << strxfrm(char *s1, const char *s2, size_t n)
};

void testStrlen(){
    char str1[] = "To be or not to be";
    cout << "strlen str1: " << strlen(str1); // length
};
