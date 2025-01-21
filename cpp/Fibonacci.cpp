#include<iostream>
using namespace std;
int main(){
    int n, a=1 , b =2;
    cout<<"Enter n: ";
    cin>>n;
    for (int i = 1; i <= n; ++i) {
        cout <<a<<endl;
     int series = a + b;
        a = b;
        b = series;
    }
    cout <<b ;
    return 0;
}
