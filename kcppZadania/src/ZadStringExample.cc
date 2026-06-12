using namespace std;
#include <iostream>

void print_break(){
    cout << "-------------------" << endl;
    cout << endl;
};



int main() {
    cout << "testowanie opcji string" << endl;

    print_break();

    string someString = "";

    if (someString.empty()) {
        cout << "string jest teraz pusty!" << endl;
    } else {
        cout << "jakims cudem string okazuje sie niepusty..." << endl;
    };

    print_break();

    someString = "jakies znaki";
    cout << "someString: " << someString << endl;
    cout << "teraz string ma size: " << someString.size() << ", to zwraca to samo co length: " << someString.length() << endl;

    print_break();

    cout << "3 znak to: " << someString.at(2) << endl;

    print_break();

    someString.clear();
    cout << "Po uzyciu clear(), size to: " << someString.size() << endl;
    
    print_break();
    
    someString = "jakies znaki znowu";

    cout << "someString: " << someString << endl;
    
    someString.erase(12);

    cout << "someString po usunieciu wszystkiego po 12 znaku zostaje: " << someString << endl;
    
    print_break();

    cout << "'znaki' zaczyna sie na indexie: " << someString.find("znaki") << endl;

    print_break();

    string innyString = "to jest jeszcze inny string";
    someString.swap(innyString);

    cout << "po zamianie (swap): " << someString << endl; 

    print_break();

    cout << "substring od pozycji '16': " << someString.substr(16) << endl;

    print_break();

    string jeszczeInnyString = " nowe informacje";

    someString.append(jeszczeInnyString);

    cout << "someString po appendzie z nowymi informacjami: " << someString << endl;
}
