#include<iostream>
using namespace std;

class Car{
    public: 
        string name;

        Car(string n){
            name = n;
            cout << name << " spawned in GTA 5 world" << endl;
        }
        
        ~Car(){
            cout << name << " destroyed after mission failed" << endl;
        }
};

int main(){
    Car car1("Lamborghini");
    Car car2("BMW");
    cout << "Cars are being used in mission..." << endl;

    return 0; // Destructor will be called automatically here
}
