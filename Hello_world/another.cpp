#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std;

int lower_bound(vi &v, int element)
{
    int lo = 1,hi = v.size(),lb = -1;
    while(lo<=hi)
    {
        int mid = (lo+hi)/2;
        if(v[mid -1]>=element)
        {
            lb = mid;
            hi = mid -1;
        }
        else
        {
            lo = mid + 1;
        }

    }
    return lb;

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
