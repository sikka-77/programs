#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    vector<int> v;
    cout << "enter nmber : ";
    cin >> num;
    int temp;
    vector<int>::iterator it;
    while (num != 0)
    {
        temp = num % 10;
        if (temp == 0)
        {
            v.push_back(5);
        }
        else
        {
            v.push_back(temp);
        }
        num = num / 10;
    }

    for (it = v.end() - 1;; it--)
    {
        cout << *it << endl;
        if (it == v.begin())
            break;
    }
}