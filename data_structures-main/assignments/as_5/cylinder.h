#ifndef CIRCLE_H // Stop Multiple Header File Inclusion
#define CIRCLE_H
#include <iostream>
#include <cassert>
// #include "circle.h" // Typo in book! This line should not exist!
using namespace std;

/* ----------------------------- Class Definition --------------------------- */

class Circle
{
  private:
    double radius;
  public:
    Circle(double radius); // Parameter Constructor
    Circle(const Circle& circle); // Copy Constructor
    Circle(); // Default Constructor
    ~Circle(); // Destructor
    double get_radius(int value) const; // Accessor (getter)
    double get_area() const; // Accessor (getter)
    double get_perimeter() const; // Accessor (getter)
    void set_radius(double value); // Mutator (setter)
};

class Cylinder : public Circle
{
  private:
    double height;
  public:
    Cylinder(double height); // Parameter Constructor
    Cylinder(const Cylinder& cylinder); // Copy Constructor
    Cylinder(); // Default Constructor
    ~Cylinder(); // Destructor
    double get_vol(double rad);// get volume function
    double get_sarea(double rad);// get surface area function

};
#endif
