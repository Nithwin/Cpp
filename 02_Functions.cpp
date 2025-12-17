/*
=============================================================
     FUNCTIONS & CONTROL FLOW TUTORIAL
     File: 02_Functions.cpp
=============================================================
Learn: Functions, Parameters, Return Values, Control Flow
*/

#include <iostream>
#include <string>
using namespace std;

// ============= FUNCTIONS BASICS =============

// Function with no parameters, no return
void greet() {
    cout << "Hello, Welcome!" << endl;
}

// Function with parameters, returns value
int add(int a, int b) {
    return a + b;
}

// Function with multiple parameters
int multiply(int x, int y) {
    return x * y;
}

// Function with default parameters
void printMessage(string msg = "Default Message") {
    cout << msg << endl;
}

// ============= PASS BY VALUE =============

void increment_by_value(int x) {
    x++;  // Only changes local copy
    cout << "Inside function (by value): " << x << endl;
}

// ============= PASS BY REFERENCE =============

void increment_by_reference(int &x) {
    x++;  // Changes the original variable
    cout << "Inside function (by reference): " << x << endl;
}

// ============= SCOPE DEMONSTRATION =============

int globalVar = 100;  // Global variable (accessible everywhere)

void scope_demo() {
    int localVar = 50;  // Local variable (only in this function)
    cout << "Global Variable: " << globalVar << endl;
    cout << "Local Variable: " << localVar << endl;
}

// ============= CONTROL FLOW =============

void lesson_if_else() {
    cout << "\n--- IF & ELSE STATEMENT ---\n";
    
    int score = 85;
    
    if (score >= 90) {
        cout << "Grade: A" << endl;
    } else if (score >= 80) {
        cout << "Grade: B" << endl;
    } else if (score >= 70) {
        cout << "Grade: C" << endl;
    } else {
        cout << "Grade: F" << endl;
    }
}

void lesson_switch() {
    cout << "\n--- SWITCH STATEMENT ---\n";
    
    int day = 3;
    
    switch(day) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        default:
            cout << "Invalid day" << endl;
    }
}

void lesson_for_loop() {
    cout << "\n--- FOR LOOP ---\n";
    
    // Basic for loop
    for (int i = 1; i <= 5; i++) {
        cout << "i = " << i << endl;
    }
    
    // Loop with array
    cout << "\nLoop through array:" << endl;
    int arr[] = {10, 20, 30, 40, 50};
    for (int i = 0; i < 5; i++) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }
}

void lesson_while_loop() {
    cout << "\n--- WHILE LOOP ---\n";
    
    int count = 1;
    while (count <= 3) {
        cout << "Count: " << count << endl;
        count++;
    }
}

void lesson_do_while() {
    cout << "\n--- DO-WHILE LOOP ---\n";
    
    int num = 1;
    do {
        cout << "Number: " << num << endl;
        num++;
    } while (num <= 3);
}

// ============= MAIN FUNCTION =============

int main() {
    cout << "========================================\n";
    cout << "  FUNCTIONS & CONTROL FLOW TUTORIAL\n";
    cout << "========================================\n";
    
    // ===== FUNCTIONS DEMO =====
    cout << "\n--- FUNCTION CALLS ---\n";
    greet();
    cout << "5 + 3 = " << add(5, 3) << endl;
    cout << "4 * 7 = " << multiply(4, 7) << endl;
    printMessage();
    printMessage("Custom Message");
    
    // ===== PASS BY VALUE vs REFERENCE =====
    cout << "\n--- PASS BY VALUE vs REFERENCE ---\n";
    int num = 10;
    cout << "Original value: " << num << endl;
    increment_by_value(num);
    cout << "After pass by value: " << num << endl;
    
    increment_by_reference(num);
    cout << "After pass by reference: " << num << endl;
    
    // ===== SCOPE =====
    cout << "\n--- SCOPE DEMO ---\n";
    scope_demo();
    
    // ===== CONTROL FLOW =====
    lesson_if_else();
    lesson_switch();
    lesson_for_loop();
    lesson_while_loop();
    lesson_do_while();
    
    cout << "\n========================================\n";
    cout << "  Tutorial Complete!\n";
    cout << "========================================\n";
    
    return 0;
}

/*
KEY CONCEPTS:

1. FUNCTIONS:
   - Group related code
   - Reusable and organized
   - Can have parameters and return values

2. PASS BY VALUE:
   - Creates a copy of the variable
   - Changes inside function don't affect original

3. PASS BY REFERENCE (use &):
   - Passes reference to original variable
   - Changes inside function affect original
   - More efficient for large objects

4. CONTROL FLOW:
   - IF/ELSE: Execute code based on conditions
   - SWITCH: Choose from multiple options
   - FOR: Repeat fixed number of times
   - WHILE: Repeat while condition is true
   - DO-WHILE: Execute at least once

NEXT STEP: Learn Object-Oriented Programming in 03_OOP.cpp!
*/
