#include <iostream>

using namespace std;
int  main()
{
int i,j,n,l,p[25];
cout<<"Enter the Number:";
cin>>n;
for(i=0;i<n;i++)
{
cout<<"Enter the Number of element Of Array=";
cin>>p[i];
}
j=i-1;
for(i=0;i<j;i++)
{
l=p[i];
p[i]=p[j];
p[j]=l;
j--;
}
cout<<"\n After Reverse of array elements:";
for(i=0;i<n;i++)
{
cout<<"\t"<<p[i];

}
}
