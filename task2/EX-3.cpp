#include <iostream>

using namespace std;
int  main()
{
    int number;
    int n;
    int sum=0;
    cout<<"How many number do you want to add:";
    cin>>n;
    cout<<"Enter the number:";
    while(n>0)
    {
        cin>>number;
        sum+=number;
        n--;
    }
    cout<<"\nSum value is="<<sum<<endl;
    return 0;
}
