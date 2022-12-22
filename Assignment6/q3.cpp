//write a menu driven program to read ,display,add and substract two complex numbers:
#include <iostream>
using namespace std;
class complex 
{
        float real, img;
    public:
        void read() 
		{
            cout << "\nEnter the real and imaginary part : ";
            cin >> real >> img;
        }
        void display() 
		{
            cout << "\nThe complex no entered is " << real << " + " << img <<"i"<<endl;
        }
        friend void add(complex , complex);
        friend void subtract(complex, complex);
};
void add(complex c1, complex c2)
{
    cout << "\n addition  = " << c1.real + c2.real << " + " << c1.img + c2.img <<"i";
}
void subtract(complex c1, complex c2)
{
    cout << "\n substraction = " << c1.real - c2.real << " + " << c1.img - c2.img <<"i";
}
int main()
{
    complex c1,c2;
    c1.read();
    c2.read();
    
    int ch;
    cout << "\nPress 1 to add";
    cout << "\nPress 2 to subtract ";
    cout << "\nPress 3 to display ";
    cout << "\n\n Enter your choice : ";
    cin >> ch;
    switch (ch)
    {
    case 1:
        add(c1,c2);
        break;
    case 2:
        subtract(c1,c2);
        break;
    case 3:
        c1.display();
        c2.display();
        break;
    default:
        break;
    }
    return 0;
}
