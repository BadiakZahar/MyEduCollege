#include <iostream>
#include <conio.h>
#include <string>
#include <string_view>
using namespace std;
int main() {
    int z, s, Sum, TaxSum, workType;
    cout<<"Enter s: ";
    cin>>s;
    cout<<"Enter z: ";
    cin>>z;
    int M = 2*s + pow(z, 2) - 5 * z;
    cout<<"Enter type of work(P1=1 or P2=2 or P3=3): ";
    cin>>workType;
    switch(workType) {
        case 1:
            Sum = 50*(M + 100);
            TaxSum = Sum * 0.10;
            cout<<"Sum = "<<Sum<<endl;
            cout<<"Tax Sum = "<<TaxSum<<endl;
            cout<<"Total Sum = "<<Sum - TaxSum<<endl;
            break;
        case 2:
            Sum = 100*(M + 120);
            TaxSum = Sum * 0.15;
            cout<<"Sum = "<<Sum<<endl;
            cout<<"Tax Sum = "<<TaxSum<<endl;
            cout<<"Total Sum = "<<Sum - TaxSum<<endl;
            break;
        case 3:
            Sum = 155*(M + 180);
            TaxSum = Sum * 0.20;
            cout<<"Sum = "<<Sum<<endl;
            cout<<"Tax Sum = "<<TaxSum<<endl;
            cout<<"Total Sum = "<<Sum - TaxSum<<endl;
            break;
        default:
            cout<<"Invalid work type!"<<endl;
    }
}