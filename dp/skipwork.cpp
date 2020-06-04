#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[4] = {10, 5, 7, 10};
    int time = 0;
    int i;
    int j;
    if (a[0] > a[1])
    {
        time += a[1];
        for (int i = 2; i <= n; i++)
        {
            if (a[i] > a[0])
            {
                time = time + a[i + 1];
            }
        }
    }
}