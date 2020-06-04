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
    //code
    int t;
    cin >> t;
    while (t--)
    {
        int n, d;
        cin >> n >> d;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int temp;
        temp = n - d - 1;
        reverse(a, 0, temp);
        reverse(a, n - d, n - 1);
        reverse(a, 0, n - 1);

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}