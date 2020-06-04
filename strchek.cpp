#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // char str[10][30]; //2D array for storing strings
        int i, n;

        cin >> n;
        char str[n + 2][6];

        for (i = 0; i < n; i++)
        {
            //scanf("%s", string[i]);
            cin >> str[i];
        }

        cout << str[0];
        // for (i = 0; i < n; i++)
        // {
        //     //Print the string at current index
        //     //printf("%s  ", string[i]);

        //     cout << str[i];
        //     cout << endl;
        // }
    }

    return 0;
}