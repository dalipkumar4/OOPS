#include <iostream>
using namespace std;

class Doctor {
public:
    // Virtual function
    virtual void treatment() {
        cout << "General doctor gives basic treatment." << endl;
    }
};

class HeartDoctor : public Doctor {
public:
    void treatment() override {
        cout << "Heart doctor treats heart diseases ❤️." << endl;
    }
};

class EyeDoctor : public Doctor {
public:
    void treatment() override {
        cout << "Eye doctor treats eye problems 👁️." << endl;
    }
};

int main() {
    Doctor* doc;  // Base class pointer

    HeartDoctor h;
    EyeDoctor e;

    doc = &h;
    doc->treatment();  // Calls HeartDoctor version

    doc = &e;
    doc->treatment();  // Calls EyeDoctor version

    return 0;
}
