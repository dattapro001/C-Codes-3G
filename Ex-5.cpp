#include<iostream>

using namespace std;
int name(string str)
{
    int a=str.length();
    int sum=0;
    for(int i=0; i<a; i++)
    sum=sum+(str[i]-'0');
    return (sum%3==0);
}
int main()
{
    int a;
    string str=" ";
    cout<<"Enter the string:";
    cin>>a;
    name(str)? cout<<"Yes" : cout<<"No";
    return 0;

}
