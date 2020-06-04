#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << " enter number of elements in array : ";

    cin >> n;

    //cin >> n;
    int a[n];
    cout << "enter array elements : ";

    int odd[n];
    int even[n];
    int j = 0;
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
        {
            even[j] = a[i];
            j++;
        }
        if (a[i] % 2 != 0)
        {
            odd[k] = a[i];
            k++;
        }
    }

    cout << "odd elements are : " << endl;
    for (int b = 0; b < k; b++)
    {
        cout << odd[b] << " ";
    }
    cout << "\n";
    cout << "even elements are : " << endl;
    for (int m = 0; m < j; m++)
    {
        cout << even[m] << " ";
    }
}