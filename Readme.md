# C++ Learning Notes

## C++ Features
- **Fast & Efficient**: Compiled language, close to hardware
- **Statically Typed**: Variable types must be declared explicitly
- **Object-Oriented**: Supports classes, inheritance, polymorphism
- **Platform Independent**: Write once, compile anywhere
- **Memory Management**: Direct control through pointers
- **Rich Standard Library**: Built-in functions and utilities
- **Backward Compatible**: Supports C code
- **Compiler-Based**: Code is converted to machine language before execution

## Program Structure

### Header Files
```cpp
#include <iostream>  // For input/output operations
```

### Namespace Usage
Three ways to use standard namespace:

1. **Global Usage**
```cpp
using namespace std;
cout << "Hello" << endl;
```

2. **Specific Usage**
```cpp
using std::cout;
using std::endl;
cout << "Hello" << endl;
```

3. **Direct Usage**
```cpp
std::cout << "Hello" << std::endl;
```

### Main Function
```cpp
int main() {
    // Program code here
    return 0;  // 0 means successful execution
}
```

## Key Points Learned
- Every C++ program must have a `main()` function
- Program execution starts from `main()`
- `iostream` provides input/output functionality
- `cout` is used for console output
- `<<` is the output stream operator
- `endl` adds newline and flushes output
- Statements end with semicolon (`;`)

## Compilation Process
1. **Preprocessing**: Expands includes and macros
2. **Compilation**: Converts C++ to object code
3. **Linking**: Creates executable
4. **Execution**: Program runs

## Commands
```bash
g++ filename.cpp -o program  # Compile
./program                    # Run
```

## Best Practices
- Use `using namespace std;` for small programs
- Prefer specific imports for larger projects
- Always include appropriate header files
- Return 0 from main() to indicate success

---
*Note: Each concept will be explored in more detail as I progress.*

## Identifiers
- Reserverd keyword of C++
- Identifiers cannot be used to declare Variable name

## Variables and Constants
- Variables are containers for storing data values
- Constants are unchangeable values
```cpp
int score = 100;        // Variable
const int uid = 12212;  // Constant
```

## Data Types
### Primitive Types
- **int**: Whole numbers
- **float**: Single precision decimal numbers
- **double**: Double precision decimal numbers
- **char**: Single characters
- **bool**: True/false values
```cpp
int teaLeaves = 50;
float waterTemp = 85.5;
double price = 299.99;
char grade = 'A';
bool isReady = false;
```

### Type Modifiers
- **unsigned**: Non-negative numbers only
- **long**: Extends number range
- **short**: Reduces number range
```cpp
unsigned int stock = 100;
long long quantity = 1000000000;
short samples = 15;
```

## Input/Output Operations
### Output (cout)
```cpp
cout << "Message" << endl;
```

### Input (cin)
```cpp
cin >> variable;        // For basic types
getline(cin, string);   // For string with spaces
```

## Type Casting
- Converting one data type to another
```cpp
float price = 49.99;
int roundedPrice = (int)price;  // Explicit casting
```

## Object-Oriented Programming
### Classes and Objects
- Classes are blueprints for objects
- Objects are instances of classes
```cpp
class Car {
    public:
        string name;
        void display() { }
};
```

### Constructor Types
- **Default**: No parameters
- **Parameterized**: With parameters
- **Copy**: Creates object copy
- **Delegating**: One constructor calls another

### Inheritance
- Allows class to inherit from another class
- Types: public, protected, private
```cpp
class DerivedClass : public BaseClass { };
```

### Encapsulation
- Data hiding and bundling
- Using private members with public getters/setters
```cpp
private:
    int balance;
public:
    int getBalance() { return balance; }
```

### Polymorphism
- **Virtual Functions**: Runtime polymorphism
- **Abstract Classes**: Contains pure virtual functions
```cpp
virtual void function() = 0;  // Pure virtual function
```

## Best Coding Practices
- Use meaningful variable names
- Initialize variables when declared
- Use consistent indentation
- Add comments for complex logic
- Follow const correctness
- Properly manage memory (delete what you new)
- Use appropriate access specifiers

## Memory Management
- **new**: Allocate memory
- **delete**: Deallocate memory
- Always pair new with delete
- Use smart pointers when possible

---
