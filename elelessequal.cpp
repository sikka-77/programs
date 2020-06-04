#include <bits/stdc++.h>
using namespace std;

int binSearch(int a[], int low, int high, int num)
{
    int mid;

    while (low < high)
    {
        //mid = low + (high - low + 1) / 2;
        mid = (low + high) / 2;
        if (a[mid] <= num)
        {
            cout << "hi";
            low = mid;
        }

        else
        {
            high = mid - 1;
        }
    }
    if (a[low] <= num)
    {
        return low;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int m, n;
    cin >> m >> n;
    int a[m];
    int b[n];
    int ans[m];
    int val;
    int i;
    for (i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    sort(b, b + n);

    for (i = 0; i < m; i++)
    {

        val = binSearch(b, 0, n, a[i]);
        if (val)
        {
            ans[i] = val + 1;
        }
        else
        {
            ans[i] = 0;
        }
    }

    for (int j = 0; j < m; j++)
    {
        cout << ans[j] << endl;
    }
}