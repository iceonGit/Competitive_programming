#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define vll vector<long long>
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    vll v(n),a;
    for(int i = 0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i = 0;i<n;i++)
    {
        auto it = upper_bound(a.begin(),a.end(),v[i]);
        if(it==a.end())
            a.pb(v[i]);
        else
            *it = v[i];

    }
    cout<<a.size()<<"   ";
    for(auto &it:a)
    {
        cout<<it<<" ";
    }
    cout<<endl;
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
