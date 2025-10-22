#include<iostream>
using namespace std;

class x{
    private:
    int a = 5;

    friend class y;
};

class y{
    public:
        void show(x obj){
            cout << obj.a << endl;;
        }
};


int main(){
    x b;
    y a;
    a.show(b);

    return 0;
}
