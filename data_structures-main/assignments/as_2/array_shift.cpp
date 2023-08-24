/*
Name: Roshane Bent
Date:9/3/2020
Assignment#2
File Name: array_shift.cpp

*/
#include<iostream>
#include<cstdlib>
using namespace std;


void print(const int array[], int size)// this is the print function
  {
  for (int i = 0; i < size; i++)
    {
        cout << array [i] << " ";// prints each element
    }
    cout << endl;

  }
void Switch (const int array[], int size)
    {
      cout<< array[size -1]<< " ";//prints last variable first

      for (int i = 0; i < size-1; i++)
        {
          cout << array [i] << " ";// prints the elements up to index 8
        }
      cout << endl;
    }

int main()
{
  const int SIZE=10;// size of the  array 10 elements
  int array[SIZE];
  for (int i=0;i<SIZE; i++)// assigns each element a random integer
    {
      array[i]= rand()%100;//generates a random number
    }
  // Calling the print function
  print (array, SIZE);// prints the list of random numbers.
  Switch(array,SIZE);// prints the list of random rumbers last element first.

return 0;

}
