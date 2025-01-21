
#include <iostream>
using namespace std;

int main() {
    
    char x = 'A';
    switch (x) {
    case 'A':
        cout << "";
        break;
    case 'B':
        cout << "B";
        break;
    default:
        cout << "Other than A and B";
        break;
    }
    return 0;
}
