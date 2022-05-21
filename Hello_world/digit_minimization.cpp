#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std;

void solve()
{
    int n;
    cin>>n;
    if(floor(log10(n))+1==2)
       {
           cout<<n%10<<endl;
       }
    else
        {
            int min = n%10;
            n/=10;
            while (n != 0)
            {
                if (min > n % 10)
                    min = n % 10;
                n /= 10;

            }
            cout<<min<<endl;
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
