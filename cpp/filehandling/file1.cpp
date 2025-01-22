#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream outFile("example.txt"); //create and open a file for writing 
    if (outFile.is_open()){//check if file is open
    outFile<<"Hello Mansi 21"<<endl;
    outFile<<"hihihihihi"<<endl;
    cout<<"Data written is successful!"<<endl;

    }
    else{
        cout<<"error"<<endl;
    }
    outFile.close();
    return 0;
}