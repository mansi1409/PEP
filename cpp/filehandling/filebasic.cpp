#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream outFile("basic.txt"); //create and open a file for writing 
    if (outFile.is_open()){//check if file is open
    outFile<<"Basic text file"<<endl;
    outFile<<"22jan2024"<<endl;
    cout<<"Done!"<<endl;
}
else{
   cout<<"error!"<<endl;
}
 outFile.close();
 return 0;
}