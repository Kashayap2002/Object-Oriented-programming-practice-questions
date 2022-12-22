//Write a menu driven program to read, display, simplify,add and substract two rational number:
 
#include <iostream>
using namespace std;
class numbers 
{
    float num1, num2;
    public:
        void read() 
        {
            cout << "\nEnter 2 rational numbers : ";
            cin >> num1 >> num2;
        }
        void display() {
            cout << "\nThe two numbers are " << num1 << " and " << num2;
        }
        friend float add(numbers);
        friend float subtract(numbers);
};
float add(numbers n1)
{
    return n1.num1 + n1.num2;
}
float subtract(numbers n1)
{
    return n1.num1 - n1.num2;
}
int main()
{
    numbers n1;
    n1.read();

    int ch;
    cout << "\nPress 1 to add numbers";
    cout << "\nPress 2 to subtract numbers";
    cout << "\nPress 3 to display numbers entered";
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