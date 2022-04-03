#include<iostream>
#include<string>
#include <iomanip>
using namespace std;
int main(){
    int a;
    long int b;
    char c;
    float f;
    double d;
    cin>>a>>b>>c>>f>>d;
    cout<<a << endl;
    cout <<b << endl; 
    cout << c << endl;
    cout << fixed << showpoint;
    cout << setprecision(3);
    cout << f << endl;
    cout << fixed << showpoint;
    cout << setprecision(9);
    cout << d << endl;
    return 0;
}
