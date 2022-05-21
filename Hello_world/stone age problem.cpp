#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define mi map<int,int>

using namespace std;

int main()
{

    int n,q;
    cin>>n>>q;

    vi a(n);
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
    }
    int k = 0;
    ll sum = 0;
    mi m;

    for(int i =0; i<n; i++)
    {
        sum+=a[i];
        m[i] = a[i];
    }
    while(q--)
    {
        int t;
        cin>>t;

        if(t==1)
        {
            ll i,x;
            cin>>i>>x;
            i--;

            if (!m.count(i))
            {
                m[i] = k;
            }
            sum -=m[i];
            m[i]=x;
            sum += m[i];


        }

        else
        {
            ll x;
            cin>>x;
            k = x;
            sum = (x*n);
            m.clear();
        }
        cout<<sum<<endl;
    }
}
