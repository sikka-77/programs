#include <iostream>
using namespace std;

int main()
{
    //code
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int x = 0; x < n; x++)
        {
            cin >> a[x];
        }

        int i, j;
        i = 0;
        j = n - 1;
        int count = 0;

        while (i < n)
        {
            if (i == j)
            {
                i++;
                j = n - 1;
            }
            else if (a[j] > a[i])
            {
                j--;
            }
            else if (a[j] < a[i])
            {
                count++;
                j--;
            }
        }
        cout << count << endl;
    }
    return 0;
}