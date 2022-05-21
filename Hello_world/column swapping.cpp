#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define si set<int>
#define pb push_back
using namespace std;

void solve()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    vi v[n+1];
    si s;
    for(int i = 0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
            v[i].pb(a[i][j]);
        }
    }


    for(int i =0;i<n;i++)
    {
        sort(v[i].begin(),v[i].end());
        for(int j =0;j<m;j++)
        {
            if(a[i][j]!=v[i][j]) ///if the array is not sorted , we're checking this row-wise
            {
                s.insert(j);///inserting the column number for which the values don't match
            }
        }
    }
    if(!s.size())
        cout<<1<<"  "<<1<<endl;
    else if (s.size()>2)
        cout<<-1<<endl;
    else
    {
        int l = *(s.begin());
        int r = *(s.rbegin());

        int ct =0;
        for(int i = 0;i<n;i++)
        {
            if(a[i][l]!=v[i][r])        ///checking if every value in a's columns corresponds to the value in v's columns,
            {
                 ct=1;                  ///we're doing so because say one row in a might be in sorted order and will pass
                 break;                 ///the condition but for others below it might not be the case .
            }

        }
        if(ct)
            cout<<-1<<endl;
        else
            cout<<l+1<<"  "<<r+1<<endl;
    }

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
