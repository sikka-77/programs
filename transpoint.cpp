#include <bits/stdc++.h>
using namespace std;

int transPoint(int a[], int n)
{
    int low = 0;
    int high = n - 1;
    int mid;
    while (low < high)
    {
        mid = (low + high) / 2;
        if (a[mid] == 1)
        {
            high = mid;
        }
        else
        {
            low = mid + 1;
        }
    }
    return low;
}
int main()
{
    int a[8] = {0, 0, 1, 1, 1, 1, 1, 1};
    transPoint(a, 8);
}