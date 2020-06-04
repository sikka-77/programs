#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int t;
    cin >> t;
    int a[t];
    int count;
    int end = t;
    int i = 0;
    while (t--)
    {
        count = 0;
        cin >> n;
        while (n != 0)
        {
            if (n % 2 == 0)
            {
                n = n / 2;
                count++;
            }
            else
            {
                n--;
                count++;
            }
        }

        a[i] = count;
        i++;
    }
    for (int j = 0; j < end; j++)
    {
        cout << a[j] << endl;
    }
}