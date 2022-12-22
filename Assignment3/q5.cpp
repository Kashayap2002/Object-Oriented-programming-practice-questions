//Write a program input a number then find out average of even and odd digit
#include <iostream>
using namespace std;

int main()
{
    int r,i,rem,sum=0,add=0,even=0,odd=0,Eavg,avg;

    
    cout<<"Enter the  number:";
    cin>>i;

    while(i!=0)
    {
        rem=i%10;
        if(rem%2==0)
        {
            sum=rem+sum;
            even++;
        }
        else 
        {
            add=add+rem;
            odd++;
        }
        i=i/10;
    }

    Eavg=sum/even;
    avg=add/odd;
    cout<<"Sum of even digits="<<sum<<endl;
    cout<<"Sum of odd digits="<<add<<endl;
    cout<<"Number of even digits ="<<even<<endl;
    cout<<"Number of odd digits ="<<odd<<endl;
    cout<<"Average of even digits="<<Eavg<<endl;
    cout<<"Average of odd digits ="<<avg<<endl;
    return 0;

}