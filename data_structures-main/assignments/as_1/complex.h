/* ------------------------------ Interface File ----------------------------
Name: Roshane Bent
Date:8/26/2020
Assignment#:1
File Name: complex.h

This is the interface file, which contain the class definition(s) (i.e. data
member declarations and member function declarations) */o
/* ------------------------- Preprocessor Directives ------------------------ */

#ifndef COMPLEX_NUMBER_H // Stop Multiple Header File Inclusion
#define COMPLEX_NUMBER_H
#include <iostream>
#include <cassert>
#include <cmath>
using namespace std;

/* ----------------------------- Class Definition --------------------------- */

class Complex
  {
    private:
      double real_value;
      double imaginary_value;
    public:
      Complex(double value1,double value2);//Double parameter
      Complex(double value); // Parameter Constructor
      Complex(const Complex & x); // Copy Constructor
      Complex(); // Default Constructor
      ~Complex(); // Destructor
      void add(const Complex & set2); // Accessor (getter)
      void subtract(const Complex & set2); // Accessor (getter)
      void divide(const Complex & set2) ; // Accessor (getter)
      void multiply(const Complex & set2);//Accessor(getter)
      void modulus();//Accessor(getter)
      void print(double x,double y);
      void print(double x);
  };

#endif
