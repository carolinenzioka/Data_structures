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

  cout<<"your sorted array is: ";
  cl.print();

  cout<<"What value do you not want in your array:";
  cin>>value;

  cl.remove(value);
  cout<<"your new array is: ";
  cl.print();

}
