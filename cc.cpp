#include <iostream>
using namespace std;

int binSearch(int a[], int low, int high, int x)
{
    int mid;
    while (low < high)
    {
        mid = low + (high - low) / 2;

        if (a[mid] == x)
        {
            return mid;
        }
        else if (a[mid] > x)
        {
            high = mid;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    //code
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
        int x;
        cin >> x;
        int ans;
        ans = binSearch(a, 0, n, x);
        cout << ans << endl;
    }
    return 0;
}