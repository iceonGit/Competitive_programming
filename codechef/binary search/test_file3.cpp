#include<bits/stdc++.h>
#define ll long long
using namespace std;
double eps =1e-6;

int main()
{
    double x;
    cin>>x;
    double l = 1, r =x,mid;
    while(r-l>eps)
    {
        mid = l+(r-l)/2;
        if(mid*mid < x)
        {
            l=mid; /// low will change until the last truth value for funcn
        }
        else
            r=mid;

    }
    cout<<l<<endl;
}
