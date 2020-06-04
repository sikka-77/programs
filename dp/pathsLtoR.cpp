//paths from lefttop cell to bottom right corner

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cout << "enter dimensions of matrix : ";
    cin >> m >> n;
    int ans[m][n];
    for (int i = 0; i < m; i++)
    {
        ans[i][0] = 1;
    }
    for (int j = 0; j < n; j++)
    {
        ans[0][j] = 1;
    }
    for (int k = 1; k < m; k++)
    {
        for (int l = 1; l < n; l++)
        {
            ans[k][l] = ans[k - 1][l] + ans[k][l - 1];
        }
    }
    cout << "number of paths : " << ans[m - 1][n - 1];
}