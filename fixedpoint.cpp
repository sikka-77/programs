#include <bits/stdc++.h>
using namespace std;

int binSearch(int a[], int low, int high)
{
    int mid;

    while (low < high)
    {
        mid = (low + high) / 2;

        //mid = low + (high - low + 1) / 2;

        if (a[mid] == mid)
        {
            return mid;
        }
        else if (mid > a[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }
    return -1;
}
int main()
{
    int a[6] = {0, 2, 5, 8, 17};
    int n = 6;
    int point;
    point = binSearch(a, 0, 6);
    cout << "fixed point is : " << point;
}