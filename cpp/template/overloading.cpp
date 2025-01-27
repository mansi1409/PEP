#include <iostream>
using namespace std;

template<class T, class x> void func1(T a, x b){
    cout<<a;
    cout<<b;
}
template<class A> void func1(A x){
    cout<<x;
}
int main(){
    int a = 5;
    float b =  5.6;
    func1(a,b);
    func1(a);
    return 0;

}