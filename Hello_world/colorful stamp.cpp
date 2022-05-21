#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    int ct = 0;
    for(int i = 0;i<n;i++)
    {
        if(str[i]!='W')
        {
            int r= 0,b =0;

            while(i<n && str[i]!='W')
            {
                if(str[i]=='R')
                {
                    r++;
                }

                else
                {
                    b++;
                }
                i++;

            }
            if(!b||!r)
            {
                ct++;
                break;
            }
        }
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
