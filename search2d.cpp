#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int m, n;
    cin >> n >> m;
    int a[n][m];
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int x;
    cin >> x;

    i = 0;
    j = 0;

    i = 0;
    j = n - 1;
    int flag = 0;
    while (i < n && j > 0)
    {
        if (a[i][j] == x)
        {
            flag = 1;
            break;
        }
        if (a[i][j] > x)
        {
            j--;
        }
        else if (a[i][j] < x)
        {
            i++;
        }
    }
    if (flag == 1)
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "0" << endl;
    }
}
