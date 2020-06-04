#include <iostream>
using namespace std;

int main()
{
    //code
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n][n];
        int b[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
                b[i][j] = a[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                b[n - j - 1][i] = a[i][j];
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << b[i][j] << " ";
                //b[i][j]=a[n-j][i];
            }
            cout << "\n";
        }
    }
    return 0;
}