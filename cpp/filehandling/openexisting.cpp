#include<iostream>
#include<fstream>
using namespace std;
int main(){
      ifstream inFile("basic.txt");//open the file for reading
    string line; 
    if(inFile.is_open()){//check if the file is open
        while(getline(inFile,line))//read the file line by line
        {
            cout<<line<<endl;
        }
    }
    else{
        cout<<"error"<<endl;
    }
    inFile.close();//close file
    return 0;
}