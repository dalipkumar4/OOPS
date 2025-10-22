#include <iostream>
using namespace std;

class Player {
public:
    virtual void action() {
        cout << "Player is standing idle." << endl;
    }
};

class Franklin : public Player {
public:
    void action() {
        cout << "Franklin drives a car." << endl;
    }
};

class Trevor : public Player {
public:
    void action() {
        cout << "Trevor flies a helicopter." << endl;
    }
};

int main() {
    Player* p;

    Franklin f;
    Trevor t;

    p = &f;
    p->action();   // Calls Franklin's version

    p = &t;
    p->action();   // Calls Trevor's version

    return 0;
}
