#include<iostream>
using namespace std;
template<class T> T func1(T a, T b){
T c = a+b;
return c;

}
int main(){
float a =5.3;
float b = 7.2;
float c = func1(a,b);
cout<<c;
return 0;
}