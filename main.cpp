/*
 * C++ PROGRAMMING NOTES
 * Comprehensive guide covering basic to intermediate concepts
 */

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

// ============================================================================
// 1. DATA TYPES
// ============================================================================
void dataTypes() {
    // Integer types
    int n;
    long num;
    
    // Boolean type
    bool flag = false;
    
    // Character type
    char c = 'z';
    
    // Floating point types
    float l1 = 2.34;
    double fl = 3.14;
    
    // String type
    string name;
    
    // Constants
    const double PI = 3.14;
    // PI += 2;  // ERROR: Cannot modify constant
    
    // Auto keyword (deduces type automatically)
    auto num2 = "Hello";  // auto becomes const char*
    
    // Output examples
    cout << flag << endl;
    cout << c << endl;
    cout << l1 << endl;
    cout << fl << endl;
}

// ============================================================================
// 2. INPUT/OUTPUT
// ============================================================================
void inputOutput() {
    // Basic output
    cout << "Hello" << endl;
    
    // Basic input (for single word)
    int n;
    cin >> n;
    cout << n << endl;
    
    // Input for strings with spaces (using getline)
    string name;
    getline(cin, name);  // Reads entire line including spaces
    cout << name << endl;
}

// ============================================================================
// 3. OPERATORS
// ============================================================================
void operators() {
    int num = 4;
    
    // Arithmetic operators
    int add = num + 1;   // Addition
    int sub = num - 1;   // Subtraction
    int mul = num * 4;   // Multiplication
    int div = num / 4;   // Division
    
    // Compound assignment operators
    num += 3;  // num = num + 3
    num *= 2;  // num = num * 2
    num /= 1;  // num = num / 1
    num -= 3;  // num = num - 3
    
    // Bitwise operators
    bool isTrue = 1 & 0;  // AND
    // bool isTrue = 1 ^ 0;  // XOR
    // bool isTrue = 1 | 0;  // OR
    
    // Increment/Decrement operators
    int a = 1;
    a++;        // Post-increment: returns value then increments
    ++a;        // Pre-increment: increments then returns value
    cout << ++a << " ";  // Output: 3 (incremented first)
    cout << a;           // Output: 3
}

// ============================================================================
// 4. CONTROL FLOW - IF/ELSE
// ============================================================================
void conditionalStatements() {
    int num = 7;
    
    // If-else statement
    if(num == 5) {
        cout << "Hello" << endl;
    } 
    else if(num == 4) {
        cout << num << "\n" << endl;
    }
    else {
        cout << "Nothing" << endl;
    }
    
    // Ternary operator (conditional operator)
    string str = (num == 4) ? "Hello" : "Nothing";
    cout << str << endl;
    
    // Switch statement
    switch(num) {
        case 4:
            cout << "1" << endl;
            break;
        case 1:
            cout << "4" << endl;
            break;
        default:
            cout << "Wrong Value" << endl;
    }
}

// ============================================================================
// 5. LOOPS
// ============================================================================
void loops() {
    // For loop
    for(int i = 0; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;
    
    // While loop
    int i = 10;
    while(i --> 0) {  // Clever trick: while(i-- > 0)
        cout << i << " ";
    }
    cout << endl;
    
    // Do-while loop (executes at least once)
    i = 10;
    do {
        cout << i << " ";
    } while(i --> 0);
    cout << endl;
}

// ============================================================================
// 6. FUNCTIONS & LAMBDAS
// ============================================================================
// Regular function (must be defined before use or declared with prototype)
void add(int x, int y) {
    cout << x + y << endl;
}

void functionsExample() {
    // Calling a function
    add(5, 4);
    
    // Lambda function (anonymous function)
    auto printNum = [](int x) {
        cout << x << endl;
    };
    
    printNum(42);  // Call lambda
}

// ============================================================================
// 7. ARRAYS
// ============================================================================
void arrays() {
    // 1D Array - Static initialization
    int arr[] = {1, 2, 3, 4};
    cout << arr[0] << endl;  // Access first element
    
    // 1D Array - Dynamic size (compile-time)
    int arr2[5];
    
    // Reading array elements (compact form)
    for(int i = 0; i < 5; cin >> arr2[i], i++);
    
    // Printing array elements (compact form)
    for(int i = 0; i < 5; cout << arr2[i] << " ", i++);
    cout << endl;
    
    // Reading array elements (traditional form)
    for(int i = 0; i < 5; i++) {
        cin >> arr2[i];
    }
    
    // Printing array elements (traditional form)
    for(int i = 0; i < 5; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;
    
    // Variable Length Array (VLA) - Note: Not standard C++, compiler extension
    int n;
    cin >> n;
    int arr5[n];  // Variable length array
    // Alternative: Dynamic allocation
    // int *arrVLA = new int[n];
    
    // Range-based for loop (C++11)
    int arr3[] = {1, 2, 3, 4};
    for(int i : arr3) {
        cout << i << " ";
    }
    cout << endl;
    
    // 2D Array
    int arr2D[2][2] = {{1, 2}, {3, 2}};
    cout << arr2D[0][0] << endl;  // Access element at row 0, col 0
}

// ============================================================================
// 8. STRINGS
// ============================================================================
void strings() {
    // String initialization
    int num(4);                    // Constructor initialization
    string str("Programming");     // Constructor initialization
    string s = "Hello";           // Assignment initialization
    string str2;                   // Empty string
    
    // String operations
    s.append(" World");            // Appends " World" -> "Hello World"
    cout << s.length() << endl;   // Length of string
    cout << s[0] << endl;         // Access character at index 0
    
    // String manipulation
    cout << s.substr(0, 6) << endl;   // Substring from index 0, length 6
    cout << s.find("World") << endl;  // Find position of "World"
    s.erase(6, s.length());            // Erase from index 6 to end
    s[0] = 'T';                        // Replace character at index 0
    s.replace(0, 5, "World");          // Replace 5 chars from index 0
    s.insert(5, "++");                 // Insert "++" at index 5
    
    // String comparison
    cout << s.compare("Hello World") << endl;  // Returns 0 if equal
    cout << s.empty() << endl;                 // Check if string is empty
    
    // Iterate through string characters
    string s2 = "Hello";
    for(char c : s2) {
        cout << c << " ";
    }
    cout << endl;
    
    // Type conversion
    int num3 = 24;
    string strNum = to_string(num3);  // Convert number to string
    cout << strNum << endl;
    
    // Sorting string characters
    string str4 = "clsdhgegba";
    sort(str4.begin(), str4.end());  // Sort characters alphabetically
    cout << str4 << endl;
}

// ============================================================================
// MAIN FUNCTION
// ============================================================================
int main() {
    // Uncomment any section to test
    
    // dataTypes();
    // inputOutput();
    // operators();
    // conditionalStatements();
    // loops();
    // functionsExample();
    // arrays();
    // strings();
    
    // Example: String reversal
    string str = "Nithwin";
    string tmp = str;
    reverse(str.begin(), str.end());  // Reverse the string
    cout << "Original: " << tmp << endl;
    cout << "Reversed: " << str << endl;
    
    return 0;
}
