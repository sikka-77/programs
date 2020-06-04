#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int a[m][n];
    int count[m] = {0};
    cout << "enter elements : ";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 1)
            {
                cout << "increasing for i = " << i << "\n";
                count[i] = count[i] + 1;
            }
        }
    }
    int max = count[0];
    for (int k = 0; k < m; k++)
    {
        if (count[k] > max)
        {
            max = k;
        }
    }
    cout << "max ones are in row : " << max;
    for (int l = 0; l < m; l++)
    {
        cout << "\n"
             << count[l];
    }
}