/*
=============================================================
     VIRTUAL FUNCTIONS & ABSTRACT CLASSES - TUTORIAL
     File: main11.cpp
=============================================================
Learn: Pure Virtual Functions, Abstract Classes, Polymorphism
*/

#include <iostream>
using namespace std;

// ============= ABSTRACT BASE CLASS =============

/*
ABSTRACT CLASS: A class with at least one pure virtual function
- Cannot be instantiated directly
- Must be inherited by other classes
- Derived classes MUST override pure virtual functions
*/
class Bike {
    public:
        // Pure virtual function (= 0)
        // No implementation provided
        // Derived classes MUST override this
        virtual void go() = 0;
        
        // Another pure virtual function
        virtual void stop() = 0;
        
        // Virtual destructor (good practice)
        virtual ~Bike() {}
};

// ============= CONCRETE CLASS 1: BMW =============

class BMW : public Bike {
    public:
        // Override the pure virtual function from Bike
        void go() override {
            cout << "BMW is accelerating with premium engine!" << endl;
        }
        
        void stop() override {
            cout << "BMW brakes applied smoothly!" << endl;
        }
};

// ============= CONCRETE CLASS 2: Honda =============

class Honda : public Bike {
    public:
        void go() override {
            cout << "Honda is zooming efficiently!" << endl;
        }
        
        void stop() override {
            cout << "Honda stopped reliably!" << endl;
        }
};

// ============= CONCRETE CLASS 3: Yamaha =============

class Yamaha : public Bike {
    public:
        void go() override {
            cout << "Yamaha is speeding with power!" << endl;
        }
        
        void stop() override {
            cout << "Yamaha emergency brake!" << endl;
        }
};

// ============= FUNCTION USING POLYMORPHISM =============

void rideTheBike(Bike *bike) {
    cout << "\n--- Riding the bike ---" << endl;
    bike->go();
    bike->stop();
}

// ============= MAIN FUNCTION =============

int main(){
    cout << "========================================\n";
    cout << "  VIRTUAL FUNCTIONS & POLYMORPHISM\n";
    cout << "========================================\n";
    
    // NOTE: Cannot create Bike object directly (abstract)
    // Bike b;  // ERROR!
    
    // Create concrete objects (BMW, Honda, Yamaha)
    cout << "\n--- Creating Bike Objects ---\n";
    BMW bmw;
    Honda honda;
    Yamaha yamaha;
    
    // Call methods directly
    cout << "\n--- Direct Method Calls ---\n";
    bmw.go();
    bmw.stop();
    
    cout << endl;
    
    honda.go();
    honda.stop();
    
    cout << endl;
    
    yamaha.go();
    yamaha.stop();
    
    // ===== POLYMORPHISM IN ACTION =====
    /*
    Using base class pointer with derived objects
    This demonstrates runtime polymorphism
    */
    cout << "\n--- POLYMORPHISM (Base Pointer to Derived Objects) ---\n";
    
    // Array of Bike pointers
    Bike *bikes[3];
    bikes[0] = &bmw;
    bikes[1] = &honda;
    bikes[2] = &yamaha;
    
    // Call methods on each bike using polymorphism
    for (int i = 0; i < 3; i++) {
        rideTheBike(bikes[i]);
    }
    
    cout << "\n========================================\n";
    cout << "  Tutorial Complete!\n";
    cout << "========================================\n";
    
    return 0;
}

/*
KEY CONCEPTS EXPLAINED:

1. ABSTRACT CLASS:
   - Has at least one pure virtual function (= 0)
   - Cannot be instantiated
   - Forces derived classes to implement specific methods
   - Defines an interface/contract

2. PURE VIRTUAL FUNCTION (= 0):
   - No implementation in base class
   - Must be overridden in ALL derived classes
   - Syntax: virtual void methodName() = 0;

3. DERIVED CLASS:
   - Inherits from abstract class
   - MUST override all pure virtual functions
   - Can have its own methods and properties

4. METHOD OVERRIDE:
   - Use 'override' keyword for clarity (C++11)
   - Changes method implementation from base class
   - Enables polymorphic behavior

5. POLYMORPHISM:
   - Base class pointer can point to derived object
   - Correct overridden method is called at runtime
   - Single interface, multiple implementations

6. VIRTUAL DESTRUCTOR:
   - Good practice in base classes
   - Ensures proper cleanup of derived objects
   - Prevents memory leaks

EXECUTION FLOW:
1. Compiler checks that all pure virtual functions are overridden
2. Objects are created (BMW, Honda, Yamaha)
3. Base class pointer points to derived object
4. When method is called, CORRECT override is executed
5. This is runtime polymorphism!

REAL-WORLD EXAMPLE:
   Abstract Class: Shape (draw, getArea, getPerimeter)
   Concrete Classes: Circle, Rectangle, Triangle
   Each has different implementation of same methods

COMPILATION:
    g++ main11.cpp -o main11 && main11

WHY ABSTRACT CLASSES?
✓ Define common interface for related classes
✓ Enforce implementation of critical methods
✓ Enable polymorphic behavior
✓ Provide code flexibility and reusability
✓ Follow SOLID principles
*/