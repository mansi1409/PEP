//Write a C++ program to demonstrate insert(), erase(), find(), and count() on a map<int, string>.
#include<iostream>
#include<map>
using namespace std;
int main(){
    map <int, string> m;
    m.insert({19, "HII"});
    m.insert({20,"HELLO"});
    m.insert({30,"MANSI"});
for(auto i = m.begin(); i != m.end(); ++i){
    cout<<i->first<<" "<< i->second<<endl;
}
m.erase(20);
for(auto i = m.begin(); i !=m.end(); ++i){
    cout<<i->first<<" "<< i->second<<endl;
}
auto it = m.find(30);
    if (it != m.end()) {
        cout << "\nElement with key 30 found: " << it->first << " " << it->second << endl;
    } else {
        cout << "\nElement with key 30 not found." << endl;
    }

    // count() operation - check if the key 19 exists
    if (m.count(19)) {
        cout << "\nKey 19 exists in the map." << endl;
    } else {
        cout << "\nKey 19 does not exist in the map." << endl;
    }

return 0;

}