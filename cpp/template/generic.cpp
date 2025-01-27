#include<iostream>
using namespace std;
template<class T> T func1(T a, T b){
T c = a+b;
return c;

}
int main(){
int a, b, c;

cout<<"Enter a: " <<endl;
cin>>a;
cout<<"Enter b: "<<endl;
cin>>b;
c = func1(a,b);

cout<<"sum: "<<c<<endl;
return 0;
}