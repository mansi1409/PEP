#include <iostream>

using namespace std;

int main() {
    int num;

    cout << "Make a rectangular boundary by a single-digit number : " << endl;
    cout << "--------------------------------------------------------" << endl;
    
    cout << "Input the number: ";
    cin >> num;

    // Validate input (single-digit check)
    if (num < 0 || num > 9) {
        cout << "Please enter a single-digit number (0-9)." << endl;
        return 1;
    }
    cout << "\nRectangular Boundary:\n";
    
    for (int i = 0; i < 6; i++) { // 6 rows
        for (int j = 0; j < 4; j++) { // 4 columns
            // Print number at boundary positions only
            if (i == 0 || i == 5 || j == 0 || j == 3)
                cout << num << " ";
            else
                cout << "  "; // Empty space inside
        }
        cout << endl;
    }

    return 0;
}
