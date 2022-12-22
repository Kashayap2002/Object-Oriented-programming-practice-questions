//WAP using employee with members name, emp. no., dept and salary. 
#include <iostream>
using namespace std;
class employee
{   
    private:

    int number;
    char name[30];
    int salary;
    char dept[30];

    public: 
    void getdata();
    void putdata();
};
void employee :: getdata()
{
    cout<<"Enter name:";
    cin>>name;
    cout<<"Employee number:";
    cin>>number;
    cout<<"salary:";
    cin>>salary;
    cout<<"Dept:";
    cin>>dept;

}

void employee :: putdata()
{
    cout<<"name:"<<name<<endl;
    cout<<"Employee number:"<<number<<endl;
    cout<<"salary:"<<salary<<endl;
    cout<<"Dept:"<<dept<<endl;

}

int main()

{   int i;
    int size =3;
   
   employee employee[size];
   for(i=0;i<(size);i++)
   {
     cout<<"\n Employee"<<i+1<<endl;
     employee[i].getdata();
   }
    employee employee[size];
    {
    
        cout<<"\n Employee "<<i+1<<endl;
        employee[i].putdata();

    }
    return 0;
}