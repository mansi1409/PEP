#include <iostream>
using namespace std;
template <class T>
void swapValues(T& a, T& b) { 
    T temp = a; 
    a = b;    
    b = temp;   
}
int main() {
    int x , y ;
    cout<<"Enter a: "<<endl;
    cin>>x;
    cout<<"Enter b: "<<endl;
    cin>>y;
    cout << "Before swapping: x = " << x << ", y = " << y << endl;
    swapValues(x, y);
    cout << "After swapping: x = " << x << ", y = " << y << endl;

    /*double p = 1.5, q = 2.5;
    cout << "Before swapping: p = " << p << ", q = " << q << endl;
    swapValues(p, q);
    cout << "After swapping: p = " << p << ", q = " << q << endl;*/

    return 0;
}
