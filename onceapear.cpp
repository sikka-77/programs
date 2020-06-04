#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "enter size of aray : ";
    cin >> n;
    int a[n];
    cout << "enter elemts : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int m = 0, p = n - 1;
    while (m < n)
    {
        if (a[m] == a[m + 1] && a[p] == a[p - 1])
        {
            m = m + 2;
            p = p - 2;
        }
        else
        {
            if (a[m] != a[m + 1])
            {
                cout << a[m];
                break;
            }
            if (a[p] != a[p - 1])
            {
                cout << a[p];
                break;
            }
        }
    }
}