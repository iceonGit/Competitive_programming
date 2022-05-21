#include<bits/stdc++.h>
#define vi vector<int>
#define ll long long
using namespace std;

void solve()
{
    string s;
    cin>>s;
    ll ct1=0, ct0 = 0;
    ll n = s.size();
    for(ll i = 0;i<n;i++)
    {
        if(s[i]=='1')
        {
            ct1 = i+1;
        }

    }
    for(ll i = 0;i<n;i++)
    {
        if(s[i]=='0')
        {
            ct0 =i+1;
            break;
        }

    }
    if(ct1==0&&ct0==0)
    {
        cout<<n<<endl;
    }
    else if(ct1==0)
    {
        cout<<ct0<<endl;
    }
    else if(ct0==0)
    {
        cout<<n-ct1+1<<endl;
    }
    else
    {
        cout<<abs(ct1-ct0)+1<<endl;
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
