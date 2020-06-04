#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "enter size of matrix";
    cin >> n;
    int sum1 = 0;
    int sum2 = 0;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            if (i == j)
            {
                sum1 = sum1 + a[i][j];
            }
            else if (j == (n - 1) - i)
            {
                sum2 = sum2 + a[i][j];
            }
        }
    }
    cout << "sum is" << sum1 - sum2;
}