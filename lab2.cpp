#include <iostream>
using namespace std;
int main() {
    int yearOld, weightPt, birthYear, weightGr;
    cout<<"Enter birth year: ";
    cin>>birthYear;
    cout<<"Enter weight in Grams: ";
    cin>>weightGr;
    yearOld = 2010 - birthYear;
    weightPt = weightGr / 454;
    cout<<"Age in 2010: "<<yearOld<<" years"<<endl;
    cout<<"Weight in pounds: "<<weightPt<<" pounds"<<endl;
    return 0;
}