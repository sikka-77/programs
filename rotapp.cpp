#include <bits/stdc++.h>
using namespace std; //to cehk if one string can be formed by any rotation by 2 places of other string

void swap(char *a, char *b)
{
    char c;
    c = *a;
    *a = *b;
    *b = c;
}

// void reverse(string str, int low, int high)
// {
//     while (low < high)
//     {
//         swap(&str[low], &str[high]);
//         low++;
//         high--;
//     }
// }

string leftRotate(string s, int d)
{
    //int n = s.length();
    reverse(s.begin(), s.begin() + d);
    reverse(s.begin() + d, s.end());
    reverse(s.begin(), s.end());

    return s;
}

string rightRotate(string s, int d)
{
    int n = s.length();
    reverse(s.begin(), s.begin() + n - d);
    reverse(s.begin() + n - d, s.end());
    reverse(s.begin(), s.end());
    return s;
}

int main()
{
    //code
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        string b;

        cin >> a >> b;

        string str = a;
        int flag = 0;

        if (leftRotate(str, 2) == b)
        {
            flag = 1;
        }
        else if (rightRotate(str, 2) == b)
        {
            flag = 1;
        }
        cout << flag << endl;
    }
    return 0;
}