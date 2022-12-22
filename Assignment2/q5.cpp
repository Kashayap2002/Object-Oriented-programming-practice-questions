#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float a,b,c,s,k,area;
    cout<<"Enter the three sides of a triangle:";
    cin>>a>>b>>c;

    s = (a+b+c)/(2);
    k=(s)*(s-a)*(s-b)*(s-c);
    area= sqrt(k);
    cout<<"Area of trianle:"<< area;
    return 0; 

}
