#include <iostream>

using namespace std;
#define PI 3.1416
int circle()
{
    int radius;
    cout<<"Enter the radius:";
    cin>>radius;
    cout<<2*PI*radius;
}
int main()
{
    circle();
}
