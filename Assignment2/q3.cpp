#include <iostream>
using namespace std;

int main()
{
    int a,f=1,i;
    cout<<"Enter any number:";
    cin >> a;

    for( i = 1; i <= a; i++)
    {
        f = f*i;
    }   
    cout << "Factorial of " << a << " = " << f;
    return 0;
}