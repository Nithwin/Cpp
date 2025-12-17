/*
=============================================================
     INHERITANCE & POLYMORPHISM TUTORIAL
     File: 04_Inheritance_Polymorphism.cpp
=============================================================
Learn: Inheritance, Method Overriding, Polymorphism
*/

#include <iostream>
#include <string>
using namespace std;

// ============= SINGLE INHERITANCE EXAMPLE =============

// Parent (Base) Class
class Animal {
    protected:  // Accessible in derived classes
        string name;
    
    public:
        Animal(string n) {
            name = n;
            cout << "Animal Constructor Called: " << name << endl;
        }
        
        virtual void eat() {
            cout << name << " is eating." << endl;
        }
        
        virtual void sleep() {
            cout << name << " is sleeping." << endl;
        }
        
        void displayName() {
            cout << "Name: " << name << endl;
        }
};

// Child (Derived) Class - Dog
class Dog : public Animal {
    public:
        Dog(string n) : Animal(n) {
            cout << "Dog Constructor Called" << endl;
        }
        
        // Method Overriding
        void eat() override {
            cout << name << " is eating dog food." << endl;
        }
        
        // New method specific to Dog
        void bark() {
            cout << name << " is barking: Woof! Woof!" << endl;
        }
};

// Child (Derived) Class - Cat
class Cat : public Animal {
    public:
        Cat(string n) : Animal(n) {
            cout << "Cat Constructor Called" << endl;
        }
        
        // Method Overriding
        void eat() override {
            cout << name << " is eating cat food." << endl;
        }
        
        // New method specific to Cat
        void meow() {
            cout << name << " is meowing: Meow! Meow!" << endl;
        }
};

// ============= VEHICLE HIERARCHY =============

class Vehicle {
    protected:
        string brand;
        string color;
        int year;
    
    public:
        Vehicle(string b, string c, int y) : brand(b), color(c), year(y) {}
        
        virtual void drive() {
            cout << brand << " is driving." << endl;
        }
        
        virtual void honk() {
            cout << brand << " says: Honk! Honk!" << endl;
        }
        
        virtual ~Vehicle() {}
};

class Car : public Vehicle {
    private:
        int doors;
    
    public:
        Car(string b, string c, int y, int d) 
            : Vehicle(b, c, y), doors(d) {}
        
        void drive() override {
            cout << brand << " car with " << doors << " doors is driving smoothly." << endl;
        }
        
        void openTrunk() {
            cout << "Car trunk is opened." << endl;
        }
};

class Bike : public Vehicle {
    private:
        bool hasStorage;
    
    public:
        Bike(string b, string c, int y, bool storage) 
            : Vehicle(b, c, y), hasStorage(storage) {}
        
        void drive() override {
            cout << brand << " bike is zooming on road!" << endl;
        }
        
        void wheelie() {
            cout << brand << " is doing a wheelie!" << endl;
        }
};

// ============= POLYMORPHISM DEMO =============

// Function that uses polymorphism
void testAnimal(Animal *animal) {
    animal->displayName();
    animal->eat();
    animal->sleep();
}

void driveVehicle(Vehicle *vehicle) {
    vehicle->drive();
    vehicle->honk();
}

// ============= FUNCTION OVERLOADING =============

class Calculator {
    public:
        // Overload 1: Two integers
        int add(int a, int b) {
            cout << "Adding two integers" << endl;
            return a + b;
        }
        
        // Overload 2: Two doubles
        double add(double a, double b) {
            cout << "Adding two doubles" << endl;
            return a + b;
        }
        
        // Overload 3: Three integers
        int add(int a, int b, int c) {
            cout << "Adding three integers" << endl;
            return a + b + c;
        }
};

// ============= ABSTRACT CLASS EXAMPLE =============

class Shape {
    protected:
        string color;
    
    public:
        Shape(string c) : color(c) {}
        
        // Pure virtual function (abstract)
        virtual void draw() = 0;
        
        // Virtual function with implementation
        virtual void describe() {
            cout << "This is a shape with color: " << color << endl;
        }
        
        virtual ~Shape() {}
};

class Circle : public Shape {
    private:
        double radius;
    
    public:
        Circle(string c, double r) : Shape(c), radius(r) {}
        
        void draw() override {
            cout << "Drawing a circle with radius: " << radius << endl;
        }
        
