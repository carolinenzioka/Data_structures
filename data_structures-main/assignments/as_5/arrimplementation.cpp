#include "array.h"


  Array :: ~ Array()// destructor
    {
      cout << "The destructor was called: ";
      delete [] arr;
      cout << endl;
    }

  Array :: Array(int cap)//declaration of the array
  : capacity (cap)
    {
        arr = new int [capacity];//this declares an array of unknowkn capacity
        size=0;
    }
    void Array :: print() const//print function
      {
          for (int i = 0; i < size; i++)
            {
                cout << arr[i] << " ";// prints each element
            }
          cout << endl;
      }

  void  Array :: insert(int value)//inserting the values into the index
  {
    for(size=0;size<capacity;size++)
      {
       if(size==0)
         {
           arr[size]= value;
         }
       else if(value>arr[size-1])
         {
             arr[size]=value;
         }
       else
         {
           int tmp;
           tmp=arr[size];
           arr[size]=arr[size-1];
           arr[size-1]=value;
         }
     }
    }




void Array :: moveTowardEnd(int index)
  {
    int min;
    for(int i=0;i<index;i++)
      {
        if(i==0)
          {
            min=arr[i];
          }
        else if(arr[i]<=min)
          {
            min=arr[i];
          }
      }
    for(int i=0;i<index;i++)
      {
        if(arr[i]==min)
          {
            for(int j=i;j>0;j--)
              {
                int tmp;
                tmp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=tmp;
              }

      }
    }
}
