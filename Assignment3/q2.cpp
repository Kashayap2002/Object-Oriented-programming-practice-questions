//2. Write a program input a number then find out the prime factor 
#include <iostream>
using namespace std;

int main()
{  int n,a,i; 
   cout<<"Enter any number:";
   cin>>n;

   if(n>0)
   {
     while(n%2==0)
     cout<<"2";
     n=n/2;
   }
    
    for (i = 3; i <= sqrt(n); i+= 2) 
        { 
            while (n%i == 0) 
            { 
                printf("%d ",i); 
                n = n/i; 
            } 
        } 
    return 0;
}