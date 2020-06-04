#include <bits/stdc++.h>
using namespace std;
//min diff b/w any two elements
int main()
{
    int a[4] = {30, 5, 2, 9};
    int minDiff = INT_MAX;
    int n = 4;
    int b, c;
    int diff;
    sort(a, a + n);
    for (int i = n - 1; i > 0; i--)
    {
        diff = a[i] - a[i - 1];
        if (diff < minDiff)
        {
            minDiff = diff;
            b = a[i];
            c = a[i - 1];
            cout << b << " " << c << endl;
        }
    }
    cout << b << endl
         << c << endl;
}