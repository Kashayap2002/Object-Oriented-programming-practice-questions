#include <iostream>
using namespace std;

int main()
{
    int i,rem,p=1;
    cout<<"Enter the number:";
    cin>>i;

    while(i!=0)
    {
        rem=i%10;
        p=p*rem;
        i=i/10;

    }
    cout<<"product= "<<p;
    return 0;

}
