/*
=============================================================
     OBJECT-ORIENTED PROGRAMMING (OOP) TUTORIAL
     File: 03_OOP_Classes.cpp
=============================================================
Learn: Classes, Objects, Constructors, Access Modifiers
*/

#include <iostream>
#include <string>
using namespace std;

// ============= BASIC CLASS =============

class Student {
    // Access Modifiers
    private:           // Only accessible within this class
        double gpa;
        string studentID;
    
    protected:        // Accessible within class and derived classes
        string department;
    
    public:           // Accessible from anywhere
        string name;
        int age;
        
        // Default Constructor (no parameters)
        Student() {
            name = "Unknown";
            age = 0;
            gpa = 0.0;
            studentID = "N/A";
            department = "Not Assigned";
            cout << "Default Constructor Called" << endl;
        }
        
        // Parameterized Constructor
        Student(string n, int a, double g, string id) {
            name = n;
            age = a;
            gpa = g;
            studentID = id;
            department = "Engineering";
            cout << "Parameterized Constructor Called for: " << name << endl;
        }
        
        // Getter for private variable
        double getGPA() {
            return gpa;
        }
        
        // Setter for private variable (with validation)
        void setGPA(double newGPA) {
            if (newGPA >= 0.0 && newGPA <= 4.0) {
                gpa = newGPA;
                cout << "GPA updated to: " << gpa << endl;
            } else {
                cout << "Invalid GPA! Must be between 0 and 4." << endl;
            }
        }
        
        // Method to display info
        void displayInfo() {
            cout << "\n--- Student Information ---" << endl;
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "GPA: " << gpa << endl;
            cout << "ID: " << studentID << endl;
            cout << "Department: " << department << endl;
        }
        
        // Method to study
        void study(int hours) {
            cout << name << " is studying for " << hours << " hours." << endl;
        }
};

// ============= ENCAPSULATION EXAMPLE =============

class BankAccount {
    private:
        double balance;
        string accountNumber;
    
    public:
        // Constructor
        BankAccount(double initialBalance, string accNum) {
            balance = initialBalance;
            accountNumber = accNum;
        }
        
        // Deposit money
        void deposit(double amount) {
            if (amount > 0) {
                balance += amount;
                cout << "Deposited: $" << amount << endl;
                cout << "New balance: $" << balance << endl;
            } else {
                cout << "Deposit amount must be positive!" << endl;
            }
        }
        
        // Withdraw money
        void withdraw(double amount) {
            if (amount > 0 && amount <= balance) {
                balance -= amount;
                cout << "Withdrawn: $" << amount << endl;
                cout << "New balance: $" << balance << endl;
            } else {
                cout << "Invalid withdrawal amount!" << endl;
            }
        }
        
        // Check balance
        double getBalance() {
            return balance;
        }
};

// ============= SIMPLE CAR CLASS =============

class Car {
    private:
        string model;
        int year;
        double speed;
    
    public:
        string color;
        string brand;
        
        Car(string b, string c, string m, int y) {
            brand = b;
            color = c;
            model = m;
            year = y;
            speed = 0;
        }
        
        void accelerate(double amount) {
            speed += amount;
            cout << brand << " " << model << " is accelerating..." << endl;
            cout << "Current speed: " << speed << " km/h" << endl;
        }
        
        void brake(double amount) {
            speed -= amount;
            if (speed < 0) speed = 0;
            cout << "Braking..." << endl;
            cout << "Current speed: " << speed << " km/h" << endl;
        }
        
        void displayDetails() {
            cout << "\n--- Car Details ---" << endl;
            cout << "Brand: " << brand << endl;
            cout << "Model: " << model << endl;
            cout << "Year: " << year << endl;
            cout << "Color: " << color << endl;
        }
};

// ============= MAIN FUNCTION =============

int main() {
    cout << "========================================\n";
    cout << "  OBJECT-ORIENTED PROGRAMMING TUTORIAL\n";
    cout << "========================================\n";
    
    // ===== STUDENT CLASS DEMO =====
    cout << "\n--- STUDENT CLASS DEMO ---\n";
    
    // Using default constructor
    Student s1;
    
    // Using parameterized constructor
    Student s2("Alice Johnson", 20, 3.8, "STU001");
    
    // Access public members directly
    cout << "First student name: " << s1.name << endl;
    cout << "Second student name: " << s2.name << endl;
    
    // Use getter/setter for private members
    s2.setGPA(3.9);
    cout << "Alice's GPA: " << s2.getGPA() << endl;
    
    // Call methods
    s2.displayInfo();
    s2.study(3);
    
    // Try to set invalid GPA
    s2.setGPA(5.0);
    
    // ===== BANK ACCOUNT DEMO =====
    cout << "\n--- BANK ACCOUNT DEMO ---\n";
    
    BankAccount myAccount(1000, "ACC12345");
    myAccount.displayDetails();
    myAccount.deposit(500);
    myAccount.withdraw(200);
    myAccount.withdraw(2000);  // This should fail
    cout << "Final Balance: $" << myAccount.getBalance() << endl;
    
    // ===== CAR CLASS DEMO =====
    cout << "\n--- CAR CLASS DEMO ---\n";
    
    Car myCar("BMW", "Black", "X5", 2023);
    myCar.displayDetails();
    myCar.accelerate(50);
    myCar.accelerate(30);
    myCar.brake(40);
    
    cout << "\n========================================\n";
    cout << "  Tutorial Complete!\n";
    cout << "========================================\n";
    
    return 0;
}

/*
KEY CONCEPTS:

1. CLASSES & OBJECTS:
   - Class = Blueprint for objects
   - Object = Instance of a class
   - Classes contain data (members) and functions (methods)

2. ACCESS MODIFIERS:
   - private: Only inside the class (encapsulation)
   - public: Accessible from anywhere
   - protected: For inheritance (see next tutorial)

3. CONSTRUCTORS:
   - Special function called when object is created
   - Default constructor: no parameters
   - Parameterized constructor: takes parameters
   - Initialize member variables

4. GETTERS & SETTERS:
   - Getters: return private member values
   - Setters: modify private members with validation
   - Provides control over data access

5. ENCAPSULATION:
   - Hide internal details (private members)
   - Provide public interface (getters/setters/methods)
   - Protects data integrity

COMPILATION:
    g++ 03_OOP_Classes.cpp -o oop && oop

NEXT STEP: Learn Inheritance and Polymorphism in 04_Inheritance.cpp!
*/
