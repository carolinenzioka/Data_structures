/* --------------------------- Implementation File -------------------------- */

/* File Name: triangleimplementation.cpp

This is the implementation file, which contains the member function
definitions) */

/* ----------------------- Member Function Definitions ---------------------- */

#include "Triangle.h"

/*void Triangle :: input2()
  {
    cout<<"input the first side: ";
    cin>>side1;
    cout<<"input the second side: ";
    cin>>side2;
    cout<< "input the third side: ";
    cin>>side3;
  }*/
void Triangle :: input(double x, double y, double w)
{
  side1=x;
  side2=y;
  side3=w;
}

Triangle :: ~ Triangle()//destructor
  {
    cout << "The destructor was called: ";
    cout << endl;
  }

double Triangle :: get_perimeter()
  {
    double perimeter=(side1+side2+side3)/2;

    return perimeter;
  }

double Triangle :: get_area()
  {
    double p=get_perimeter();
    double area = sqrt(p*(p-side1)*(p-side2)*(p-side3));
  //  double num=get_perimeter()*(get_perimeter()-side1)*(get_perimeter()-side2)*(get_perimeter()-side3);
    //double area= sqrt(num);
    return area;
  }

Triangle :: Triangle (double x, double y, double w)
:side1(x),side2(y),side3(w)
{
  if (side3>(side1+side2))
    {
      cout<<"No triangle can be made."<<endl;
      cout<< "THIS PROGRAM ABORTED!!!"<<endl;
      assert(false);
    }
  else if (side2>(side3+side1))
    {
      cout<<"No triangle can be made."<<endl;
      cout<< "THIS PROGRAM ABORTED!!!"<<endl;
      assert(false);
    }
  else if (side1>(side3+side2))
    {
      cout<<"No triangle can be made."<<endl;
      cout<< "THIS PROGRAM ABORTED!!!"<<endl;
      assert(false);
    }
}
