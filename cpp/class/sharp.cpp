#include<iostream>
#include <cmath>
using namespace std;

// Base class Shape
class Shape {
public:
    // Virtual function to calculate the area
    virtual double area() const = 0; // Pure virtual function
};

// Derived class Circle
class Circle : public Shape {
private:
    double radius;
public:
    // Constructor to initialize radius
    Circle(double r) : radius(r) {}

    // Override the area() function to calculate the area of the circle
    double area() const override {
        return M_PI * radius * radius; // Area of a circle: πr²
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
private:
    double length, breadth;
public:
    // Constructor to initialize length and breadth
    Rectangle(double l, double b) : length(l), breadth(b) {}

    // Override the area() function to calculate the area of the rectangle
    double area() const override {
        return length * breadth; // Area of rectangle: length * breadth
    }
};

int main() {
    // Create objects of Circle and Rectangle
    Shape* shape1 = new Circle(5.0); // Circle with radius 5
    Shape* shape2 = new Rectangle(4.0, 6.0); // Rectangle with length 4 and breadth 6

    // Use pointers to call the area() function for both derived classes
    cout << "Area of Circle: " << shape1->area() << endl;
    cout << "Area of Rectangle: " << shape2->area() << endl;

    // Clean up dynamically allocated memory
    delete shape1;
    delete shape2;

    return 0;
}
