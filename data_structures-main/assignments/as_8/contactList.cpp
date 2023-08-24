//application file
#include <iostream>
#include "intSLList.h"
using namespace std;


int main()
{

cout<<"List 1 is: ";
cout<<endl;

IntSLList list1;
list1.addToHead(25);
list1.addToTail(50);
list1.addToTail(60);
list1.printAll();

cout<<endl;
cout<<"List 2 is: "<<endl;

IntSLList list2;
list2.addToHead(40);
list2.addToTail(50);
list2.addToTail(20);
list2.printAll();
cout<<"the lists connected is:  ";

IntSLList x = list2;
cout<<endl;

list1.concactList(x);
list1.printAll();

return 0;
}
