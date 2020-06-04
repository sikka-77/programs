#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[6] = {16, 17, 4, 3, 5, 2};
    int size = 6;
    int ans[6];
    int i;
    int k = 0;
    int maxRight;
    maxRight = a[size - 1];
    ans[k++] = maxRight;

    for (i = size - 2; i >= 0; i--)
    {
        if (maxRight < a[i])
        {
            maxRight = a[i];
            ans[k++] = maxRight;
        }
    }
    for (int l = 0; l < k; l++)
    {
        cout << ans[l] << endl;
    }
}