#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<int> s2;
    int a[5] = {2, 3, 1, 3, 6};
    //set<int> s;

    /*for (int i = 0; i < 5; i++)
    {
        s.insert(a[i]);
    }*/
    for (int i = 0; i < 5; i++)
    {
        s2.insert(a[i]);
    }
    //set<int>::iterator it;

    unordered_set<int>::iterator it2;

    /*for (it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }*/
    cout << "\n";
    for (it2 = s2.begin(); it2 != s2.end(); it2++)
    {
        cout << *it2 << " ";
    }
}