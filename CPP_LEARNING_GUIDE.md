# C++ Learning Guide - Complete Reference

## Table of Contents
1. [Basics](#basics)
2. [Data Types & Variables](#data-types--variables)
3. [Functions](#functions)
4. [Object-Oriented Programming (OOP)](#object-oriented-programming-oop)
5. [Classes & Objects](#classes--objects)
6. [Inheritance](#inheritance)
7. [Polymorphism](#polymorphism)
8. [Encapsulation](#encapsulation)
9. [Abstraction](#abstraction)
10. [STL Containers](#stl-containers)

---

## Basics

### What is C++?
C++ is a powerful, general-purpose programming language that supports multiple programming paradigms including procedural, object-oriented, and functional programming.

### Setting Up
- Include header files: `#include <iostream>`
- Use namespace: `using namespace std;`
- Main function is the entry point: `int main() { }`

### Hello World Example
```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!";
    return 0;
}
```

---

## Data Types & Variables

### Primitive Data Types
| Type | Size | Range | Example |
|------|------|-------|---------|
| `int` | 4 bytes | -2,147,483,648 to 2,147,483,647 | `int age = 25;` |
| `float` | 4 bytes | ~7 decimal digits | `float price = 19.99f;` |
| `double` | 8 bytes | ~15 decimal digits | `double pi = 3.14159;` |
| `char` | 1 byte | Single character | `char grade = 'A';` |
| `bool` | 1 byte | true/false | `bool isActive = true;` |
| `string` | Variable | Text | `string name = "John";` |

### Variable Declaration & Initialization
```cpp
int x;              // Declaration
x = 10;             // Initialization
int y = 20;         // Declaration + Initialization
const int z = 30;   // Constant (cannot be changed)
```

---

## Functions

### Function Basics
```cpp
return_type function_name(parameter_type parameter) {
    // Function body
    return value;
}
```

### Example
```cpp
int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(5, 3);  // Result = 8
    cout << result;
    return 0;
}
```

### Pass by Value vs Pass by Reference
```cpp
// Pass by Value (copy)
void increment_value(int x) {
    x++;  // Original value unchanged
}

// Pass by Reference (use &)
void increment_reference(int &x) {
    x++;  // Original value changed
}
```

---

## Object-Oriented Programming (OOP)

### Four Pillars of OOP
1. **Encapsulation** - Bundling data and methods together
2. **Inheritance** - Creating new classes from existing ones
3. **Polymorphism** - Same interface, different implementations
4. **Abstraction** - Hiding complex details, showing only necessary features

---

## Classes & Objects

### Class Definition
```cpp
class Car {
    // Access specifiers
    private:
        string engineType;   // Only accessible inside the class
    
    protected:
        int speed;          // Accessible in derived classes
    
    public:
        string color;       // Accessible from outside
        
        // Constructor
        Car(string col, int spd) {
            color = col;
            speed = spd;
        }
        
        // Method
        void drive() {
            cout << "Car is driving!";
        }
        
        // Getter
        int getSpeed() {
            return speed;
        }
        
        // Setter
        void setSpeed(int newSpeed) {
            speed = newSpeed;
        }
};

// Using the class
int main() {
    Car myCar("Red", 100);
    cout << myCar.color;  // Red
    myCar.drive();        // Car is driving!
    return 0;
}
```

### Access Modifiers
| Modifier | Inside Class | Outside Class | In Derived Class |
|----------|-------------|--------------|-----------------|
| `private` | ✓ | ✗ | ✗ |
| `public` | ✓ | ✓ | ✓ |
| `protected` | ✓ | ✗ | ✓ |

---

## Inheritance

### Single Inheritance
```cpp
// Parent class
class Animal {
    public:
        void eat() {
            cout << "Animal is eating";
        }
};

// Child class inherits from Animal
class Dog : public Animal {
    public:
        void bark() {
            cout << "Woof! Woof!";
        }
};

int main() {
    Dog myDog;
    myDog.eat();   // Inherited from Animal
    myDog.bark();  // Own method
    return 0;
}
```

### Types of Inheritance
- **Public Inheritance** - `class Child : public Parent`
- **Private Inheritance** - `class Child : private Parent`
- **Protected Inheritance** - `class Child : protected Parent`

---

## Polymorphism

### Function Overloading
```cpp
// Same function name, different parameters
void print(int x) {
    cout << "Integer: " << x;
}

void print(string s) {
    cout << "String: " << s;
}

int main() {
    print(10);       // Calls int version
    print("Hello");  // Calls string version
    return 0;
}
```

### Virtual Functions & Method Overriding
```cpp
class Bike {
    public:
        virtual void go() {
            cout << "Generic bike going";
        }
};

class BMW : public Bike {
    public:
        void go() override {  // Override parent method
            cout << "BMW is accelerating!";
        }
};

int main() {
    Bike *bike = new BMW();
    bike->go();  // Output: BMW is accelerating!
    delete bike;
    return 0;
}
```

---

## Encapsulation

### Example
```cpp
class BankAccount {
    private:
        double balance;  // Hidden from outside
    
    public:
        // Constructor
        BankAccount(double initialBalance) {
            balance = initialBalance;
        }
        
        // Getter
        double getBalance() {
            return balance;
        }
        
        // Setter with validation
        void deposit(double amount) {
            if (amount > 0) {
                balance += amount;
            }
        }
};
```

---

## Abstraction

### Abstract Classes
```cpp
// Abstract class with pure virtual function
class Shape {
    public:
        virtual void draw() = 0;  // Pure virtual function
        virtual ~Shape() {}       // Virtual destructor
};

class Circle : public Shape {
    public:
        void draw() override {
            cout << "Drawing circle";
        }
};

int main() {
    // Shape s;  // ERROR - Cannot instantiate abstract class
    Circle c;   // OK - Can instantiate concrete class
    c.draw();
    return 0;
}
```

---

## STL Containers

### Vector (Dynamic Array)
```cpp
#include <vector>

vector<int> nums;
nums.push_back(10);      // Add element
nums.push_back(20);
cout << nums[0];         // Access element
nums.pop_back();         // Remove last element
cout << nums.size();     // Get size
```

### Array (Fixed Size)
```cpp
#include <array>

array<int, 5> arr = {1, 2, 3, 4, 5};
cout << arr[0];          // Access element
cout << arr.size();      // Get size (5)
```

### Map (Key-Value Pairs)
```cpp
#include <map>

map<string, int> ages;
ages["Alice"] = 25;
ages["Bob"] = 30;
cout << ages["Alice"];   // Output: 25
```

### Set (Unique Values)
```cpp
#include <set>

set<int> uniqueNums;
uniqueNums.insert(10);
uniqueNums.insert(20);
uniqueNums.insert(10);  // Duplicate, not added
cout << uniqueNums.size();  // Output: 2
```

---

## Quick Tips

✅ **Do's:**
- Always initialize variables before using them
- Use meaningful variable names
- Write comments for complex logic
- Use const for values that shouldn't change
- Practice regularly with coding problems

❌ **Don'ts:**
- Don't forget semicolons at the end of statements
- Don't use global variables excessively
- Don't ignore compiler warnings
- Don't use `using namespace std;` in large projects
- Don't forget to delete dynamically allocated memory

---

## Practice Problems
1. Create a Calculator class with add, subtract, multiply, divide methods
2. Build a Student class with subjects and calculate GPA
3. Create a hierarchy: Vehicle → Car, Bike, Truck
4. Implement a Library system with books and members
5. Build a simple game with game objects and physics

---

**Last Updated:** December 2025
**Difficulty Level:** Beginner to Intermediate
