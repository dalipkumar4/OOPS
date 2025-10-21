#include<iostream>
using namespace std;

class Car1{
    string name;
    public: 
        void getName(){
            cout << "Enter the car name: ";
            cin >> name;
        }
        void showName(){
            cout << name << endl;
        }  
};
class Car2:public Car1{
    int seats;
    public: 
        void getSeatsNo(){
            cout << "How many seats in car: ";
            cin >> seats;
        }  
        void showSeats(){
            cout << seats << endl;
        }
};
class Car3:public Car2{
    string color;
    public: 
        void getColor(){
            cout << "Enter the color: ";
            cin >> color;
        } 
        void showColor(){
            cout << color << endl;
        }
};

int main(){
    Car3 obj;
    obj.getName();
    obj.getSeatsNo();
    obj.getColor();
    obj.showName();
    obj.showSeats();
    obj.showColor();

    return 0;
}
