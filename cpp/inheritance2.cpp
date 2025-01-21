#include<iostream>
using namespace std;

    class person{
        public:
        void name(){
            int a;
            cout<<"Enter the name of the person"<<endl;
            cin>>a;
        }
    };
    class student:public person{
        public:
         void id(){
            int id;
            cout<<"Enter user id"<<endl;
            cin>>id;
        }
    };
    int main(){
    student s;
    s.name();
    s.id();
    return 0;
    }

