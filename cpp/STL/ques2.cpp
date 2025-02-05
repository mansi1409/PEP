//Create a vector of integers. Insert the values {1, 2, 3, 4, 5} and remove the third element (index 2). Print the modified vector.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> n ={10,20};
    cout<<"elements: ";
    n.insert(n.begin(),{1,2,3,4,5});
    for(int i = 0; i<n.size(); i++){
        cout<<n[i]<<" ";
     }
     n.erase(n.begin() + 2);
    cout<<endl;
     for(int i = 0; i<n.size(); i++){
        cout<<n[i]<<" ";
     }
     cout<<endl;
    return 0;
}