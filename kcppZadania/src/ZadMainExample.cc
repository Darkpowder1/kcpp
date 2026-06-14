#include <string>
using namespace std;
#include<iostream>;


// przy extern C nie mozna zwracac rzeczy ktorych nie ma w c - takich jak string
extern "C" bool isNumberEven(int a) {
    if (a % 2 == 0) {
        return true;
    } else {
        return false;
    }
}

// ale z jakiegos powodu mozna bez problemu przyjmowac string (brak w c) jako argument
extern "C" bool stringLengthAboveThreshold(string pString, int pThreshold) {
    int length = pString.length();

    if (length > pThreshold) {
        return true;
    } else {
        return false;
    }
}


float addNumbers(float num1, float num2) {
    return num1 + num2;
}

// overloaded
int addNumbers(int num1, int num2) { return num1 + num2;}

void printSomeData(string data) {
    cout << "The string is: " << data << endl;
    cout << "it has a length of: " << data.size() << " symbols" << endl;

    if (data.size() > 2) {
        cout << "third character is: " << data.at(2);
    };
}


// args = ilosc argumentow
// argv = lista argumentow
int main(int argc, char* argv[]) {

    cout << "Ten program przyjmuje funkcje! Przyklad uzycia: [program] [nazwa_funkcji] [arg1] [arg2] [funkcja] [arg]" << endl << endl;

    // to program robil oryginalnie
    if (argc == 1) { // jesli nic sie nie poda, to jest 1
        int liczba1 = 9;
        int liczba2 = 132;
    
        string someString = "this is a very long string, definitely above threshold";
        
        int liczba3 = addNumbers(liczba1, liczba2);
    
        if (!isNumberEven(liczba3)) {
            someString = "short";
        } 
    
        if (!stringLengthAboveThreshold(someString, liczba1)) {
            printSomeData(someString);
        }
    } else {

        for (int i = 1; i < argc; ++i) {
            string funkcja = argv[i];

            
            if (funkcja == "isNumberEven") { // dziala
                i++;
                float number = stoi(argv[i]); // konwersja z tekstu na int, troche niebezpieczne
                bool even = isNumberEven(number);

                cout << "Podany numer " << number << " ";
                if (even) {
                    cout << "jest parzysty!" << endl;
                } else {
                    cout << "nie jest parzysty!" << endl;
                }

                
            } else if (funkcja == "stringLengthAboveThreshold") { // dziala
                i++;
                string tekst = argv[i];

                i++;
                int threshold = stoi(argv[i]); 

                bool above_threshold = stringLengthAboveThreshold(tekst, threshold);

                cout << "Podany tekst " << tekst << " ";
                if (above_threshold) {
                    cout << "jest dluzszy niz podany limit! (" << threshold << ")" << endl;
                } else {
                    cout << "nie jest dluzszy niz podany limit! (" << threshold << ")" << endl;
                }
            
            } else if (funkcja == "addNumbers") { // dziala
                i++;
                float num1 = stoi(argv[i]);               
                i++;
                float num2 = stoi(argv[i]);

                cout << "suma liczby " << num1 << " oraz liczby " << num2 << " daje: " << addNumbers(num1, num2) << endl;
            
            } else if (funkcja == "printSomeData") {
                i++;
                string data = argv[i];

                printSomeData(data);
            }
            
        }
        
    }

    
}
