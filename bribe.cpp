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
        int bribe = 0;
        for (int j = 1; j <= n; j++)
        {
            cin >> a[j];
        }

        int flag = 0;
        int diff = 0;
        for (int i = 1; i <= n; i++)
        {
            diff = a[i] - i;
            if (diff > 2)
            {
                cout << "Too chaotic" << endl;
                flag = 1;
            }

                        if (a[i] != i && a[i] > i)
            {
                bribe = bribe + diff;
            }
        }
        if (flag == 0)
            cout << bribe << endl;
    }
}