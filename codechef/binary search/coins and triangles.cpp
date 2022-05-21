#include<bits/stdc++.h>
#define ll long long
using namespace std;


void solve()
{
    int N;
    cin>>N;
    ll lo =1,hi=1e9,mid =0,temp=0;
    while(lo<hi)
    {
        mid = lo +(hi-lo)/2;///to prevent overflow in case of large numbers
        ll coins = (mid*(mid+1))/2;
        if(coins<=N)
        {
            temp = mid;
            lo = mid+1;
        }
        else
            hi = mid;
    }
    cout<<temp<<endl;
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
