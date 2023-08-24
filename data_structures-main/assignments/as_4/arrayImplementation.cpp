#include "array.h"


  Array :: ~ Array()// destructor
    {
      cout << "The destructor was called: ";
      delete [] arr;
      cout << endl;
    }

  Array :: Array(int cap)
  :capacity(cap)
    {
        arr = new int [capacity];//this declares an array of unknowkn capacity
        size=0;
        cout << endl;
    }

  void  Array :: insert (int value)
    {

    if(size==capacity)
     {
       assert(false);
     }
    else
     {
       arr[size]= value;
       size++;
      }
    }

  void Array :: print() const
    {
        for (int i = 0; i < size; i++)
          {
              cout << arr[i] << " ";// prints each element
          }
        cout << endl;

    }
