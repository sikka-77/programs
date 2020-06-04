#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter n ";
    cin >> n;
    int table[n + 1];
    table[0] = 1;
    table[1] = 1;
    table[2] = 2;
    for (int i = 3; i <= n; i++)
    {
        table[i] = table[i - 1] + 1;
    }
    cout << "ans is " << table[n];
}