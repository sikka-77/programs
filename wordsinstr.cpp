#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Geeks.for.geeks";
    stack<string> st;
    string word = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '.')
        {
            st.push(word);
            word = "";
        }
        else
        {
            word = word + str[i];
        }
    }
    st.push(word);
    cout << st.top();
    st.pop();
    while (!st.empty())
    {
        string res = st.top();
        cout << "." << res;
        st.pop();
    }
}