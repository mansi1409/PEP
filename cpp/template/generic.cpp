#include<iostream>
using namespace std;
template<class T> T func1(T a, T b){
T c = a+b;
return c;
}
int main(){
int a, b, c;
cin>>a;
cin>>b;
c = func1(a,b);
cout<<c;
return 0;
}