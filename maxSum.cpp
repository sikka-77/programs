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

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int max = 0;
        int cur_max = 0;

        for (int i = 0; i < n; i++)
        {
            cur_max = cur_max + a[i];

            if (cur_max < 0)
            {
                cur_max = 0;
            }

            else if (max < cur_max)
            {
                max = cur_max;
            }
        }

        cout << max << endl;
    }
}