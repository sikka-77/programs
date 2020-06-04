#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int i;
        int temp = 0;
        int sum = 0;
        i = 1;
        while (1)
        {
            temp = i ^ n;
            sum = i + n;
            // cout << temp << "   ";
            // cout << sum << endl;
            if (sum == temp)
            {
                break;
            }
            else
            {
                i++;
            }
        }
        cout << i << endl;
    }
}