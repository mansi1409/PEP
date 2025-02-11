// Check whether the primitive values crossing the limits or not :       
#include<iostream>
using namespace std;
int main(){
    
     char gender = 'F';             // char is single-quoted
    bool isEmployed = true;         // true(non-zero) or false(0)
    unsigned short numOfsons = 2;  // [0, 255]
    short yearOfAppt = 2009;       // [-32767, 32768]
    unsigned int YearlyPackage = 1500000; // [0, 4294967295]
    double height = 79.48;         // With fractional part
    float gpa = 4.69f;             // Need suffix 'f' for float
    long totalDrawan = 12047235L;  // Suffix 'L' for long
    long long balance = 995324987LL;// Need suffix 'LL' for long long int  
cout<<"Gender is: "<<gender<<endl;
cout<<isEmployed<<endl;
}