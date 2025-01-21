
  #include<iostream>
using namespace std;

int main() {
    class A {
    public:
        void display() {
            cout << "Hello";
        }
    };

    class B : public A { // inheritance syntax
    };

    B b;
    b.display();  //  call the display function from class A
    return 0;
}
