// Given a set<int>, check if a particular element exists using find().
#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> a;
    a.insert(230);
     a.insert(213);
      a.insert(223);
       a.insert(233);
        a.insert(243);
        a.find(400);
        for(auto i = a.begin(); i != a.end(); i++){
            cout<< *i<<" ";

        }
      return 0;

}