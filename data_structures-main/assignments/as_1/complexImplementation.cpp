/* --------------------------- Implementation File -------------------------- */

/* File Name: circle.cpp

This is the implementation file, which contains the member function
definitions) */

/* ----------------------- Member Function Definitions ---------------------- */

#include "complex.h"

Complex :: Complex(double value) //Parameter Constructor
  :real_value(value)
  {

  }

Complex :: Complex(const Complex & x) //Copy constructor
  :real_value(x.real_value),imaginary_value(x.imaginary_value)
  {
    cout << "The copy constructor was called." << endl;
  }


Complex :: Complex()//Default constructor
  :real_value(0.0),imaginary_value(0.0)
  {
    cout << "The default constructor was called." << endl;
  }


Complex :: Complex(double value1,double value2)//double parameter
  :real_value(value1),imaginary_value(value2)
  {
    cout << "The parameter constructor was called." << endl;
  }


Complex :: ~ Complex()//destructor
  {
    cout << "The destructor was called: ";
    cout << endl;
  }

void Complex :: add(const Complex & set2)
  {
    double real, imaginary;

    real= real_value + set2.real_value;

    imaginary= imaginary_value+ set2.imaginary_value;

    print(real, imaginary);
  }

void Complex :: subtract(const Complex & set2)
  {
    double real,imaginary;

    real = real_value - set2.real_value;

    imaginary = imaginary_value - set2.imaginary_value;

    print(real, imaginary);
  }

void Complex ::multiply(const Complex & set2)
  {
    double real,imaginary;

    real = ((real_value *set2.real_value)-(imaginary_value * set2.imaginary_value));

    imaginary=((real_value * set2.imaginary_value)+(set2.real_value * real_value));

    print(real, imaginary);
  }


void Complex :: divide(const Complex & set2)
  {
    double real, imaginary;

    real = ((real_value * set2.real_value)+(imaginary * set2.imaginary_value)) / ((set2.real_value * set2.real_value)+(set2.imaginary_value*set2.imaginary_value));

    imaginary= ((set2.real_value * imaginary_value)-(real_value * set2.imaginary_value)) / ((set2.real_value * set2.real_value)+(set2.imaginary_value*set2.imaginary_value));

    print(real, imaginary);
  }

void Complex :: modulus()
  {
    double mod;
    mod=sqrt((real_value*real_value)+(imaginary_value*imaginary_value));
    print(mod);

  }

  void Complex :: print(double real, double imag)
    {
      cout<<"The complex number is"<< real << "+i*" << imag <<endl;
    }

  void Complex :: print(double x)
    {
      cout<<"The mod number is:"<< x <<endl;
    }
