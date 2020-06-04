#include <bits/stdc++.h>
using namespace std;

void fib(int *a, int n)
{
    //int fib[n+1];

    int i;
    a[0] = 0;
    a[1] = 1;
    int temp = 0;
    for (i = 2; i < n; i++)
    {
        temp = a[i - 1] + a[i - 2];
        a[i] = temp % 10;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        fib(a, n);
        /* for (int i = 0; i < n; i++)
         {
             cout << a[i] << " ";
         }
        */

        vector<int> v;
        v.assign(a, a + n);
        vector<int>::iterator it;
        vector<int>::iterator it2;
        // for (it = v.begin(); it != v.end(); ++it)
        // {
        //     v.erase(it);
        //     it++;
        // }
        it = v.begin();
        int flag = 0;
        while (v.size() != 1)
        {
            if (it == v.end())
            {
                flag = 1;
            }
            it2 = it;
            it = it + 2;
            v.erase(it2);

            if (flag == 1)
            {
                it = v.begin();
                flag = 0;
            }
        }
        for (it = v.begin(); it != v.end(); it++)
        {
            cout << *it << " ";
        }
    }
}