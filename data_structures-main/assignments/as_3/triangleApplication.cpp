

#include "Triangle.h"

int main()
{
cout<<"This program calculates the perimeter and";
cout<<" area of a triangle with the given sides."<<endl;

  int s1,s2,s3;
  cout<<"input the first side: ";
  cin>>s1;
  cout<<"input the second side: ";
  cin>>s2;
  cout<< "input the third side: ";
  cin>>s3;

Triangle tri(s1,s2,s3);
//input.input2();
tri.input(s1,s2,s3);
Triangle(s1,s2,s3);
cout<<"the perimeter is: "<<tri.get_perimeter();
cout<<endl;
cout<<"the area is: "<<tri.get_area();
cout<<endl;

return 0;
}
