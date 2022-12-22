#include <iostream>
using namespace std;

int main()
{
    int y;
    cout<<"Enter the year";
    cin>>y;

    if(y%4==0)
    cout<<"year is leap year";

    else if(y%400==0)
    cout<<"year is leap year";

    else if(y%100==0)
    cout<<"Not a leap year";

    else
    cout<<"Not a leap year";

     return 0;
}
