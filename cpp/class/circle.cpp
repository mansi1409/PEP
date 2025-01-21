#include<iostream>
#include<stdio.h>
#include<string>
#include<cmath>
using namespace std;
class circle{
  public:
 double radius;
 double calculateArea() {
        return 3.14 * radius * radius; 
    }

    double calculateCircumference() {
        return 2 * 3.14 * radius; // Formula for circumference
    }
};
    int main(){
      circle myCircle; //class object
      cout << "Enter the radius of the circle: ";
    cin >> myCircle.radius;

    cout << "Area: " << myCircle.calculateArea() << endl; 
    cout << "Circumference: " << myCircle.calculateCircumference() << endl; 

    return 0;
    }



   




