#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Setter functions (to set values)
    void setName(string n) {
        name = n;
    }
    void setAge(int a) {
        age = a;
    }

    // Getter functions (to get values)
    string getName() {
        return name;
    }
    int getAge() {
        return age;
    }

    void show(){
        cout << name << endl << age;
    }
};

int main() {
    Student s1;

    // Set values using setter
    s1.setName("Dalip");
    s1.setAge(20);

    s1.show();
    // Get values using getter
    cout << "Name: " << s1.getName() << endl;
    cout << "Age: " << s1.getAge() << endl;

    return 0;
}
