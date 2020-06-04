#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[6] = {16, 17, 4, 3, 5, 2};

    int max;
    int temp;
    int n = 6;

    max = a[n - 1];
    a[n - 1] = -1;

    for (int i = n - 2; i >= 0; i--)
    {
        temp = a[i];
        a[i] = max;
        if (temp > max)
            max = temp;
    }
    for (int j = 0; j < n; j++)
    {
        cout << a[j] << " ";
    }
}