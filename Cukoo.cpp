#include <bits/stdc++.h>
using namespace std;

int Cuckoo(int n)
{
    int temp = 0;
    if (n == 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }

    else
    {
        temp = 1 * Cuckoo(n - 1) + 2 * Cuckoo(n - 2) + 3 * 1;
    }
    return temp;
}
int main()
{
    int n;
    cin >> n;

    int ans = Cuckoo(n);
    cout << ans << endl;
}
