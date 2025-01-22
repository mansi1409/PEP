#include<iostream>
using namespace std;
int main(){
int numerator, denominator;
cout<<"enter numerator"<<endl;
cin>>numerator;
cout<<"Enter denominator: ";
cin>>denominator;
try{
    if (denominator == 0){
        throw "Division by zero is not aloowed:";
    }
    cout<<"Result:" <<numerator/denominator<<endl;
} catch (const char*error) {
    cout<<"error: " <<error<<endl;
}
return 0;
}