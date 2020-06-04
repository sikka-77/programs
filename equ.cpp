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
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum = sum + a[i];
        }
        if (n == 1)
        {
            cout << "1" << endl;
        }
        else
        {
            int sum2 = 0;
            sum2 = a[n - 1];
            int temp;
            for (int i = n - 2; i >= 0; i--)
            {
                temp = a[i];
                if (sum2 == (sum - temp - sum2))
                {
                    cout << i + 1 << endl;
                    break;
                }
                else
                {
                    sum2 = sum2 + temp;
                    //sum=sum+temp;
                }
            }
        }
    }
    return 0;
}