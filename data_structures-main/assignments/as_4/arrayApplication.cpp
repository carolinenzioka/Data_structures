#include "array.h"

int main()

{
  int cap;
  int value;

  cout<<"This program allows the user to create an array.\n";
  cout<<"What is the capacity of your array: ";
  cin>> cap;


  Array cl(cap);

  for (int i=0; i<cap;i++)
  {
    cout<< "Enter element "<<i<<": \n";
    cin>> value;
    cl.insert(value);
  }


  cl.print();

}
