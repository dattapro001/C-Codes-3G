#include<iostream>

using namespace std;
int main()
{
    int a,b;
    cout<<"Enter 1st Number: ";
    cin>>a;
    cout<<"Enter 2nd Number: ";
    cin>>b;
    int ab=(a,b);
    int GCD=1;
    for(int i=1;i<=ab;i++)
    {
        if(a%i==0 && b%i==0)
        {
            GCD=max(GCD,i);
        }
    }
    cout<<"Greatest common divis is: "<<GCD;
     return 0;
    }
