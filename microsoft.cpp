#include <bits/stdc++.h>
using namespace std;

int binSearch(int a[], int low, int high, int num)
{
    int mid;
    while (low < high)
    {

        mid = (low + high) / 2;

        if (a[mid] == num)
        {
            return 1;
        }
        else if (num > a[mid])
        {
            low = mid + 1;
        }
        else if (num < a[mid])
        {
            high = mid;
        }
    }
    return 0;
}
int main()
{
    int n;
    cout << "enter count of elemnts : ";
    cin >> n;
    int number;
    int a[n];
    cout << "enter elemnts : ";
    for (int k = 0; k < n; k++)
    {
        cin >> a[k];
    }
    sort(a, a + n);

    for (int i = 1; i < n; i++)
    {
        number = a[i];
        if (binSearch(a, 0, i, number))
        {
            a[i] = a[i - 1] + 1;
        }
    }

    for (int b = 0; b < n; b++)
    {
        cout << a[b] << endl;
    }
}