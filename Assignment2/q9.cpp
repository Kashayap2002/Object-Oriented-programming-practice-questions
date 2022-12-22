#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float a,b,c,D,root1,root2,real,imaginary;
    cout<<"Quadratic equation are usually of the form (ax^2+bx+c). Enter the value of a,b and c."<<endl;
    cin>>a>>b>>c;
    cout<<"We have to find out the roots other given quadratic equation:"<<a<<"x^2"<<"+"<<b<<"x+"<<c<<endl;
    D=(b*b)-(4*a*c);
    cout<<"discriminant = "<<D<<endl;

    if(D>0)
    {
        root1 = (-b + sqrt(D)) / (2*a);
        root2 = (-b - sqrt(D)) / (2*a);
        cout<<"Roots of the entered quadratic equations are:\n"<<root1<<"and"<<root2;
    }
    else if(D==0)
    {
        root1 = (-b) / (2*a);
        root2 = (-b) / (2*a);
        cout<<"Roots of the entered quadratic equations are:\n"<<root1<<"and"<<root2;
    }
    
    else 
    {
        real = -b/(2*a);
        imaginary =(sqrt(-D))/(2*a);

        cout << "Roots of the entered quadratic equations are:\n" << real << "+" << imaginary << "i"  << " and " << real << "-" << imaginary << "i" << endl;
    }
    
    return 0;
}


