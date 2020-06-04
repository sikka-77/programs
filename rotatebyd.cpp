#include <bits/stdc++.h>
using namespace std;
int findMax(int a[], int n)
{
    int low = 0;
    int high = n - 1;
    int mid;
    while (low < high)
    {
        mid = (low + high) / 2;
        if (a[mid] < a[mid + 1])
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }
    return low;
}

int main()
{
    int n;
    cout << "enter sie of array : ";
    cin >> n;
    int a[n];
    cout << "enter elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int point = findMax(a, n);
    cout << "max elemt is : " << a[point];
}