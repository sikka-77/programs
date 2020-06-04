#include <bits/stdc++.h>
using namespace std;



int binSearch(int a[], int low, int high, int num)
{
    int mid;
    while (low < high)
    {
        mid = (low + high) / 2;

        if (num == a[mid])
        {
            return 1;
        }
        else if (num > a[mid])
        {
            low = mid + 1;
        }
        else if (num < a[mid])
        {
            high = mid;
        }
    }
    return 0;
}
int main()
{
    //code
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        int m;
        cin >> n >> m;
        int a[n];
        int b[m];
        int flag = 0;
        for (int k = 0; k < n; k++)
        {
            cin >> a[k];
        }
        for (int l = 0; l < m; l++)
        {
            cin >> b[l];
        }
        sort(a,a+n);

        for (int i = 0; i < m; i++)
        {

            if (binSearch(a, 0, n, b[i]))
            {
                flag = 0;
            }
            else
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}