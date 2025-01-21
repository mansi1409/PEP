#include <iostream>//headerfile
using namespace std; //set the execution space for the operation
//int main predefined function main
//return 0; return type of function
// Overloaded function to sum two integers
int sum(int a, int b) {
    return a + b;
}

// Overloaded function to sum two floating-point numbers
float sum(float a, float b) {
    return a + b;
}

// Overloaded function to sum three integers
int sum(int a, int b, int c) {
    return a + b + c;
}

int main() {
    // Test cases for sum functions
    int int1 = 5, int2 = 10, int3 = 15;
    float float1 = 5.5, float2 = 10.5;

    // Call and display results
    cout << "Sum of two integers (5, 10): " << sum(int1, int2) << endl;
    cout << "Sum of two floats (5.5, 10.5): " << sum(float1, float2) << endl;
    cout << "Sum of three integers (5, 10, 15): " << sum(int1, int2, int3) << endl;

    return 0;
}
    