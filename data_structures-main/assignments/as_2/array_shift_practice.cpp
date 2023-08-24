/*
Name: Roshane Bent
Date:9/3/2020
Assignment#2
File Name: array_shift.cpp

*/
#include<iostream>
#include<cstdlib>
using namespace std;


int print(int x)//print function
  {
    cout<<x<<" ";
  }

int round_shift(int x,int y)// shift function
  {

    for (int i=y;i==y;i--)
      {
        print(x);
      }
      for (int i=0;i<y-1;i++)
          {
             print(x);
          }
    }
int main()
{
  const int SIZE=10;// size of the  array 10 elements
  int array[SIZE];
  int i;
//cout<<"The elements in the area are:";
    for (i=0;i<SIZE; i++)// prints the 10 random elements
      {
        array[i]= rand()%100;//generates a random number

        print(array[i]); //prints the random numbers (the 10 elements)
      }



      cout<<endl;

    for ( int i=SIZE-1;i>=SIZE-1;i--)
        {
          print(array[i]);
        }

      for ( i=0;i < SIZE-1;i++)
          {
             print(array[i]);
          }
    cout<<endl;
    round_shift(array[i],SIZE);
      for ( i=0;i < SIZE-1;i++)
        {
          print(array[i]);
        }
  cout<<endl;
  cout<<endl;

return 0;
}
