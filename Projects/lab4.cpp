#include <iostream>
using namespace std;
int main() {
    int i, y, a, p;
    double x;
    cout<<"Enter a: ";
    cin>>a;
    i = 0;
    p = 0;
    for (x = 0; x <= 1; x += 0.1) {
        y = a * pow(x, 2) + 0.5;
        cout<<"x = "<<x<<", y = "<<y<<endl;
        if (x == 0 || abs(x - 1.0) < 0.000001) {
            p = p + y;
            cout<<p<<endl;
        }
        i++;
    }
    cout<<"Sum of y values at x = 0 and x = 1: "<<p<<endl;
    cout<<"Number of iterations: "<<i<<endl;
    
    return 0;
}