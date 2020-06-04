#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    map<char, int> m;

    for (int i = 0; i < s.length(); i++)
    {
        m[s[i]]++;
    }

    map<char, int>::iterator it;

    for (it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
        }
}