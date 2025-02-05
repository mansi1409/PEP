#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> a;
    a.push_back(6);
    a.push_back(7);
    a.push_back(8);
    a.push_back(9);
    for(int i = 0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    a.pop_back();
    a.erase(a.begin());
    cout<<endl;
     for(int i = 0; i<a.size(); i++){
        cout<<a[i]<<" ";
     }
     cout<<endl;
    a.insert(a.begin(),10);
    for(int i = 0; i<a.size(); i++){
        cout<<a[i]<<" ";
     }
    return 0;
}