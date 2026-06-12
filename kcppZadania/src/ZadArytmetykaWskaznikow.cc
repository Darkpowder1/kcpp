#include <iostream>
using namespace std;

void print_tablica(int* tablica, int rozmiar) {
    for (int i=0; i < rozmiar; i++) {
        cout << tablica[i] << ", ";

    }

    cout << endl;
    cout << endl;
}

void reset_tablicy(int* tablica, int rozmiar) {
    for (int i=0; i < rozmiar; i++) {
        tablica[i] = i+1;
    }
}


void Funkcja1(int* tablica, int rozmiar){
    int* p; 
    
        // 1
        reset_tablicy(tablica, rozmiar);
        p = tablica; 
        
        cout << "Operacja: p++" << endl;
        cout << "zwraca: " << p++ << endl;
        cout << "Pointer p jest na indeksie: " << (p - tablica) << ", czyli wartosc: " << *p << endl;
        print_tablica(tablica, rozmiar);
    
        // 2
        reset_tablicy(tablica, rozmiar);
        p = tablica;
        
        cout << "Operacja: ++p" << endl;
        cout << "zwraca: " << ++p <<endl;
        cout << "Pointer p jest na indeksie: " << (p - tablica) << ", czyli wartosc: " << *p << endl;
        print_tablica(tablica, rozmiar);
    
        // 3
        reset_tablicy(tablica, rozmiar);
        p = tablica;
        
        cout << "Operacja: ++*p" << endl;
        cout << "zwraca: " << ++*p <<endl;
        cout << "Pointer p jest na indeksie: " << (p - tablica) << ", czyli wartosc: " << *p << endl;
        print_tablica(tablica, rozmiar);
    
        // 4
        reset_tablicy(tablica, rozmiar);
        p = tablica;
        
        cout << "Operacja: ++(*p)" << endl;
        cout << "zwraca: " << ++(*p) <<endl;
        cout << "Pointer p jest na indeksie: " << (p - tablica) << ", czyli wartosc: " << *p << endl;
        print_tablica(tablica, rozmiar);
    
        // 5
        reset_tablicy(tablica, rozmiar);
        p = tablica;
        
        cout << "Operacja: ++*(p)" << endl;
        cout << "zwraca: " << ++*(p) << endl;
        cout << "Pointer p jest na indeksie: " << (p - tablica) << ", czyli wartosc: " << *p << endl;
        print_tablica(tablica, rozmiar);

        // 6
        reset_tablicy(tablica, rozmiar);
        p = tablica;
        
        cout << "Operacja: *p++" << endl;
        cout << "zwraca: " << *p++ << endl;
        cout << "Pointer p jest na indeksie: " << (p - tablica) << ", czyli wartosc: " << *p << endl;
        print_tablica(tablica, rozmiar);

        // 7
        reset_tablicy(tablica, rozmiar);
        p = tablica;
        
        cout << "Operacja: (*p)++" << endl;
        cout << "zwraca: " << (*p)++ <<endl;
        cout << "Pointer p jest na indeksie: " << (p - tablica) << ", czyli wartosc: " << *p << endl;
        print_tablica(tablica, rozmiar);

        // 8
        reset_tablicy(tablica, rozmiar);
        p = tablica;
        
        cout << "Operacja: *(p)++" << endl;
        cout << "zwraca: " << *(p)++ << endl;
        cout << "Pointer p jest na indeksie: " << (p - tablica) << ", czyli wartosc: " << *p << endl;
        print_tablica(tablica, rozmiar);

        // 9
        reset_tablicy(tablica, rozmiar);
        p = tablica;
        
        cout << "Operacja: *++p" << endl;
        cout << "zwraca: " << *++p  << endl;
        cout << "Pointer p jest na indeksie: " << (p - tablica) << ", czyli wartosc: " << *p << endl;
        print_tablica(tablica, rozmiar);


        // 10
        reset_tablicy(tablica, rozmiar);
        p = tablica;
        
        cout << "Operacja: *(++p)" << endl;
        cout << "zwraca: " << *(++p) << endl;
        cout << "Pointer p jest na indeksie: " << (p - tablica) << ", czyli wartosc: " << *p << endl;
        print_tablica(tablica, rozmiar);



    
    
}

void Funkcja2() {
    int a;
    int b;
    int c;
    float x;
    int* wsk_int;
    
    a = b = c = 0;
    cout << "1. A, B, C: " << a << "\t" << b << "\t" << c << endl;
  
    b = 10;
    cout << "2. A, B, C: " << a << "\t" << b << "\t" << c << endl;
  
    wsk_int = &b;
    *(wsk_int - 1) = 20;
    cout << "3. A, B, C: " << a << "\t" << b << "\t" << c << endl;
  
    wsk_int = &a;
    *(wsk_int - 1) = 30;
    cout << "4. A, B, C: " << a << "\t" << b << "\t" << c << endl;
  
    *(&a) = 40;
    cout << "5. A, B, C: " << a << "\t" << b << "\t" << c << endl;
  
    *(&c + 1) = 50;
    cout << "6. A, B, C: " << a << "\t" << b << "\t" << c << endl;
  
    *((int*)&x + 1) = 60;
    cout << "7. A, B, C: " << a << "\t" << b << "\t" << c << endl;
  
    *(int*)(&x + 2) = 70;
    cout << "8. A, B, C: " << a << "\t" << b << "\t" << c << endl;
  
    *((int*)&a) = 80;
    cout << "9. A, B, C: " << a << "\t" << b << "\t" << c << endl;
  
    *(int*)(&a - 1) = 90;
    cout << "10. A, B, C: " << a << "\t" << b << "\t" << c << endl;
};

int main() {
    int tablica[5] = {1, 2, 3, 4, 5};
    
    Funkcja1(tablica, 5);

    cout << endl << "--------------------" << endl << endl;

    // glowna zmiana polegala na tym, ze stack rosnie w dol
    // a nie w gore, wiec trzeba zmienic znaki
    Funkcja2();
    

}

