#include<iostream>
#include<map>
using namespace std;
int main(){
    map <int, string> m; //here int is (key) and string is (value\data)
    m.insert({1,"YO,"});
    m.insert({2,"Hello"});
    m.insert({3,"Mansi"});
    m.insert({4,"how r"});
    m.insert({5,"u"});
  cout << "Map contents: " << endl;
    for (auto i = m.begin(); i != m.end(); ++i) {
        cout << i->first<<" "<< i->second<<endl;
    }
 
  // m[2] = "abc";
  // m.emplace("key", "value"); //emplace provide us optimize result
    return 0;

}