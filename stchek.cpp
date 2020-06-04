#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "ge4ek1s100";
    // char ch = str[1];
    // int found = str.find(str[1]);
    // cout << ch << endl;

    string s = "";
    int sum = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (isdigit(str[i]))
        {
            s = s + str[i];
        }
        else
        {

            sum = sum + atoi(s.c_str());
            s = "";
        }
    }
    sum = sum + atoi(s.c_str());
    cout << sum << endl;
}