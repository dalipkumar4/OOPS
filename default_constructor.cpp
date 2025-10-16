#include<iostream>
using namespace std;

class student{

    int id;
    int rollNo;

    public:
    // Default constructor
    student(){
        id = 43;
        rollNo = 456;
    }

    void display(){
        cout << "ID: " << id << ", RollNo: " << rollNo << endl;
    }
};

int main(){
    student s1; //Default constructor called 
    s1.display();

    return 0;
}
