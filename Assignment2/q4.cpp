#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter any two numbers:";
    cin>>a>>b;

    c=a;
    a=b;
    b=c;

    cout<<"swapped numbers are:"<<a <<endl <<b;
    return 0;
}