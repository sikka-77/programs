#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[7] = {3, 3, 3, 4, 5, 4, 5};
    //int b[6] = {3, 4, 5};
    int res = 0;
    for (int i = 0; i < 7; i++)
    {
        res = res ^ a[i];
    }
    cout << res;
}