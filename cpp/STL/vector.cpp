#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> a;
    //vector <int> a[5];
    //vector <int> a[5,10];
    //vector <int> b[5] ={1,2,3,4,5};
    //adding the element in the vector
    a.push_back(6);
    a.push_back(7);
    a.push_back(8);
    a.push_back(9);

    //for (int i : a){
   // cout<< i;
//}
    for(int i = 0; i<a.size(); i++){
        cout<<a[i];
    }
    return 0;
}
