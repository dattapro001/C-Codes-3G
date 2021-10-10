
#include <iostream>
using namespace std;
int main()
{
 int number[50],number1[100];
 int n;
 int i,j;

 cout<<"how many Number You Want to copy: "<<endl;
 cin>>n;

 cout<<" Enter number:"<<endl;


 for(i=0;i<n;i++)
 {
 cin>>number[i];
 }
 for(i=0;i<n;i++)
 {
 number1[i]=number[i];
 }
 cout<<"copied array "<<endl;
 for(i=0;i<n;i++)

 cout<<number1[i]<<endl;

}
