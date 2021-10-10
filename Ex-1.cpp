#include <iostream>

using namespace std;
sum()
{
    int a,b;
    cout<<"Enter 1st number:";
    cin>>a;
    cout<<"Enter 2nd number:";
    cin>>b;
    cout<<"The sum: "<<a+b<<endl;
    }
    subtraction()
    {
       int a,b;
    cout<<"Enter 1st number:";
    cin>>a;
    cout<<"Enter 2nd number:";
    cin>>b;
    cout<<"The Subtraction: "<<a-b<<endl;
    }
    multiply()
    {
         int a,b;
    cout<<"Enter 1st number:";
    cin>>a;
    cout<<"Enter 2nd number:";
    cin>>b;
    cout<<"The multiply: "<<a*b<<endl;
    }
    divide()
    {
         int a,b;
    cout<<"Enter 1st number:";
    cin>>a;
    cout<<"Enter 2nd number:";
    cin>>b;
    cout<<"The Divide: "<<a/b<<endl;
    }
    modulas()
    {
         int a,b;
    cout<<"Enter 1st number:";
    cin>>a;
    cout<<"Enter 2nd number:";
    cin>>b;
    cout<<"The Modulas: "<<a%b<<endl;
    }
int main()
    {
        int a,b,pt;
        cout<<"Enter 1 for Sum\n";
        cout<<"Enter 2 for Subtraction\n";
        cout<<"Enter 3 for Multiply\n";
        cout<<"Enter 4 for Divide\n";
        cout<<"Enter 5 for Modulas\n";
        cin>>pt;
        switch(pt)
        {
        case 1:
            sum();
            break;
        case 2:
            subtraction();
            break;
        case 3:
            multiply();
            break;
        case 4:
            divide();
            break;
        case 5:
            modulas();
            break;
        }
    }


