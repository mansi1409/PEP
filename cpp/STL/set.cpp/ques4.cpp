//.Write a program to remove a specific element from a set<int> using erase().
#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> mySet = {1, 2, 3, 4, 5, 6};

    cout << "Original set: ";
    for (int num : mySet) {
        cout << num << " ";
    }
    cout << endl;

    int elementToRemove = 4; // Element to remove
    
    mySet.erase(elementToRemove);

    
    cout << "Set after erasing " << elementToRemove << ": ";
    for (int num : mySet) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
