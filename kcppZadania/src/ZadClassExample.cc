#include <ostream>
using namespace std;
#include <iostream>


// --- klasa ---
class Boat {
    public:
        // konstruktor
        Boat();

        // dekonstruktor
        ~Boat();

        // setters
        void SetFuelCapacity(float pfFuelCapacity) {
            fFuelCapacity = pfFuelCapacity;
        };

        void SetCurrentFuel(float pfCurrentFuel) {
            if (pfCurrentFuel > fFuelCapacity) {
                cout << "the boat's tank is overfilled!!!" << endl;
                fCurrentFuel = fFuelCapacity;
            } else {
                fCurrentFuel = pfCurrentFuel;
            }
        };

        void SetMaxSpeed(float pfMaxSpeed) {
            fMaxSpeed = pfMaxSpeed;
        };

        void SetHasNitro(bool pbHasNitro) {
            bHasNitro = pbHasNitro;
        };



        // getters
        float GetFuelCapacity() {
            return fFuelCapacity;
        };

        float GetCurrentFuel() {
            return fCurrentFuel;
        };

        float GetMaxSpeed() {
            return fMaxSpeed;
        };

        bool GetHasNitro() {
            return bHasNitro;
        };

        void Describe();

    private:
        float fFuelCapacity;
        float fCurrentFuel;
        float fMaxSpeed;
        bool bHasNitro;


};

// --- definicje funkcji ---

Boat::Boat(){
    cout << "New boat has arrived" << endl;
};

Boat::~Boat(){
    cout << "Boat has sunk" << endl;
}

void Boat::Describe() {
    cout << "---" << endl;
    cout << "I am a boat with following params:" << endl;
    cout << "---" << endl;

    cout <<"Fual Capacity:     "<< fFuelCapacity << endl;
    cout <<"Current Fuel:      "<< fCurrentFuel  << endl;
    cout <<"Max Speed (kmph):  "<< fMaxSpeed     << endl;
    cout <<"Has Nitro:         "<< bHasNitro     << endl;


}


int main() {
    Boat MyBoat = Boat();

    MyBoat.SetFuelCapacity(20.);
    MyBoat.SetCurrentFuel(21.);

    MyBoat.SetMaxSpeed(50.);
    MyBoat.SetHasNitro(true);
}