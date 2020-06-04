#include <bits/stdc++.h>
using namespace std;

int binSearch(int a[], int low, int high, int num)
{
    int mid;
    while (low < high)
    {
        mid = (low + high) / 2;
        if (num == a[mid])
        {
            return 1;
        }
        else if (num > a[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }
    return 0;
}
int main()
{
    int n;
    int x;
    cout << "enter size : ";
    cin >> n;
    cout << "enter the sum : ";
    cin >> x;
    int a[n];
    int number;
    sort(a, a + n);
    cout << "enter elemts : ";
    for (int j = 0; j < n; j++)
    {
        cin >> a[j];
    }
    int ans;

    for (int i = 0; i < n; i++)
    {
        number = x - a[i];
        if (binSearch(a, 0, n, number))
        {
            cout << a[i] << " " << number << endl;
        }
    }
}