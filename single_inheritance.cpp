#include<iostream>
using namespace std;

class Animal{
    public:
        void eat(){
            cout << "Eating..." << endl;
        }
};

// Derived class(Child)
class Dogs:public Animal{
    public:
        void bark(){
            cout << "Barking..." << endl;
        }
};

int main(){
    Dogs d;
    d.eat();

    return 0;
}
