#include <iostream>
using namespace std;

class Bike {
    protected:
        string name;
        int speed;
        string color;
    public:
    Bike(string name, int speed, string color){
             this->name = name;
            this->speed = speed;
            this->color = color;
    }
    string getName(){
        return name;
    }
    void setName(string name){
        this->name = name;
    }
    int getSpeed(){
        return speed;
    }
    void setSpeed(int speed){
        this->speed = speed;
    }

    string getColor(){
        return color;
    }
    void setColor(string color){
        this->color = color;
    }
};

class Vehicle: public Bike {
    private:
    string type;
    public:
    Vehicle(){

    }
};

class Yamaha :  public Vehicle {
    private:
    int gears;
    public:
    //string name, int speed, string color
        Yamaha(string name, int speed, string color, int gears): Bike(name,speed, color) {
            this->gears = gears;
            
        }   
        string getName(){
            cout << "Nothing";
            return "Nothing";
        }
        int getGears(){
            return gears;
        }
        void setGears(){
            this->gears = gears;
        }
    
};




int main(){
    Yamaha y1("BMW", 120, "Purple",6);
    cout << y1.getName();
    // Yamaha y1;
    // y1.setName("r15");
    // cout << y1.getName();
    return 0;
}