//Insert elements into a set<int> and print them to show that duplicates are not allowed.

#include<iostream>
#include<set>
using namespace std;
int main(){
    set <int> a;
    a.insert(100);
     a.insert(200);
      a.insert(300);
       a.insert(400);
        a.insert(100);
        for(auto i = a.begin(); i != a.end(); i++){
            cout<< *i <<" ";
        }

}
