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
        int a[n];
        for (int i = n - 1; i >= 0; i--)
        {
            cin >> a[i];
        }
        int lb = lower_bound(a, a + n, 1) - a;
        int res = n - lb;
        cout << res << endl;
    }
    return 0;
}