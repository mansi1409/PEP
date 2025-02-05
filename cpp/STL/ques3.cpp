#include <iostream>
#include <vector>
using namespace std;

int main() {
   
   vector<int> vec;
    int numElements = 5;
    for (int i = 1; i <= numElements; ++i) {
        
        vec.push_back(i);

        
        cout << "After adding " << i << ":" <<endl;
        cout << "Size: " << vec.size() << endl;
        cout << "Capacity: " << vec.capacity() <<endl;
    }

    return 0;
}
