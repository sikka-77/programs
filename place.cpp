#include <bits/stdc++.h>

using namespace std;
/* LCM OF 2 NUMBERS */
/*int lcm(int a, int b)
{
    int temp = max(a, b);
    int small = min(a, b);

    // if (abs(a - b) == 1)
    // {
    //     return a * b;
    // }

    int i = temp;
    while (1)
    {
        if (i % small == 0)
        {
            return i;
        }
        else
        {
            i += temp;
        }
    }
}*/
/* PRINT DUPLICATES IN ARRAY */

/* void printDuplicates(int a[], int n)
{
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[a[i]]++;
    }
    map<int, int>::iterator it;

    for (it = mp.begin(); it != mp.end(); it++)
    {
        if (it->second > 1)
        {
            cout << it->first << " ";
        }
    }
}*/

/* GCD OF 2 NUMBERS */

int gcd(int a, int b)
{

    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()

{
    int a, b;
    cin >> a >> b;
    int ans = gcd(a, b);
    cout << ans;
}