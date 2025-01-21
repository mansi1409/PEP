#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;
    string country;

public:
    // Set values
    void setName(string newName) { name = newName; }
    void setAge(int newAge) { age = newAge; }
    void setCountry(string newCountry) { country = newCountry; }

    // Get values
    string getName() { return name; }
    int getAge() { return age; }
    string getCountry() { return country; }
};

int main() {
    Person person;

    person.setName("John");
    person.setAge(30);
    person.setCountry("Canada");

    cout << "Name: " << person.getName() << endl;
    cout << "Age: " << person.getAge() << endl;
    cout << "Country: " << person.getCountry() << endl;

    return 0;
}
