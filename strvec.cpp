#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> st;
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        st.push_back(s);
    }

    vector<string>::iterator it;
    it = st.begin();
    // //cout << it[0];
    // for (int i = 0; i < it[0].length(); i++)
    // {
    //     cout << it[0][i] << "  ";
    // }
    for (it = st.begin(); it != st.end(); it++)
    {
        cout << *it << endl;
    }
}