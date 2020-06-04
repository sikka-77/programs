#include <bits/stdc++.h>
using namespace std;


int main()
{
    int m,n;
    cin >> m >>n;
    int a[m][n];
    cout << "enter elemnts : ";
    int sum[m];
    int ans;
    for(int k=0;k<m;k++)
    {
        sum[k]=0;
    }
   
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> a[i][j];
            if(a[i][j]==1)
            {
                sum[i]=sum[i]+1;
            }
        }
    }
    int max=sum[0];
    for(int h=0;h<m;h++)
    {
        if(sum[h]>max)
        {
            max=sum[h];
            ans=h;
        }
    }
    cout << "ans is : ";
    cout << ans;
    
}