#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum;
        cin >> n >> sum;
        int a[n];
        int cursum = 0;
        int i, j;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        i = 0;
        j = 0;
        int flag = 0;
        cursum = cursum + a[i];
        while (j < n)
        {
            if (cursum == sum)
            {
                flag = 1;
                cout << i + 1 << " " << j + 1 << endl;
                break;
            }
            else if (cursum < sum)
            {
                j++;
                cursum = cursum + a[j];
            }
            else
            {
                cursum = cursum - a[i];
                i++;
            }
        }
        if (flag == 0)
        {
            cout << "-1" << endl;
        }
    }
}