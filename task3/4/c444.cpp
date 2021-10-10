#include <iostream>

using namespace std;
struct student
{
       char name;
       int roll;
       char address;
       int age;
};
struct student even(struct student wave[])
{

    int i;
    for(i=0;i<13;i++)
    {
        if(wave[i].roll%2==0)
        {
            cout<<wave[i].name;
        }
    }
    return wave[i];
};
struct student AGE(struct student wave[])
{
     int i;
         cout<<"\nEnter the age:";
         cin>>wave[i].age;
         for( i=0;i<13;i++)
            {
                if(wave[i].age==14)
      {
       cout<< wave[i].name<<endl;
      }
      }
        return wave[i];
};
struct student information(struct student wave[])
{
    int i=0;
    cout<<"Enter the roll:";
    if(cin>>i)
    {
       cout<< "name:"<<wave[i].name;
              cout<<"\n roll:"<< wave[i].roll;
              cout<<"\n address:"<<wave[i].address;
    }
      return wave[i];
};
int main(int argc, char *argv[])
{
struct student wave[5];
int i=1;
 cout<<"Enter total 13 student information\n";
    for(int i=0;i<=13;i++)
    {
        cout<<"Enter the name of student"<<i+1<<":";
        cin>>wave[i].name;
        cout<<"Enter Roll number:";
        cin>>wave[i].roll;
        cout<<"Enter the age:";
        cin>>wave[i].age;
        cout<<"Enter the address:";
        cin>>wave[i].address;
        }
         cout<<"\nThe students having even roll numbers are\n"<<endl;
              even(wave);

              cout<<"\nEnter the age for see the student name:\n";
              AGE(wave);

              cout<<"Enter the roll number of a student to see details\n";
              information(wave);
}
