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



int main() {

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
    
}
