#include<bits/stdc++.h>
#define ll long long
#define vvi vector<vector<int>>
#define vpi vector<pair<int,int>>
using namespace std;


void solve()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i = 0 ;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int mx = 0;
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            int sum = a[i][j];
            for(auto [dl,dr]: vpi({{-1,-1},{-1,1},{1,1},{1,-1}}))
                {
                    for(int ii = i+dl,jj = j+dr;0<=ii&&ii<n &&0<=jj&&jj<m;ii+=dl,jj+=dr)
                    {
                        sum+=a[ii][jj];
                    }
                }
                mx = max(mx,sum);

        }
    }
    cout<<mx<<endl;

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
