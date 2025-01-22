#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    double numerator, denominator;
    
    try {
        // Taking input from the user
        cout << "Enter numerator: ";
        cin >> numerator;
       cout << "Enter denominator: ";
        cin >> denominator;

        // Check for division by zero
        if (denominator == 0)
            throw runtime_error("Cannot divide by zero.");

        // Perform division and display result
        cout << "Result: " << numerator / denominator << endl;
    } 
    catch (const runtime_error& e) {
        cout << e.what() << endl;
    }

    return 0;
}
