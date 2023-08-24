
#include <iostream>
#include <vector>
using namespace std;

int main()
{

  vector<int> v(10);  //v1 is empty,size = 0, capicity = 10
  vector<int>vec;   // creating an empty vector

  v.assign(5,12);     //creates

  for(int i=0;i< v.size();i++)
    {
      cout<< v[i]<<endl;
    }
  cout<<endl;

  cout<<"at point 3: "<< v.at(3)<<endl;       // prints the element location in the parameter to the screen
  cout<<"The last value is: "<<v.back()<<endl;       //returs the last value of the vector
  cout<<"the first value is: "<<v.front()<<endl;       //returns the first value of the vector
  cout<<"The capacity is: "<<v.capacity()<<endl;//returns the value of the capacity
  cout<<"the size is:"<<v.size()<<endl;//returns the size of the vector
  v.pop_back(); //removes last elemet
  v.push_back(5);//insert el at the end of the vector
  v.swap(vec);// swaps the contents of two vectors
  vector<int>cv(v);// creating a copy constructor
  v.clear();//removes all the elements in the vector
  v.empty(); //tells me if the vector includes elements
  cout<<"the swapped vector is: ";
  for(int i=0;i<vec.size();i++)
    {
      cout<< vec[i]<<" ";
    }
    cout<<endl;
return 0;

}
