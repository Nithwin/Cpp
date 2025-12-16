# C++ Programming Guide

This repository contains comprehensive C++ programming notes covering basic to intermediate concepts.

## Table of Contents
- [Compilation Commands](#compilation-commands)
- [Basic Syntax Reference](#basic-syntax-reference)
- [Topics Covered](#topics-covered)
- [How to Use This Guide](#how-to-use-this-guide)

---

## Compilation Commands

### Basic Compilation

#### Windows (MinGW/MSYS2)
```bash
# Compile and run
g++ main.cpp -o main.exe
./main.exe

# Or compile and run in one command
g++ main.cpp -o main.exe && ./main.exe
```

#### Linux/macOS
```bash
# Compile and run
g++ main.cpp -o main
./main

# Or compile and run in one command
g++ main.cpp -o main && ./main
```

### Advanced Compilation Options

```bash
# Compile with C++11 standard (for lambda, auto, range-based loops)
g++ -std=c++11 main.cpp -o main

# Compile with C++14 standard
g++ -std=c++14 main.cpp -o main

# Compile with C++17 standard
g++ -std=c++17 main.cpp -o main

# Compile with warnings enabled
g++ -Wall -Wextra main.cpp -o main

# Compile with debug information
g++ -g main.cpp -o main

# Compile with optimization
g++ -O2 main.cpp -o main

# Compile multiple source files
g++ file1.cpp file2.cpp -o program

# Compile with all recommended flags
g++ -std=c++17 -Wall -Wextra -O2 main.cpp -o main
```

### Using Makefile (Optional)

Create a `Makefile`:
```makefile
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra
TARGET = main
SOURCE = main.cpp

$(TARGET): $(SOURCE)
	$(CXX) $(CXXFLAGS) $(SOURCE) -o $(TARGET)

clean:
	rm -f $(TARGET) $(TARGET).exe

.PHONY: clean
```

Then compile with:
```bash
make
./main
make clean  # Remove compiled files
```

---

## Basic Syntax Reference

### 1. Data Types

| Type | Size | Description | Example |
|------|------|-------------|---------|
| `int` | 4 bytes | Integer | `int x = 5;` |
| `long` | 8 bytes | Long integer | `long x = 1000000L;` |
| `float` | 4 bytes | Single precision float | `float x = 3.14f;` |
| `double` | 8 bytes | Double precision float | `double x = 3.14159;` |
| `char` | 1 byte | Character | `char c = 'A';` |
| `bool` | 1 byte | Boolean | `bool flag = true;` |
| `string` | Variable | String (C++ class) | `string s = "Hello";` |

### 2. Variables and Constants

```cpp
// Variable declaration
int num = 10;
string name = "John";

// Constant (immutable)
const double PI = 3.14159;

// Auto type deduction
auto value = 42;        // int
auto text = "Hello";    // const char*
```

### 3. Input/Output

```cpp
#include <iostream>
using namespace std;

// Output
cout << "Hello" << endl;
cout << variable << " " << another_var << endl;

// Input
int n;
cin >> n;

// Input entire line (with spaces)
string line;
getline(cin, line);
```

### 4. Operators

#### Arithmetic
```cpp
+   // Addition
-   // Subtraction
*   // Multiplication
/   // Division
%   // Modulus
```

#### Assignment
```cpp
=   // Assignment
+=  // Add and assign
-=  // Subtract and assign
*=  // Multiply and assign
/=  // Divide and assign
```

#### Comparison
```cpp
==  // Equal to
!=  // Not equal to
<   // Less than
>   // Greater than
<=  // Less than or equal
>=  // Greater than or equal
```

#### Logical
```cpp
&&  // Logical AND
||  // Logical OR
!   // Logical NOT
```

#### Increment/Decrement
```cpp
++x  // Pre-increment
x++  // Post-increment
--x  // Pre-decrement
x--  // Post-decrement
```

### 5. Control Flow

#### If-Else
```cpp
if (condition) {
    // code
} else if (condition2) {
    // code
} else {
    // code
}
```

#### Ternary Operator
```cpp
result = (condition) ? value_if_true : value_if_false;
```

#### Switch
```cpp
switch(variable) {
    case value1:
        // code
        break;
    case value2:
        // code
        break;
    default:
        // code
}
```

### 6. Loops

#### For Loop
```cpp
for(int i = 0; i < 10; i++) {
    // code
}

// Range-based for loop (C++11)
for(int element : array) {
    // code
}
```

#### While Loop
```cpp
while(condition) {
    // code
}
```

#### Do-While Loop
```cpp
do {
    // code (executes at least once)
} while(condition);
```

### 7. Arrays

```cpp
// Static array
int arr[5] = {1, 2, 3, 4, 5};
int arr[] = {1, 2, 3};  // Size deduced

// Access elements
arr[0] = 10;
cout << arr[0];

// 2D Array
int matrix[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
matrix[0][0] = 10;
```

### 8. Strings

```cpp
#include <string>
using namespace std;

// String operations
string s = "Hello";
s.length();           // Get length
s[0];                 // Access character
s.substr(start, len); // Get substring
s.find("pattern");    // Find substring
s.append(" World");   // Append
s.insert(pos, str);   // Insert
s.replace(pos, len, str); // Replace
s.erase(pos, len);    // Erase
s.empty();            // Check if empty
s.compare(str);       // Compare strings
```

### 9. Functions

```cpp
// Function definition
returnType functionName(parameters) {
    // code
    return value;
}

// Example
int add(int a, int b) {
    return a + b;
}

// Lambda function (C++11)
auto func = [](int x) {
    cout << x << endl;
};
```

### 10. Common Headers

```cpp
#include <iostream>  // Input/Output (cin, cout)
#include <string>    // String class
#include <algorithm> // Algorithms (sort, reverse, etc.)
#include <vector>    // Vector container
#include <cmath>     // Math functions
#include <cstdlib>   // Standard library functions
```

---

## Topics Covered

The `main.cpp` file contains organized notes on:

1. **Data Types** - int, long, float, double, char, bool, string, auto
2. **Input/Output** - cin, cout, getline
3. **Operators** - Arithmetic, Assignment, Bitwise, Increment/Decrement
4. **Control Flow** - if-else, switch, ternary operator
5. **Loops** - for, while, do-while, range-based for
6. **Functions** - Regular functions, lambda functions
7. **Arrays** - 1D arrays, 2D arrays, variable-length arrays
8. **Strings** - String manipulation, operations, type conversion

---

## How to Use This Guide

1. **Review the Notes**: Open `main.cpp` and read through the organized sections
2. **Uncomment and Test**: Uncomment specific sections in the `main()` function to test concepts
3. **Practice**: Modify the examples to experiment with different values
4. **Compile and Run**: Use the compilation commands above to test your code

### Example Usage

To test a specific topic, uncomment the corresponding function call in `main()`:

```cpp
int main() {
    // Uncomment to test:
    // dataTypes();
    // inputOutput();
    // operators();
    // conditionalStatements();
    // loops();
    // functionsExample();
    // arrays();
    // strings();
    
    return 0;
}
```

---

## Quick Reference

### Common Compilation Errors

1. **"undefined reference"** - Missing library or function definition
2. **"expected ';'"** - Missing semicolon
3. **"was not declared"** - Variable/function not declared
4. **"cannot convert"** - Type mismatch

### Tips

- Always include necessary headers
- Use `using namespace std;` to avoid typing `std::` repeatedly
- Initialize variables before use
- Pay attention to array bounds to avoid segmentation faults
- Use meaningful variable names

---

## Resources

- [cppreference.com](https://en.cppreference.com/) - Comprehensive C++ reference
- [cplusplus.com](https://www.cplusplus.com/) - Tutorials and documentation
- [Learn C++](https://www.learncpp.com/) - Free C++ tutorials

---

**Happy Coding! 🚀**

