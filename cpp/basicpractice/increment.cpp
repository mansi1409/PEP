//Pre and Post Increment/Decrement
#include<iostream>
using namespace std;
int main(){
    int n = 57;
    cout << "\n\n Display the operation of pre and post increment and decrement :\n";
   cout<<"Number is: "<<n<<endl;
   n++; // post increment by 1
   cout<<"Number after post increment: "<<n<<endl;
   n= n+1;
   cout<<"Number after pre increment: "<<n<<endl;
   --n;
   cout<<"Number after post decrement"<<n<<endl;
   n=n-1;
   cout<<"Number after pre decrement"<<n<<endl;
}