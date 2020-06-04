#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    //cout << s << " ";
    vector<int> v;
    for (int i = 0; i < s.length(); i++)
    {
        
        if (s[i] != ' ')
        {
            int temp = s[i] - '0';
            v.push_back(temp);
        }
    }
    for (int i : v)
    {
        cout << i << " ";
    }
}