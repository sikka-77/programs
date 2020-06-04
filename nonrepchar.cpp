#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    str = "bchbciiax";

    map<char, int> m;

    for (int i = 0; i < str.length(); i++)
    {
        m[str[i]]++;
    }

    map<char, int>::iterator it;

    for (it = m.begin(); it != m.end(); it++)
    {
        if (it->second == 1)
        {
            cout << it->first << endl;
            break;
        }
    }
}
