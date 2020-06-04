#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int j;
    int step;
    j = 0;
    step = 0;

    while (j < n)
    {
        if (a[j + 2] == 0)
        {
            j = j + 2;
            step = step + 1;

            cout << " j is : " << j << " and step is : " << step << endl;
        }
        else
        {
            j = j + 1;
            step = step + 1;
            cout << " j is : " << j << " and step is : " << step << endl;
        }
        if (j + 1 == n)
        {
            step = step + 1;
            break;
        }
    }
    cout << step << endl;
}