#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int main()
{ 
 int z, s;
 cout<<"Enter s: ";
 cin>>s;
 cout<<"Enter z: ";
 cin>>z;
 int M = 2*s + pow(z, 2) - 5 * z;
 cout<<"M = "<<M<<endl; 
 return 0;
}
