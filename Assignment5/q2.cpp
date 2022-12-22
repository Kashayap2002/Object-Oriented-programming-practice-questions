#include<iostream>
using namespace std;
class student
{
    public: 
    char name[60];
        int roll;
    void getdata();
    
};
void student :: getdata()
    {
        
        cout<<"Enter name of the student: "<<endl;
        cin>> name;
        cout<<"Enter roll number: ";
        
        cin>>roll;
        cout<<name<<endl;
        cout<<roll;
    
    }
int main()
{
    student st1;
    st1.getdata();
    return 0;
}