#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[6] = {2, 2, 2, 2};
    int ub, lb;
    ub = upper_bound(a, a + 4, 1) - a;
    lb = lower_bound(a, a + 4, 1) - a;
    cout << "\n"
         << ub - lb << endl;
    cout << lb << endl;
}