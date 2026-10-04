#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int main()
{ 
 int z, s;
 cout<<"Введіть значення s: ";
 cin>>s;
 cout<<"Введітть z: ";
 cin>>z;
 int M = 2*s + pow(z, 2) - 5 * z;
 cout<<"Результат: "<<M;
 return 0;
}
