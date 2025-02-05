#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;
    s.insert(5);
    s.insert(15);
    s.insert(25);
    s.insert(35);
    s.insert(5); // Ignored because it's a duplicate
    s.erase(15); // Remove 15

    for (auto i = s.begin(); i != s.end(); ++i) {
        cout << *i << " ";
    }

    return 0;
}
