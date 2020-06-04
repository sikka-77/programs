#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int t;
    cin >> t;
    int m = t + 1;
    int partic[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> partic[i][j];
        }
        g
    }
    int max = 0;
    int i = 0;
    int dis[n] = {0};
    int leader[n] = {0};
    int temp = 0;
    for (int k = 2; k <= t; k = k + 2)
    {
        for (i = 0; i < n; i++)
        {
            dis[i] = dis[i] + ((partic[i][k - 1] + partic[i][k - 2]) * partic[i][t]);
            if (dis[i] > max)
            {
                temp = i;
                max = dis[i];
            }
        }
        leader[temp]++;
    }
    //cout << leader + 1;
    int finmax = leader[0];
    int v;
    int ans = 0;
    for (v = 0; v < n; v++)
    {
        if (leader[v] > finmax)
        {
            finmax = leader[v];
            ans = v;
        }
    }
    cout << ans + 1 << endl;
}