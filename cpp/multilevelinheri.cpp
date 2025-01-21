#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "This animal eats food." << endl;
    }
};

// Derived class 1 (inherits from Animal)
class Mammal : public Animal {
public:
    void walk() {
        cout << "This mammal walks." << endl;
    }
};

// Derived class 2 (inherits from Mammal)
class Dog : public Mammal {
public:
    void bark() {
        cout << "This dog barks." << endl;
    }
};

int main() {
    // Create an object of the Dog class
    Dog dog;

    // Call methods from all levels of inheritance
    dog.eat();   // Inherited from Animal
    dog.walk();  // Inherited from Mammal
    dog.bark();  // Defined in Dog

    return 0;
}
