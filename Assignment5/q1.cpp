#include<iostream>
using namespace std;
class student
{
    private:
    string name;
    int roll;;
    public: 
    void getdata()
    {

        cout<<"Enter name of the student: "<<endl;
        cin>>name;
        cout<<"Enter roll number: ";
        cin>>roll;
        cout<<"Displaying Information:"<<endl;
        cout<<"name:"<<name<<endl;
        cout<<"roll:"<<roll;
    }
};
int main()
{
    student st1;
    st1.getdata();
    return 0;
}