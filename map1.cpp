#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    map<int, int> m;
    for (int j = 0; j < n; j++)
    {
        m[a[j]] = m[a[j]] + 1;
    }

    map<int, int>::iterator it;

    for (it = m.begin(); it != m.end(); it++)
    {
        if ((it->second / 2) >= 1)
        {

            sum = sum + ((it->second) / 2);
        }
    }
    /*for (it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " : " << it->second << endl;
    }*/
    cout << sum << endl;
}