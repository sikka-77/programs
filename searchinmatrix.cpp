#include <bits/stdc++.h>
using namespace std;

int binSearch(int a[], int low, int high, int num)
{
    int mid;
    while (low < high)
    {
        mid = (low + high) / 2;

        if (a[mid] == num)
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
    int t;
    cin >> t;
    while (t--)
    {
        int len;
        cin >> len;
        int a[len];
        int n;
        for (int k = 0; k < len; k++)
        {
            cin >> a[k];
        }
        cin >> n;
        int number;

        for (int i = 0; i < len; i++)
        {
            number = n - a[i];
            if (binSearch(a, i + 1, len, number))
            {

                cout << a[i] << " " << number << endl;
            }
        }
    }
}