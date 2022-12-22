#include <stdio.h>
int main()
{
    int a,b=0, remainder;
    printf("Enter the number:");
    scanf("%d",&a);

    while(a>0)
    {
        remainder= a%10;
        b /*reverse */= b*10+remainder;
        a=a/10;
        

    }
    printf("%d",b);
}