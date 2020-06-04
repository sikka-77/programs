#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << " enter number of elements in array : ";

    cin >> n;

    //cin >> n;
    int a[n];
    cout << "enter array elements : ";

    vector<int> odd;
    vector<int> even;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
        {
            even.push_back(a[i]);
        }
        else
        {
            odd.push_back(a[i]);
        }
    }

    vector<int>::iterator it;
    cout << "odd elements are : " << endl;
    for (it = odd.begin(); it != odd.end(); it++)
    {
        cout << *it << " ";
    }
    cout << "even elements are : " << endl;
    for (it = even.begin(); it != even.end(); it++)
    {
        cout << *it << " ";
    }
}