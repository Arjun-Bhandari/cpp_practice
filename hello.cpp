#include <iostream>
// using std:: cout;
// using std:: endl;

using namespace std;
// The above line is equivalent to:
// using std::cout;
// using std::endl;
// The using directive allows us to use names from the std namespace without
// prefixing them with std::, making the code cleaner and easier to read.
// The using directive is generally used in small programs or in specific
// functions where the scope is limited. In larger programs, it's often better
// to use the std:: prefix to avoid name clashes and improve code clarity.
// The using directive is a way to bring names from a namespace into the
// current scope, allowing you to use them without the namespace prefix.
// The std namespace is the standard namespace in C++ that contains all the
// standard library functions and objects, including cout, cin, string, etc.

int main() {
    // int here is the datatype of the return value of the function
    // The main function is the entry point of a C++ program.
    // It is where the program starts executing.
    // The return type of the main function is int, which indicates that it
    // returns an integer value to the operating system upon completion.
    // The return value is typically 0 to indicate successful execution.
    cout << "Hello, World! from ARJUN" << endl;// This line prints the string "Hello, World!" to the standard output (usually the console).
    // The << operator is used to send the output to the stream.
    // The endl manipulator is used to insert a newline character and flush the output buffer.
    // This means that the output will be displayed immediately on the console.
    // The cout object is an instance of the ostream class, which is used for
    // output operations in C++.
    // The std::endl manipulator is used to insert a newline character and flush
    // the output buffer. This means that the output will be displayed
    // immediately on the console. It is equivalent to using "\n" but also
    // ensures that the output is flushed, which can be useful in certain
    // situations where you want to ensure that the output is displayed
    // immediately, such as when debugging or when the program is writing to
    // a file.
    return 0;
    // The return statement indicates the end of the main function and returns
    // the value 0 to the operating system. This indicates that the program
    // has completed successfully. If the return value is non-zero, it usually
    // indicates an error or abnormal termination of the program.
}   