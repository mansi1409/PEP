//Write a C++ program to declare and initialize a vector with values {10, 20, 30, 40, 50} and print its elements.
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> num = {10, 20, 30, 40, 50};
    cout << "Vector elements: ";
    for (int n1 : num) {
        cout << n1 << " ";
    }
    cout << endl;

    return 0;
}
