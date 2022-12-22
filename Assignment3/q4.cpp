//Write a program input a number then print the multiplication series.
#include <iostream>
using namespace std;

int main()
{
    int n,i,rem,count;
    cout<<"Enter the number:";
    cin>>n;
    for(int i=1;i<=10;i++)
    {
        cout<<n<<"x"<<i<<"="<<n*i<<endl;
    }
    
    
    return 0;

}
