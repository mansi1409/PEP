//Write a C++ program to demonstrate insert(), erase(), find(), and count() on a set<int>.
#include <iostream>
#include <set>
using namespace std;
int main() {
    set<int> n;
    n.insert(10);
    n.insert(20);
    n.insert(30);
    n.insert(40);
    n.insert(50);
n.erase(10);
for(auto i = n.begin(); i !=n.end(); i++){
    cout<<* i<<" "<<endl;
}auto it = n.find(30);
   
return 0;
}
