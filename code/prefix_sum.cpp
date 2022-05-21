#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std;

int lower_bound(vi &v, int element)
{
    int lo = 1,hi = v.size();
    while(hi-lo>1)
    {
        int mid = (hi + lo)/2;
        if(v[mid]<element)
        {
            lo = mid+1;
        }
        else
        {
            hi = mid;
        }

    }
    if(v[lo]>=element)
    {
        return lo;
    }
    else if (v[hi]>=element)
    {
        return hi;
    }
    else
    {
        return -1;
    }

}

int main()
{

    int t;
    cin>>t;
    while(t--)
    {

        int n,q;
        cin>>n>>q;
        vi v(n),pf(n);
        for(int i = 0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.rbegin(),v.rend());

        for(int i = 0;i<n;i++)
        {
            pf[i] = (i!=0 ? pf[i-1]:0) + v[i];
        }


        for(int i = 0 ;i<q;i++)
        {
            int item;
            cin>>item;
            int lb = lower_bound(pf,item);
            cout<<lb<<endl;
        }
    }


}
