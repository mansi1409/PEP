#include<iostream>
#include<stdio.h>
#include<string>
#include<cmath>
using namespace std;
class MyClass {       // The class
     public:   //access public member
    int myNum;      
   string myString; 
};

int main() {
  MyClass myObj;  


  myObj.myNum = 15; 
  myObj.myString = "Some text";

  

  
  cout << myObj.myNum <<endl;
  cout << myObj.myString;
  
  return 0;
}



/*class MyClass {  // The class
private: // Access private members
    int myNum;       // Private variable
    string myString; // Private variable

public:
    // Setter for myNum
    void setMyNum(int num) {
        myNum = num;
    }

    // Getter for myNum
    int getMyNum() {
        return myNum;
    }

    // Setter for myString
    void setMyString(string str) {
        myString = str;
    }

    // Getter for myString
    string getMyString() {
        return myString;
    }
};

int main() {
    MyClass myObj;

    // Using setter methods to set values
    myObj.setMyNum(15);
    myObj.setMyString("Some text");

    // Using getter methods to access values
    cout << myObj.getMyNum() << endl;
    cout << myObj.getMyString() << endl;

    return 0;
}*/

