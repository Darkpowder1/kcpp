using namespace std;
#include<iostream>

class Punkt{
    public:
        double x;
        double y;

    Punkt operator+(Punkt innyPunkt) {
        Punkt outPunkt;
        outPunkt.x = x + innyPunkt.x;
        outPunkt.y = y + innyPunkt.y;

        return outPunkt;
    };

    void describe() {
        cout << "Punkt ma wspolrzedne: " << endl;
        cout << "x: " << x << endl;
        cout << "y: " << y  << endl;
        cout << endl;
    }

};


int main() {

    cout << "p1" << endl;
    Punkt p1;
    p1.x = 5;
    p1.y = 5;

    p1.describe();

    cout << "p2" << endl;
    Punkt p2;
    p2.x = 10;
    p2.y = 10;

    p2.describe();
    
    cout << "p1 + p2" << endl;
    Punkt p3 = p1 + p2;

    p3.describe();
    

    
}