#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int a[7] = {10, 20, 15, 2, 23, 90, 67};
    n = 7;
    int peak;
    for (int i = 0; i < n; i++)
    {
        if (a[i - 1] < a[i] && a[i + 1] < a[i])
        {
            peak = a[i];
            cout << peak << endl;
        }
    }
}