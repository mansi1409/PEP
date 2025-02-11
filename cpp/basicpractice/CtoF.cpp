//Fahrenheit to Celsius Conversion
#include<iostream>
using namespace std;
int main(){
    float frh,cel;
    cout<<"Enter frh: "<<endl;
    cin>>frh;
    
    cel = ((frh * 5.0) - (5.0 * 32)) / 9 ;
    cout<<"The Temperature in Fahrenheit  : "<<frh<<endl;
    cout<<"The Temperature in Celsius: "<<cel<<endl;

}