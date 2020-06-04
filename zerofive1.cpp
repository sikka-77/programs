#include <bits/stdc++.h>
using namespace std;

int main()
{
    string num;
    cout << "enter number : ";
    cin >> num;
    int len = num.length();
    for (int i = 0; i < len; i++)
    {
        if (num[i] == '0')
        {
            num[i] = '5';
        }
    }
    cout << num;
}