
#include <iostream>
using namespace std;

int main()
{
    int arr[100], number,Unique;
    int i, j, k;


    cout<<"Enter size of array: ";
    cin>>number;


    cout<<"Enter elements in array: ";
    for(i=0; i<number; i++)
    {
        cin>>arr[i];
    }


    for(i=0; i<number; i++)
    {

        Unique = 1;

        for(j=i+1; j<number; j++)
        {



            if(arr[i]==arr[j])
            {

                for(k=j; k<number-1; k++)
                {
                    arr[k] = arr[k+1];
                }

                number--;
                j--;
                Unique = 0;
            }
        }

        if(Unique != 1)
        {
            for(j=i; j<number-1; j++)
            {
                arr[j] = arr[j+1];
            }

            number--;
            i--;
        }
    }
    cout<<"All unique elements in the array are: ";
    for(i=0; i<number; i++)
    {
       cout<<arr[i]<<"\t";
    }
    return 0;
}
