#include<iostream>
using namespace std;
struct student
{
     int rno;
     char name[20];
     int marks[3];
     int total;
     float avg;
}stud[2];
int main()
{
     int i,j;
     struct student s;
     for(i=0;i<2;i++)
     {
          
          cout<<"Enter Roll-No. : ";
          cin>>stud[i].rno;
          cout<<"Enter Name     : ";
          cin>>stud[i].name;
          stud[i].total=0;
          for(j=0;j<3;j++)
          {
               cout<<"Enter Marks of Subject :",j+1;
               cin>>stud[i].marks[j];
               stud[i].total=stud[i].total+stud[i].marks[j] ;
               stud[i].avg=stud[i].total/3.0;
          
     }
     for(i=0;i<2;i++)
     {
          for(j=i+1;j<2;j++)
          {
               if(stud[i].total<stud[j].total)
               {
                    s=stud[i];
                    stud[i]=stud[j];
                    stud[j]=s;
               }
          }
     }
     cout<<"Records in Descending Order.\n";
     
     cout<<"\n ROLLNO   NAME  TOTAL-MARKS  AVG\n";
     for(i=0;i<2;i++)
     {
          cout<<"\n\t\t\t",stud[i].rno,stud[i].name,stud[i].total,stud[i].avg;
     }
     return 0;
}
