#include <iostream>
using namespace std;

// Abstract base class
class HospitalDepartment {
public:
    // Pure virtual function
    virtual void treatPatient() = 0;  
};

// Derived class 1
class Cardiology : public HospitalDepartment {
public:
    void treatPatient() override {
        cout << "Cardiology Department: Treating heart-related patients." << endl;
    }
};

// Derived class 2
class Neurology : public HospitalDepartment {
public:
    void treatPatient() override {
        cout << "Neurology Department: Treating brain and nervous system patients." << endl;
    }
};

// Derived class 3
class Orthopedics : public HospitalDepartment {
public:
    void treatPatient() override {
        cout << "Orthopedics Department: Treating bone and joint patients." << endl;
    }
};

int main() {
    // HospitalDepartment dept; ❌ Not allowed (abstract class)

    // Create objects of derived classes
    Cardiology c;
    Neurology n;
    Orthopedics o;

    // Treat patients
    c.treatPatient();
    n.treatPatient();
    o.treatPatient();

    return 0;
}
