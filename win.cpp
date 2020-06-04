#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        string str = "";
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == '.')
            {
                cout << str << ".";
                str = "";
            }
            else
                str = s[i] + str;
        }

        cout << str << endl;
    }

    return 0;
}