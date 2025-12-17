/*
=============================================================
     C++ BASICS & DATA TYPES TUTORIAL
     File: 01_Basics.cpp
=============================================================
Learn: Variables, Data Types, Input/Output
*/

#include <iostream>
#include <string>
using namespace std;

// ============= BASIC SYNTAX =============

// Variables and Data Types
void lesson_variables() {
    cout << "\n--- LESSON 1: VARIABLES & DATA TYPES ---\n";
    
    // Integer types
    int age = 25;                    // 4 bytes, -2^31 to 2^31-1
    short smallNum = 100;            // 2 bytes
    long bigNum = 1000000000;        // 4-8 bytes
    long long veryBigNum = 9999999999; // 8 bytes
    
    // Floating point
    float price = 19.99f;            // 4 bytes, ~7 decimal digits
    double pi = 3.14159265359;       // 8 bytes, ~15 decimal digits
    
    // Character and Boolean
    char grade = 'A';                // Single character
    bool isStudent = true;           // true or false
    
    // String
    string name = "John Doe";        // Text
    
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Grade: " << grade << endl;
    cout << "Is Student: " << isStudent << endl;
}

// ============= INPUT/OUTPUT =============

void lesson_input_output() {
    cout << "\n--- LESSON 2: INPUT & OUTPUT ---\n";
    
    // Output with cout
    cout << "Hello, World!" << endl;
    cout << "Multiple outputs " << "can be " << "chained" << endl;
    
    // Input with cin
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "You entered: " << number << endl;
    
    // Input string with spaces
    string sentence;
    cout << "Enter a sentence: ";
    cin.ignore();  // Clear the newline from previous input
    getline(cin, sentence);
    cout << "Sentence: " << sentence << endl;
}

// ============= OPERATORS =============

void lesson_operators() {
    cout << "\n--- LESSON 3: OPERATORS ---\n";
    
    int a = 10, b = 3;
    
    // Arithmetic Operators
    cout << "Arithmetic Operators:" << endl;
    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << endl;  // Integer division
    cout << "a % b = " << (a % b) << endl;  // Modulus (remainder)
    
    // Comparison Operators
    cout << "\nComparison Operators:" << endl;
    cout << "a > b: " << (a > b) << endl;   // 1 = true, 0 = false
    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;
    
    // Logical Operators
    cout << "\nLogical Operators:" << endl;
    cout << "a > 5 && b < 5: " << ((a > 5) && (b < 5)) << endl;  // AND
    cout << "a > 15 || b < 5: " << ((a > 15) || (b < 5)) << endl; // OR
    cout << "!(a > 15): " << (!(a > 15)) << endl;                 // NOT
}

// ============= MAIN FUNCTION =============

int main() {
    cout << "========================================\n";
    cout << "  C++ BASICS & DATA TYPES TUTORIAL\n";
    cout << "========================================\n";
    
    // Uncomment the function you want to run:
    
    lesson_variables();          // Run variables lesson
    // lesson_input_output();     // Uncomment to get user input
    lesson_operators();          // Run operators lesson
    
    cout << "\n========================================\n";
    cout << "  Tutorial Complete!\n";
    cout << "========================================\n";
    
    return 0;
}

/*
COMPILATION & EXECUTION:
    Windows: g++ 01_Basics.cpp -o basics && basics
    Linux:   g++ 01_Basics.cpp -o basics && ./basics
    Mac:     g++ 01_Basics.cpp -o basics && ./basics

KEY TAKEAWAYS:
✓ Understand different data types and their sizes
✓ Learn input/output with cin and cout
✓ Master arithmetic, comparison, and logical operators
✓ Practice combining operators in expressions

NEXT STEP: Learn about control flow (if, loops) in the next tutorial!
*/
