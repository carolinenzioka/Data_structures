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

 

  void  Array :: insert(int value)//inserting the values into the index
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
   int min;
    for(int i=0;i<size;i++)
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
      moveTowardEnd(min);
    }

  void Array :: print() const//print function
    {
        for (int i = 0; i < size; i++)
          {
              cout << arr[i] << " ";// prints each element
          }
        cout << endl;
    }

void Array :: moveTowardEnd(int index)
  {
    for(int i=0;i<size;i++)
        {
          if(arr[i]==index)
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

  void Array :: moveTowardFront(int index)
    {
     for(int i=index+1;i<size;i++)
        {
          arr[i-1]=arr[i];
        }
      size--;
    }

  void Array :: remove(int value)
    {
      for(int i=0;i<size;i++)
          {
            if(value==arr[i])
              {
                moveTowardFront(i);
                cout<<"The number has been deleted"<<endl;
              }
            else
              {
                return;
              }
          }

    }
