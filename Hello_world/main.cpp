#include<bits/stdc++.h>
#define pb push_back
#define vi vector<int>
#define ll long long
#define mi map<int,int>

using namespace std;

void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i =0;i<n;i++)
    {
        cin>>a[i];
    }
    int l =-1, r = -1;
    for(int i =1;i<n;i++)
    {
        if(a[i]==a[i-1])
        {
            if(l==-1)
            {
                l = i;
            }
            r =i;
        }
    }
    if(l==r)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<max(1,r-l-1)<<endl;
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
