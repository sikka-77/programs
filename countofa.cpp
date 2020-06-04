#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    string str = s;
    while (str.length() < n)
    {
        str = str + s;
    }

    int i = 0;
    int count = 0;

    while (i < n)
    {
        if (str[i] == 'a')
        {
            count++;
        }
        i++;
    }
    cout << count;
}