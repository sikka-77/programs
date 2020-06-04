#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1 = "gfg";
    string s2 = "ffgg";
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
        cout << count1[i] << " " << count2[i] << endl;
        if (count1[i] != count2[i])
            flag = 1;
    }
    if (flag == 1)
    {
        cout << "false";
    }
}