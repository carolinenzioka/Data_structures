#include "cylinder.h"

Circle :: Circle (double radius)
: radius (radius)
{
cout << "The radius was set" << endl;
}

// Definition of the Defualt Constructor
Circle :: ~ Circle()
{

}
Circle :: Circle()
: radius (0.0)
{
  cout<<"p"<<endl;
}

double Circle :: get_area() const
{
const double PI = 3.14159;
return (PI * radius * radius);
}

double Circle :: get_perimeter() const
{
const double PI = 3.14159;
return (2.00 * PI * radius);
}
void Circle :: set_radius(double rad)
{
  radius=rad;
}


//-------------------------------------------------------------------------------------//
Cylinder :: Cylinder (double height)
: height (height)
{
cout << "The height was set" << endl;
}
// Definition of the Defualt Constructor
Cylinder :: Cylinder()
: height (0.0)
{
cout << "The default constructor was called." << endl;
}

// Definition of the Copy Constructor
Cylinder :: Cylinder(const Cylinder& cylinder)
: height (cylinder.height)
{
cout << "The copy constructor was called." << endl;
}

// Definition of Destructor
Cylinder :: ~ Cylinder()
{
cout << "The destructor was called with circle of radius: ";
cout << endl;
// There is a typo in the book. They forgot the radius data member.
}

double Cylinder ::  get_vol(double rad)
{
  Circle::set_radius(rad);
  int vol;
  vol=(Circle::get_area())*height;
  return vol;
}

double Cylinder :: get_sarea(double rad)
{
  Circle::set_radius(rad);
  int sarea;
  sarea=(Circle::get_perimeter())*(rad+height);
  return sarea;

}
