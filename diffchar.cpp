#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int count[256] = {0};
    int temp = 1;
    int final = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (count[str[i]] == 0)
        {
            count[str[i]]++;
            temp++;
            if (temp > final)
            {
                final = temp;
            }
        }
        else
        {
            temp = 1;
        }
    }
    cout << final << endl;
}