//Write a menu driven program to read, display, add and subtract two distances
#include <iostream>
using namespace std;
class distances
{
        float num1, num2;
    public:
        void read() 
		{
            cout << "\nEnter 2 distances : ";
            cin >> num1 >> num2;
        }
        void display() 
		{
            cout << "\nThe 2 distances are " << num1 << " and " << num2;
        }
        friend float add(distances);
        friend float subtract(distances);
};
float add(distances n1)
{
    return n1.num1 + n1.num2;
}
float subtract(distances n1)
{
    return n1.num1 - n1.num2;
}
int main()
{
    distances n1;
    n1.read();

    int ch;
    cout << "\nPress 1 to add";
    cout << "\nPress 2 to subtract";
    cout << "\nPress 3 to display distances";
    cout << "\n\n Enter your choice : ";
    cin >> ch;
    switch (ch)
    {
    case 1:
        cout << "\nAddition  : " << add(n1);
        break;
    case 2:
        cout << "\nSubtraction  : " << subtract(n1);
        break;
    case 3:
        n1.display();
        break;
    default:
        break;
    }

    return 0;
}
