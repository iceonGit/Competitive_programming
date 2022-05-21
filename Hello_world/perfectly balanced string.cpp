#include<bits/stdc++.h>
#define ll long long

using namespace std;


void solve()
{
   string str;
   cin>>str;
   set <char> s;
   int j;
   for(j =0;j<str.size();j++)
   {
       if(!s.count(str[j]))
       {
           s.insert(str[j]);

       }
       else
        break;
   }
   int ct = 0;
   for(int i =j ;i<str.size();i++) ///in case of all distinct this loop will never execute
   {
       if(str[i]!=str[i-j])
       {
           ct++;
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
