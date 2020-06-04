#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[12] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0};
    if (binary_search(a, a + 6, 2))
        cout << "yes" << endl;
    sort(a, a + 6);

    int lb = lower_bound(a, a + 12, 1) - a;
    cout << lb << endl;
    int up = upper_bound(a, a + 12, 1) - a;
    cout << up;
}