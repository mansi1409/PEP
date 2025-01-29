//Write a function template findMax that takes two arguments of any type and returns the larger one.
// , Demonstrate its use with int, float, and string.

#include <iostream>
#include <string>
using namespace std;
template <class T>
T findMax(T a, T b) {
    if(a > b) {
        return a;
    } else if(b>a){ 
        return b;
    }
}
int main() {
    
    int m , n;
    cout<<"Enter m :"<<endl;
    cin>>m;
    cout<<"Enter n : "<<endl;
    cin>>n;
    cout << "Max of m and n is "<<findMax(m,n)<<endl;
    
    float t1 , t2;
  
    cout<<"enter t1 :"<<endl;
    cin>>t1;
    cout<<"Enter t2: "<<endl;
    cin>>t2;

    cout << "Max of t t1 and t2 is " <<findMax(t1,t2)<< endl;

    
    string str1 , str2 ;
    cin>>str1>>str2;
    cout << "Max of str1 and str2 is "<<findMax(str1,str2) << endl; //compare ASCII value of the string

    return 0;
}