        double getArea() {
            return 3.14159 * radius * radius;
        }
};

class Rectangle : public Shape {
    private:
        double width, height;
    
    public:
        Rectangle(string c, double w, double h) 
            : Shape(c), width(w), height(h) {}
        
        void draw() override {
            cout << "Drawing a rectangle " << width << "x" << height << endl;
        }
        
        double getArea() {
            return width * height;
        }
};

// ============= MAIN FUNCTION =============

int main() {
    cout << "========================================\n";
    cout << "  INHERITANCE & POLYMORPHISM TUTORIAL\n";
    cout << "========================================\n";
    
    // ===== SINGLE INHERITANCE DEMO =====
    cout << "\n--- SINGLE INHERITANCE DEMO ---\n";
    
    Dog myDog("Buddy");
    myDog.displayName();
    myDog.eat();        // Overridden method
    myDog.sleep();      // Inherited method
    myDog.bark();       // Dog-specific method
    
    cout << endl;
    
    Cat myCat("Whiskers");
    myCat.displayName();
    myCat.eat();        // Overridden method
    myCat.sleep();      // Inherited method
    myCat.meow();       // Cat-specific method
    
    // ===== POLYMORPHISM DEMO =====
    cout << "\n--- POLYMORPHISM DEMO ---\n";
    
    // Using base class pointer with derived class objects
    Animal *animal1 = &myDog;
    Animal *animal2 = &myCat;
    
    testAnimal(animal1);
    cout << endl;
    testAnimal(animal2);
    
    // ===== VEHICLE HIERARCHY =====
    cout << "\n--- VEHICLE HIERARCHY ---\n";
    
    Car myCar("Toyota", "Red", 2023, 4);
    Bike myBike("Yamaha", "Black", 2023, true);
    
    driveVehicle(&myCar);
    cout << endl;
    driveVehicle(&myBike);
    myBike.wheelie();
    
    // ===== FUNCTION OVERLOADING =====
    cout << "\n--- FUNCTION OVERLOADING ---\n";
    
    Calculator calc;
    cout << "5 + 3 = " << calc.add(5, 3) << endl;
    cout << "5.5 + 3.2 = " << calc.add(5.5, 3.2) << endl;
    cout << "1 + 2 + 3 = " << calc.add(1, 2, 3) << endl;
    
    // ===== ABSTRACT CLASS DEMO =====
    cout << "\n--- ABSTRACT CLASS DEMO ---\n";
    
    // Shape s;  // ERROR - Cannot instantiate abstract class
    
    Circle circle("Blue", 5);
    Rectangle rect("Green", 4, 6);
    
    circle.describe();
    circle.draw();
    cout << "Area: " << circle.getArea() << endl;
    
    cout << endl;
    
    rect.describe();
    rect.draw();
    cout << "Area: " << rect.getArea() << endl;
    
    cout << "\n========================================\n";
    cout << "  Tutorial Complete!\n";
    cout << "========================================\n";
    
    return 0;
}

/*
KEY CONCEPTS:

1. INHERITANCE:
   - Child class inherits from parent class
   - Reuses code and extends functionality
   - Types: public, private, protected

2. METHOD OVERRIDING:
   - Child class provides different implementation of parent method
   - Use 'override' keyword (C++11) for clarity
   - Use 'virtual' keyword in parent for dynamic dispatch

3. POLYMORPHISM:
   - "Many forms" - same interface, different behavior
   - Runtime polymorphism via virtual functions
   - Compile-time polymorphism via function overloading

4. VIRTUAL FUNCTIONS:
   - Enable dynamic dispatch (runtime decision)
   - Base class pointer/reference can point to derived object
   - Correct overridden method is called

5. PURE VIRTUAL FUNCTIONS (= 0):
   - No implementation in base class
   - Must be overridden in derived classes
   - Class with pure virtual is abstract (cannot instantiate)

6. FUNCTION OVERLOADING:
   - Multiple functions with same name, different parameters
   - Compile-time polymorphism
   - Resolved based on parameter types

INHERITANCE TYPES:
   - public:    Public & protected inherited as-is
   - private:   All inherited as private
   - protected: Public becomes protected

COMPILATION:
    g++ 04_Inheritance_Polymorphism.cpp -o polymorphism && polymorphism

NEXT STEP: Practice with real-world examples and solve problems!
*/
