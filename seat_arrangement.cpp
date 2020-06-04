
#include <bits/stdc++.h>
using namespace std;

string chekType(int seat)
{
    if (seat % 3 == 0)
    {
        return "AS";
    }
    else if (seat % 3 == 1)
    {
        return "WS";
    }
    else if (seat % 3 == 2)
    {
        return "MS";
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
        int seat = 0;
        string seat_type = "";
        int frac = 0;
        frac = n % 6;
        switch (frac)
        {
        case 0:
            seat = n + 1;
            break;
        case 1:
            seat = n + 11;
            break;
        case 2:
            seat = n + 9;
            break;
        case 3:
            seat = n + 7;
            break;
        case 4:
            seat = n + 5;
            break;
        case 5:
            seat = n + 3;
            break;
        }
        seat_type = chekType(seat);
        cout << seat << " " << seat_type;
    }
}