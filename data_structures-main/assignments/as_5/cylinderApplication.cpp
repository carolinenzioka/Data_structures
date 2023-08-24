#include "cylinder.h"


int main()
{

double rad,h;

cout << "Enter a radius: " << endl;
cin >> rad;
cout<< "Enter the heigt: "<<endl;
cin>> h;

Circle cl;
cl.set_radius(rad);
Cylinder cl2(h);
cout<<"the surface area is:" <<cl2.get_sarea(rad)<<endl;
cout<<"the volume is: "<<cl2.get_vol(rad)<<endl;

return 0;
}
