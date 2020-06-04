//test3 file
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int i;
    cout << "enter number of steps : ";
    cin >> n;
    int table[n + 1];
    for (int j = 0; j < n; j++)
    {
        table[j] = 0;
    }
    table[0] = 1;
    table[1] = 1;
    table[2] = 2;
    for (i = 3; i <= n; i++)
    {
        table[i] = table[i - 1] + table[i - 2] + table[i - 3];
    }
    cout << "ans is " << table[n];
}