/*
Name: Roshane Bent
Date:9/3/2020
Assignment#:3
File Name: std_dev.cpp

*/
#include<iostream>
#include<cstdlib>
#include <cmath>

using namespace std;

int main()
{
const int SIZE=10.0;// size of the  array 10 elements
int array[SIZE];
float sum=0.0;
float sum2=0.0;
float avg;
int sq;
cout<<"The elements in the area are: ";
for (int i=0;i<SIZE; i++)// prints the 10 random elements
  {
    array[i]= rand()%100;//generates a random number
    cout<<array[i]<<" "; //prints the random numbers (the 10 elements)
  }
for (int i=0;i<SIZE; i++)// calculates the sum of all the elements
  {
    sum=sum+array[i];
  }
avg= sum/SIZE;// calculates the average of the 10 elements
cout<<endl<<"The average of the elements is:" <<avg<<endl;// prints average

for( int i=0; i<SIZE; i++)
  {
    int std;
    std = pow((array[i]-avg),2.0)/SIZE; //Standard deviation
    sum2= sum2+std;// saves the values
    sq=sqrt(sum2);
  }
cout<<"The standard deviation of the numbers are:"<<sq<<endl;// prints the standard deviation

return 0;
}
