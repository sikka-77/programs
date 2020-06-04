#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

void reverse(int a[], int low, int high)
{
    while (low < high)
    {
        swap(&a[low], &a[high]);
        low++;
        high--;
    }
}

int main()
{
    int n;
    int d;
    cin >> n;
    cin >> d;
    int a[n];
    for (int j = 0; j < n; j++)
    {
        cin >> a[j];
    }
    reverse(a, 0, d - 1);
    reverse(a, d, n - 1);
    reverse(a, 0, n - 1);

    for (int k = 0; k < n; k++)
        cout << a[k] << " ";
}