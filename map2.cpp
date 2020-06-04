#include <bits/stdc++.h>
using namespace std;

int main()
{
    //code
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }

        int y = n / 2;
        int flag = 0;
        map<int, int>::iterator it;
        for (it = mp.begin(); it != mp.end(); it++)
        {
            if (it->second > y)
            {
                cout << it->first << endl;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}