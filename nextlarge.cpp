#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[6] = {16, 17, 4, 3, 5, 2};
    int max;
    for (int i = 0; i < 6; i++)
    {
        max = a[i + 1];
        if (i == 5)
        {
            a[i] = -1;
        }
        else
        {
            for (int j = i + 1; j < 6; j++)
            {
                if (a[j] > max)
                    max = a[j];
            }
            a[i] = max;
        }
    }
    cout << "new array is : "
         << "\n";
    for (int k = 0; k < 6; k++)
    {
        cout << " " << a[k] << " ";
    }
}