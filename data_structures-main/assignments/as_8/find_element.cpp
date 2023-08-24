#include<iostream>
using namespace std;

template<typename T,int N>

void smllst(T(&arr)[N])
  {
    T smallest=arr[0];
    int index=0;
    for (int i=1;i<N;i++)
      {
        if(smallest>arr[i])
          {
            smallest=arr[i];
            index =i;
          }
        else if(smallest<arr[i])
          {
            smallest=arr[i-1];
            index=i-1;
          }
      }
    cout<<"The smallest element in the array is: "<<arr[index]<<endl;
  }



int main()
  {
    int arr1[4] = {7, 3, 5, 1};
    double arr2[3] = {7.5, 6.1, 4.6};
    char arr3[5]={'a','b','B','A','d'};

    smllst(arr1);
    smllst(arr2);
    smllst(arr3);



  return 0;
  }
