#include <bits/stdc++.h>
using namespace std;

int main()
{
    int c;
    cin >> c;
    int n = 0;
    n = c;
    int time[c];
    int i = 0;
    int x = 0, y = 0, speed = 0;
    int time_req = 0;
    int dis = 0;
    int fin_dis = 0;
    while (c--)
    {
        cin >> x >> y >> speed;
        dis = (x * x) + (y * y);
        fin_dis = sqrt(dis);
        time_req = fin_dis / speed;
        time[i] = time_req;
        i++;
    }

    int coll = 0;

    map<int, int> mp;
    for (int j = 0; j < n; j++)
    {

        mp[time[j]] = mp[time[j]] + 1;
    }

    map<int, int>::iterator it;

    int temp = 0;
    for (it = mp.begin(); it != mp.end(); it++)
    {
        if (it->second > 1)
        {
            temp = (it->second) - 1;
            while (temp > 0)
            {
                coll = coll + temp;
                temp--;
            }
        }
    }
    cout << coll << endl;
}