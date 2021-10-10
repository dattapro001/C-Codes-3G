#include<iostream>

using namespace std;
int recursion(int n);
int main()
{
    int n;
    cout<<("Enter a positive integer: ");
    cin>>n;
    cout<<"Sum = "<<recursion(n);
    return 0;
}
int recursion(int n)
{
    if(n!=0)
        return n + recursion(n-1);
    else
        return n;
}
