#include <bits/stdc++.h>
using namespace std;

int countProx(int n, int d)
{
    float perc;
    float frac;
    frac = (float)n / (float)d;
    perc = (float)frac * (float)100;
    //cout << perc << endl;
    if (perc >= 75)
        return 1;
    else
        return 0;
}

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int d;
        cin >> d;
        string s;
        cin >> s;
        int count = 0;
        for (int i = 0; i < d; i++)
        {
            if (s[i] == 'P')
            {
                count++;
            }
        }
        // cout << count << endl;
        /*float res;
	    res=(count/d)*100;
	    if(res >= 75)
	    {
	        cout << "0";
	        break;
	    }*/
        int temp = 0;
        int temp2 = 0;
        int flag = 0;
        for (int j = 2; j < d - 2; j++)
        {
            if (s[j] == 'A')
            {
                if ((s[j - 1] == 'P' || s[j - 2] == 'P') && (s[j + 1] == 'P' || s[j + 2] == 'P'))
                {
                    temp = temp + 1;
                    temp2 = temp + count;
                    if (countProx(temp2, d))
                    {
                        flag = 1;
                        cout << temp << endl;
                        break;
                    }
                }
                // else if (s[j + 1] == 'P' || s[j + 2] == 'P')
                // {
                //     temp = count + 1;
                //     if (countProx(temp2, d))
                //     {
                //         cout << "hi";
                //         flag = 1;
                //         cout << temp << endl;
                //         break;
                //     }
                // }
            }
        }
        if (flag == 0)
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}
