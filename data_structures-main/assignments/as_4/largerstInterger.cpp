#include <iostream>
using namespace std;


// function declaration
int& largest(int& x,int& y,int& z);

int main()
    {
      int N1,N2,N3;// integer variables

      cout<<"This program finds the largest integer of the three"<<endl;
      cout<< "Input the first integer: ";
      cin>>N1;
      cout<<"Input the second integer: ";
      cin>>N2;
      cout<<"Input the third integer: ";
      cin>>N3;

      cout<<"The largest number is: "<<largest(N1,N2,N3)<<endl;

      return 0;
    }
int& largest(int& rN1,int& rN2,int& rN3)
{
    if((rN1>=rN2)&&(rN1>=rN3))
      {
        return rN1;
      }
    else if((rN2>=rN1)&&(rN2>=rN3))
      {
          return rN3;
      }
    else if((rN3>=rN1)&&(rN3>=rN2))
      {
            return rN3;
      }
      
}
