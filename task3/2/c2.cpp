#include<iostream>
using namespace std;
int main()
{
	int wave[50],nova,i,java,bubble;
	cout<<"How many number of array:";
	cin>>nova;
	cout<<"Enter the bubble sort element:";

	for(i=0;i<nova;i++)
		cin>>wave[i];
     for(i=1;i<nova;i++)
	{
		for(java=0;java<(nova-i);java++)
			if(wave[java]>wave[java+1])
			{
				bubble=wave[java];
				wave[java]=wave[java+1];
				wave[java+1]=bubble;
			}
	}
     cout<<"Array in Ascending way:";
	for(i=0;i<nova;i++)
		cout<<" "<<wave[i];

	return 0;
}
