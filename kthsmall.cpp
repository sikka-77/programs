#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, a[2];
    int k;
    /* cout << "enter number of test cases : ";
    cin >> t;*/
    cout << "enter size of array : ";
    cin >> n;
    int b[n];
    cout << "enter elements :";
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    cout << "enter k for smalest : ";
    cin >> k;
    sort(b, b + n);
    cout << "ans is : " << b[k - 1];
}