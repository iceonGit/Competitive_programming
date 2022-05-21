#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define pb push_back
using namespace std;


void solve()
{
    int n;
    cin>>n;
    vi a(n);
    for(int i =0 ;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i = n%2;i<n;i+=2) ///i = n%2 is 0 or 1 depending upon the length of the array a
    {
        if(a[i]>a[i+1])
        {
            swap(a[i],a[i+1]);
        }

    }
    int ct=0;
    for(int i = 1;i<n;i++)
    {
        if(a[i]<a[i-1])
            ct=1;
    }
    if(!ct)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
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
