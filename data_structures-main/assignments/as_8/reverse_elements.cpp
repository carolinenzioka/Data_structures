#include<iostream>
using namespace std;

template<typename T,int N>

void print(T (&array)[N])
  {
    for (int i = 0; i < N ; i++)
      {
        cout << array[i] << " ";
      }
    cout << endl;
  }

template<typename K,int N>

  void swap(K (&array)[N],int ind1,int ind2)
    {
      K temp=array[ind1];
      array[ind1]=array[ind2];
      array[ind2]=temp;

    }


 template<typename K,int N>
 void reverse(K (&array)[N])
{
  cout<<"This is the array before swap: "<<endl;
  print(array);
  int lastnum= N-1;
  for(int index=0;index<N/2;index++)
    {
      swap(array,index,lastnum);
      lastnum--;
    }
    cout<<"This is the new array: "<<endl;
    print(array);
}



int main()
  {

    int arr1[4] = {7, 3, 5, 1};
    double arr2[3] = {7.5, 6.1, 4.6};
    char arr3[5]={'a','b','B','A','d'};
    string arr4[4]={"cat","dog","bear","fish"};


    reverse(arr1);
    cout<<endl;
    reverse(arr2);
    cout<<endl;
    reverse(arr3);
    reverse(arr4);


  }
