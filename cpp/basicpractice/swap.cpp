#include<iostream> //swapping
using namespace std;
int main(){
    int a, b, temp;
    cout<<"enter a:"<<endl;
     cin>>a;
    cout<<"enter b:"<<endl;
    cin>>b;
    temp = a;
    a = b;
    b = temp;
    cout<<"After swapping: "<<a<<endl;
    cout<<"After swapping: "<<b<<endl;

}