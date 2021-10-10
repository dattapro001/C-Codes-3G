#include<iostream>
using namespace std;
struct information
{
 char name[20];
 int ID;
 char address[50];
 float mark;
};
int main()
{
    information i;
    int icon,wave;
    cout<<"Enter the total number of student:";
    cin>>wave;
    for(icon=0;icon<wave;icon++)
    {
 cout<<"Student Single name: ";
 cin>>i.name;
 cout<<"student ID: ";
 cin>>i.ID;
 cout<<"Student Address: ";
 cin>>i.address;
 cout<<"Student mark: ";
 cin>>i.mark;
    }
for(icon=0;icon<wave;icon++)
{
cout<<"\n";
cout<<"\n";
cout<<"\n";
 cout<<"STUDENT INFORMATION\n";
 cout<<"Name:"<<i.name;
 cout<<"\nID:"<<i.ID;
 cout<<"\nADRESS:"<<i.address;
 cout<<"\nMARK:"<<i.mark;
}

}
