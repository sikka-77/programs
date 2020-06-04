#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int max = -9999;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] > max)
            {
                max = a[i];
            }
        }

        int b[max] = {0};

        for (int i = 0; i < n; i++)
        {
            if (a[i] > 0)
            {
                b[a[i]] = 1;
            }
        }

        for (int i = 1; i < max; i++)
        {
            if (b[i] == 0)
            {
                cout << i << endl;
                break;
            }
        }
    }
}