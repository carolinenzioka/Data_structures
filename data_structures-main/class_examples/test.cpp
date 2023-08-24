#include <iostream>
using namespace std;


 int fun(int n)
  {
    if (n<10)
      {
        cout<< n;
      }
    else
    {
        cout<<(n%10);
        return fun(n/10);
    }
  }

int main()
{
  int array[5]= {5,10,15,20,25};
  cout<< *array +2<< endl;//7
  cout<< *(array+2)<<endl;//15
  fun(164);
  cout<<endl;
}
