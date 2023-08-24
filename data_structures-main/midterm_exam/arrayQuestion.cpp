/*
file name:arrayQuestion.cpp
name:Roshane Bent
date:10/13/2020
assignment:midterm
description:This program creates an array of random intergers
and removes the largest and smallest values.
*/
#include <iostream>
#include<cstdlib>
using namespace std;


int removesLargest(int* array, int cap);//finds the smallest element and deletes it
int removesSmallest( int* array, int cap);//finds the smallest element and then deletes it
void getElements(int* array, int cap);//fills the array with elements
void print( const int* array, int cap);//prints the array


int main()
  {
    cout<<"This program creates an array of random intergers and removes the largest and smallest values."<<endl;
    cout<<endl;
    const int CAPACITY=10;// capacity of the  array 10 elements
    int array[CAPACITY];

    cout<<"Your array of random integers are: "<<endl;
    getElements(array,CAPACITY);
    print(array,CAPACITY);

    cout<<endl<<"The Smallest value is:";
    cout<<removesSmallest(array,CAPACITY)<<endl;
    cout<<"After the smallest was removed the new array is: "<<endl;
    print(array,CAPACITY-1);

    cout<<endl<<"the Largest value is:";
    cout<<removesLargest(array,CAPACITY)<<endl;
    cout<<"After the largest was removed the new array is: "<<endl;
    print(array,CAPACITY-2);

    return 0;

  }
void print(const int* array, int cap)
  {
    for (int i = 0; i < cap; i++)
      {
          cout << array [i] << " ";// prints each element
      }
      cout << endl;
  }

  void getElements( int* array, int cap)
    {
      for (int i=0;i<cap; i++)// assigns each element a random integer
        {
          array[i] = rand()%100;//generates a random number
        }
    }

 int removesLargest(int* array, int cap)
    {
      int max=array[0];//the current max is element 0
      int index;

      for(int i=1;i<cap;i++)
        {
          if(max<array[i])
            {
              max=array[i];//finds the largest number
              index=i;//finds the index of the element
            }
        }

      for (int i=index; i<cap; i++)
        {
            array[i] = array[i+1];//shifts all elements to the left
        }
        return max;
    }
int removesSmallest( int* array, int cap)
  {
    int min = array[0];// current min is element 0
    int index;
    for(int i=0;i<cap;i++)
      {
       if(min > array[i])
          {
            min=array[i];
            index=i;
          }
      }
      for (int i=index; i<cap; i++)
        {
            array[i] = array[i+1];
        }
      return min;
  }
