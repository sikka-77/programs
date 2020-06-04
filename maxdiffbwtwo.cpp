#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int t;
    cin >> t;
    int ans[t];
    int len = t;
    int v = 0;
    while (t--)
    {
        cin >> n;
        int a[n];
        //cout << "enter elemnts : ";
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int maxDiff = a[1] - a[0];
        int min_element = a[0];
        int diff = 0;
        for (int k = 1; k < n; k++)
        {
            diff = a[k] - min_element;
            if (diff > maxDiff)
            {
                maxDiff = diff;
            }
            if (a[k] < min_element)
            {
                min_element = a[k];
            }
        }
        //cout << "end";
        ans[v++] = maxDiff;
        // cout << "v = " << v;
    }

    for (int m = 0; m < len; m++)
    {
        cout << ans[m] << endl;
    }
}