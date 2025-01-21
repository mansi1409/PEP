#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int i=1;
    do{
        cout<<a<<"X"<<i<<" = "<<a*i<<endl;
        i++;
    }while(i<=10);
}