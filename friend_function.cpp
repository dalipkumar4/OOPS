#include <iostream>
using namespace std;

class Patient {
    private:
        string name;
        int age;
        string disease;
    public: 
        // Constructor to intialize details
        Patient(string n,int a,string d) {
            name = n;
            age = a;
            disease = d;
        }

        // Declaring friend function
        friend void showRecord(Patient p);
};

void showRecord(Patient p){
    cout << "Docto is checking patient record...\n";
    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;
    cout << "Disease: " << p.disease << endl;
    
}

int main(){
    Patient p1("Krish", 20, "Alzheimers");
    showRecord(p1); // Friend function can access private data

    return 0;
}
