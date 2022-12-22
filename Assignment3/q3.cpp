//Write a program input a binary number and convert it into decimal number.
#include <iostream>
#include <math.h>
using namespace std;

int main()
{   
    int n,i=0,decimal=0,rem;
    cout<<"Enter any binary number:";
    cin>>n;

    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        decimal= decimal+ rem* pow(2,i);
        i++;
    }
    cout<<"Decimal of the entered binary number:"<<decimal;
    return 0;
}