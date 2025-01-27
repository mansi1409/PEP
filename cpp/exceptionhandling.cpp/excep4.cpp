#include <iostream>
#include <cmath>

using namespace std;

double calculateSquareRoot(double number) {
    if (number < 0) {
        cout << "Error: Cannot calculate square root of a negative number!" << endl;
        return -1;  // Return a sentinel value indicating an error
    }
    return sqrt(number);
}

int main() {
    double number;
    cout << "Enter a number: ";
    cin >> number;

    double result = calculateSquareRoot(number);
    if (result != -1) {  // Check if no error occurred
        cout << "Square root: " << result << endl;
    }

    return 0;
}
