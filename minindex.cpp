#include <bits/stdc++.h>
using namespace std;

int main()
{
    //code
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        string pat;
        cin >> str;
        cin >> pat;
        // int found = pat.find(str[0]);
        // cout << found;
        int flag = 0;
        char ch;
        int index;
        for (int i = 0; i < str.length(); i++)
        {
            index = pat.find(str[i]);
            if (index != -1)
            {
                flag = 1;
                ch = str[i];
                break;
            }
        }
        if (flag == 1)
        {
            cout << ch << endl;
        }
        else
        {
            cout << "$" << endl;
        }
    }
    return 0;
}