#include <iostream>
using namespace std;

class Bike {
    private:
        string name;
    public:
    Bike(string name){
        this->name = name;
    }
    string getName(){
        return name;
    }
    void setName(string name){
        this->name = name;
    }

    // ~Bike(){
    //     cout << "Hello";
    // }
};

int main(){
    Bike b1("BMW");
    //cout << b1.
    b1.setName("Yamaha");
    cout << b1.getName()  << "\n";


    return 0;
}