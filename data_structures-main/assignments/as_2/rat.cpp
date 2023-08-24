/*
Name: Roshane Bent
Date:9/3/2020
Assignment#2
File Name: rat.cpp
*/
#include <iostream>
#include <iomanip>
using namespace std;

const int RowSize=6;
const int ColSize=6;

void two_dim(int array[][ColSize])//assigns elements to an endex and prints it to the screen in a 6x6 format
  {
    for(int i=0;i<RowSize;++i)
      {
        for(int x=0; x<ColSize; ++x)
          {
            array[i][x]=rand()%100+99;
            cout<< array[i][x]<<" ";
          }
        cout<<endl;
      }
    }
  void printd1(int array[][ColSize],int RowSize)//prints the first diagnol
    {
      cout<<"The diagnol from left to right is: ";

      for(int i= 0; i<RowSize;i++)
        {
          cout<<array[i][i]<<" ";
        }
      cout<<endl;
      }
  void printd2(int array[][ColSize],int RowSize)// prints the second diagnol
    {
      cout<<"The diagnol from right to left is: ";
       int x =RowSize-1;
      for(int i= 0; i<RowSize;i++)
        {
          cout<<array[i][x--]<<" ";// as i increases x decreases
        }
        cout<<endl;
  }

int main()
{
    cout<<"This program creates a 6x6 two dimensional array."<<endl<<endl;

    int array[RowSize][ColSize]={0};
    cout<<"This is the 6x6 array:"<<endl;
    two_dim(array);
    cout<<endl;
    printd1(array,RowSize);//prints the diagnol 1
    cout<<endl;
    printd2(array,RowSize);// prints the diagnol 2

  return 0;
}
