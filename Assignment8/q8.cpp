#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a;
    long b;
    char c;
    float d;
    double e;
    
    /*cin>>a>>b>>c>>d>>e;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<e<<endl;*/
    
    
    scanf("%d",&a);
    scanf("%ld",&b);
    scanf("%c" ,&c);
    scanf("%f",&d);
     scanf("%lf" ,&e);
    
    printf("%d\n",a);
    printf("%ld\n" ,b);
    printf("%c\n" ,c);
    printf("%f\n" ,d);
    printf("%lf",e);
    return 0;
}