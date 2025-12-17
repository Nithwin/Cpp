#include <iostream>
using namespace std;

class Math {
    public:
    Math(){

    }
    int square(int x){
        return x * x;
    }
    double square(double x){
        return x*x;
    }

};

int main(){
    cout << Math().square(4);
    cout << Math().square(4.5);
    return 0;
}