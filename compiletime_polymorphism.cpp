#include<iostream>
using namespace std;


class Player {
    public: 
        // Drive a car
        void drive(string vehicle){
            cout << "Driving a " << vehicle << " Though Los Santos!" << endl;
        }

        // Drive a car at a certain speed
        void drive(string vehicle,int speed){
            cout << "Driving a " << vehicle << " at speed " << speed << " km/h!" << endl;
        }

        // Drive a car with a specific partner (like in a mission)
        void drive(string vehicle, string partner){
            cout << "Driving a " << vehicle << " with " << partner << "!" << endl;
        }
};


int main(){
    Player franklin;

    franklin.drive("car");              // simple drive
    franklin.drive("bike", 120);        // drie with speed 
    franklin.drive("boat", "Micheal");  // drive with partner

    return 0;
}
