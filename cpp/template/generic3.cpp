#include<iostream>
using namespace std; // addition of two data type in same function
template<class T, class x> void func1(T a, x b){

cout<<a;
cout<<b;


}
int main(){
int a = 5;
float b = 7.2;
func1(a,b);

return 0;
}