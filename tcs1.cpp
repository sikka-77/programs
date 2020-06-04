#include <bits/stdc++.h>
using namespace std;

void leftRotate(string &s, int d)
{
    reverse(s.begin(), s.begin() + d);
    reverse(s.begin() + d, s.end());
    reverse(s.begin(), s.end());
}
int checkAnagram(string s1, string s2)
{
    int count1[256] = {0};
    int count2[256] = {0};
    int i;
    for (i = 0; i < s1.length(); i++)
    {
        count1[s1[i]]++;
    }
    for (int j = 0; j < s1.length(); j++)
    {
        count2[s2[j]]++;
    }
    int flag = 0;

    for (i = 0; i < 256; i++)
    {

        if (count1[i] != count2[i])
            flag = 1;
    }
    if (flag == 1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    string s = "";
    cin >> s;
    int q = 0;
    cin >> q;
    char d[q];
    int r[q];
    for (int i = 0; i < q; i++)
    {
        cin >> d[i] >> r[i];
    }
    string str = "";
    int len = s.length();
    for (int i = 0; i < q; i++)
    {
        if (d[i] == 'L')
        {
            leftRotate(s, r[i]);
            str = str + s[0];
        }
        else if (d[i] == 'R')
        {
            leftRotate(s, len - r[i]);
            str = str + s[0];
        }
    }

    string str2 = "";
    int flag = 0;

    for (int i = 0; i <= len - i; i++)
    {
        str2 = s.substr(i, 3);
        if (checkAnagram(str, str2))
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}