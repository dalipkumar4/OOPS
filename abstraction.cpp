class Vehicle {
public:
    virtual void start() = 0;
};

class Car : public Vehicle {
public:
    void start() {
        cout << "Car starts with key" << endl;
    }
};

class Bike : public Vehicle {
public:
    void start() {
        cout << "Bike starts with kick" << endl;
    }
};
int main() {
    Vehicle* v;

    v = new Car();
    v->start();       // Car starts with key

    v = new Bike();
    v->start();       // Bike starts with kick

    return 0;
}
