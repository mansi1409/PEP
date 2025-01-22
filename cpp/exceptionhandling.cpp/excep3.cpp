#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int index;
    cout << "Enter index to access: ";
   cin >> index;
    
    try {
        if (index < 0 || index >= size)
            throw out_of_range("Index out of bounds.");
        
        cout << "Element at index " << index << " is: " << arr[index] <<endl;
    }
    catch (const out_of_range& e) {
        cout << e.what() << endl;
    }

    return 0;
}
