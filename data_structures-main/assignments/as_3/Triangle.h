
/* ------------------------------ Interface File ----------------------------
Name: Roshane Bent
Date:9/15/2020
Assignment#:3
File Name: Triangle.h

This is the interface file, which contain the class definition(s) (i.e. data
member declarations and member function declarations) */
/* ------------------------- Preprocessor Directives ------------------------ */

#ifndef TRI_H // Stop Multiple Header File Inclusion
#define TRI_H
#include <iostream>
#include <cassert>
#include <cmath>
using namespace std;
/* ----------------------------- Class Definition --------------------------- */

class Triangle
  {
    private://data members
      double side1;
      double side2;
      double side3;
    public:
      void input(double x,double y,double w);
    //  void input2();
      Triangle(double x,double y,double w);//class invariant
      ~Triangle(); // Destructor
      double get_area();//accessor functions
      double get_perimeter();//accessor functions

  };
#endif
