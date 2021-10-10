
#include<iostream>
using namespace std;
int main ()
{
    int a[10], n, i, j, x;
    cout << "Enter size of array : ";
    cin >> n;
    cout << "Enter elements of array : ";
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                x = a[i];
                a[i] = a[j];
                a[j] = x;
            }
        }
    }
    cout << "Second largest number : " << a[1];
    cout << "\nSecond smallest number : " << a[n - 2];
    return 0;
}
