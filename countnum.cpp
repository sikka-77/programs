#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5] = {10, 3, 5, 6, 2};
    int p[5];
    int prod = 1;
    for (int k = 0; k < 5; k++)
    {
        prod = prod * a[k];
    }
    for (int i = 0; i < 5; i++)
    {
        p[i] = prod / a[i];
    }

    for (int b = 0; b < 5; b++)
    {
        cout << " " << p[b] << " ";
    }
    
}