/*
file name:recursionQuestion.cpp
name:Roshane Bent
date:10/13/2020
assignment:midterm
description:This program creates an array of random intergers
and identifies the smallest value in the array.
*/
#include <iostream>
#include<cstdlib>
using namespace std;

void getElements(int* array);//fills the array with elements
void print(const int* array);//prints the array
int smallestNum(int* array);
int smallestNum(int* array,int n, int& index);//helper function



int main()
  {
    int array1[10],array2[10],array3[10];//initialization of the arrays


    getElements(array1);// fills the array
    cout<<"array 1 is: "<<endl;
    print(array1);//prints the array
    cout<<"The smallest value in the array is: ";
    cout<<smallestNum(array1)<<endl;// prints the smallest element to the screen

    //int array2[10];
    getElements(array2);
    cout<<"array 2 is: "<<endl;
    print(array2);
    cout<<"The smallest value in the array is: ";
    cout<<smallestNum(array2)<<endl;

  //  int array3[10];
    getElements(array3);
    cout<<"array 3 is: "<<endl;
    print(array3);
    cout<<"The smallest value in the array is: ";
    cout<<smallestNum(array3)<<endl;

    return 0;
  }

  void print(const int* array)
    {
      for (int i = 0; i < 10; i++)
        {
            cout << array [i] << " ";// prints each element
        }
        cout << endl;
    }

    void getElements( int* array)
      {
        for (int i=0;i<10; i++)// assigns each element a random integer
          {
            array[i] = rand()%100;//generates a random number
          }
      }

    int smallestNum(int* array)
      {
          int index=1;// compares with the second element
          int small=array[0];// when the program runs the first iteration the first element is the smallest
          return smallestNum(array,index,small);
      }

    int smallestNum(int* array,int index, int& small)
      {
        if (index < 10)//stops at the 9th iterration
          {
            if(small>array[index])//the next element is smaller change index
              {
                small = array[index];
                return smallestNum(array,index+1,small);//recursion
              }
          else if(small<array[index])
              {
                return smallestNum(array,index+1,small);//recursion
              }
          }
      else
        {
          return small;//returns the smallest number
        }

      }
