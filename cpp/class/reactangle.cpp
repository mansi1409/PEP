#include<iostream>
#include<stdio.h>
#include<string>
#include<cmath>
using namespace std;
class rectangle{
    public:
    int len;
    int width;
 int calculateArea(){
   return len*width;
 } int calculateParameter(){
  return 2*(len+width);
 }
   };
   int main(){
    rectangle myRectangle;
    cout<<"Enter length: ";
    cin>>myRectangle.len;
    cout<<"Enter width: ";
    cin>>myRectangle.width;
    cout<< "Area: " <<myRectangle.calculateArea() <<endl;
     cout<< "parameter: " <<myRectangle.calculateParameter() <<endl;
     return 0;

   }