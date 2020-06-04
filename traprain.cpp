#include <bits/stdc++.h>
using namespace std;

int rain(int a[], int n)
{
    int right[n];
    int left[n];
    right[n - 1] = a[n - 1];
    left[0] = a[0];
    for (int i = n - 2; i >= 0; i--)
    {
        right[i] = max(right[i + 1], a[i]);
    }
    for (int i = 1; i < n; i++)
    {
        left[i] = max(left[i - 1], a[i]);
    }

    int temp = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        temp = min(left[i], right[i]);
        //cout << temp << endl;
        sum = sum + (temp - a[i]);
    }
    return sum;
}

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
        int water = rain(a, n);

        cout << water << endl;
    }
}