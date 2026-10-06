#include <iostream>
using namespace std;
int const year = 2010;
int const pound = 454;
int main() {
    int yearOld, weightPt, birthYear, weightGr;
    cout<<"Enter birth year: ";
    cin>>birthYear;
    cout<<"Enter weight in Grams: ";
    cin>>weightGr;
    yearOld = year - birthYear;
    weightPt = weightGr / pound;
    cout<<"Age in 2010: "<<yearOld<<" years"<<endl;
    cout<<"Weight in pounds: "<<weightPt<<" pounds"<<endl;
    return 0;
}